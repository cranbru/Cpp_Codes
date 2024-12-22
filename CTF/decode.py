import base64
import codecs
import binascii
import urllib.parse

def try_all_decoders(encoded_string):

    decoding_methods = [
        'base64', 'base32', 'base16', 'rot13', 'hex', 'url', 'binary'
    ]

    decoded_results = {}

    for method in decoding_methods:
        try:
            if method == 'base64':
                decoded_results[method] = base64.b64decode(encoded_string).decode('utf-8')
            elif method == 'base32':
                decoded_results[method] = base64.b32decode(encoded_string).decode('utf-8')
            elif method == 'base16':
                decoded_results[method] = base64.b16decode(encoded_string).decode('utf-8')
            elif method == 'rot13':
                decoded_results[method] = codecs.decode(encoded_string, 'rot_13')
            elif method == 'hex':
                decoded_results[method] = bytes.fromhex(encoded_string).decode('utf-8')
            elif method == 'url':
                decoded_results[method] = urllib.parse.unquote(encoded_string)
            elif method == 'binary':
                binary_string = ''.join(chr(int(encoded_string[i:i+8], 2)) for i in range(0, len(encoded_string), 8))
                decoded_results[method] = binary_string
        except Exception:
            pass

    return decoded_results

# Example usage:
if __name__ == "__main__":
    # An example encoded string (replace with your own data)
    encoded_data = "d3BqdkpBTXtqaGx6aHlfazNqeTl3YTNrXzg2a2wzMmsyfQ=="  # Base64 example for "Hello world!"

    # Try decoding with all methods
    results = try_all_decoders(encoded_data)

    # Print the decoding results
    if results:
        print("Decoded outputs:")
        print('\n')
        for method, output in results.items():
            print(f"[{method}] {output}")
            print('\n')
    else:
        print("No successful decoding.")
