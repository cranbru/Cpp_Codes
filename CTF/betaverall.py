import base64
import codecs
import binascii
import urllib.parse
from collections import Counter
from PIL import Image

def try_all_decoders(encoded_string):
    """
    Attempts to decode the given encoded string using various decoding methods.

    Parameters:
        encoded_string (str): The string in encoded format.

    Returns:
        dict: A dictionary of successful decodings with method names as keys and decoded strings as values.
    """
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

def xor_decrypt(encoded_string, key):
    """
    Decrypts an XOR-encoded string with a given key.

    Parameters:
        encoded_string (str): The encoded string (in hex or raw).
        key (str or int): The key used for XOR decryption.

    Returns:
        str: The decrypted string.
    """
    try:
        if all(c in "0123456789abcdefABCDEF" for c in encoded_string):  # Check for hex input
            encoded_string = bytes.fromhex(encoded_string)
        else:
            encoded_string = encoded_string.encode()

        if isinstance(key, int):  # Single-byte key
            key = chr(key) * len(encoded_string)
        elif isinstance(key, str):
            key = key * (len(encoded_string) // len(key)) + key[:len(encoded_string) % len(key)]

        decoded = ''.join(chr(b ^ ord(k)) for b, k in zip(encoded_string, key.encode()))
        return decoded
    except Exception:
        return None

def binary_to_text(binary_string):
    """
    Converts a binary string to plain text.

    Parameters:
        binary_string (str): The binary string (e.g., "01001000 01100101").

    Returns:
        str: The decoded plain text.
    """
    try:
        binary_values = binary_string.split()
        ascii_characters = [chr(int(b, 2)) for b in binary_values]
        return ''.join(ascii_characters)
    except ValueError:
        return None

def frequency_analysis(ciphertext):
    """
    Performs frequency analysis on a given ciphertext.

    Parameters:
        ciphertext (str): The input ciphertext.

    Returns:
        dict: A dictionary of character frequencies sorted by most common.
    """
    frequencies = Counter(ciphertext)
    return frequencies.most_common()

def caesar_brute_force(ciphertext):
    """
    Attempts to brute force a Caesar cipher by trying all shifts.

    Parameters:
        ciphertext (str): The encoded string.

    Returns:
        list: A list of all possible decoded strings.
    """
    results = []
    for shift in range(26):
        decoded = ''.join(
            chr((ord(char) - shift - 65) % 26 + 65) if char.isupper() else
            chr((ord(char) - shift - 97) % 26 + 97) if char.islower() else char
            for char in ciphertext
        )
        results.append(f"Shift {shift}: {decoded}")
    return results

def hexdump(data, width=16):
    """
    Displays a hex dump of the given data.

    Parameters:
        data (bytes): The data to dump.
        width (int): Number of bytes per line.
    """
    dump = []
    for i in range(0, len(data), width):
        hex_values = ' '.join(f"{b:02x}" for b in data[i:i+width])
        ascii_values = ''.join(chr(b) if 32 <= b < 127 else '.' for b in data[i:i+width])
        dump.append(f"{i:08x}  {hex_values:<{width*3}}  {ascii_values}")
    return '\n'.join(dump)

def extract_lsb(image_path):
    """
    Extracts data hidden in the least significant bit of an image.

    Parameters:
        image_path (str): Path to the image file.

    Returns:
        str: The extracted binary data.
    """
    try:
        img = Image.open(image_path)
        binary_data = ""

        for pixel in img.getdata():
            for channel in pixel[:3]:  # RGB channels
                binary_data += str(channel & 1)  # Extract LSB

        # Convert binary data to ASCII if possible
        ascii_data = ''.join(chr(int(binary_data[i:i+8], 2)) for i in range(0, len(binary_data), 8))
        return ascii_data
    except Exception:
        return None

# Example usage
if __name__ == "__main__":
    encoded_data = "SGVsbG8gd29ybGQh"  # Example base64 for "Hello world!"

    print("Decoding results:")
    results = try_all_decoders(encoded_data)
    for method, result in results.items():
        print(f"[{method}] {result}")

    print("\nFrequency Analysis:")
    print(frequency_analysis("YMNX NX F QNPJ FSI QNPJX RJXXFLJ"))

    print("\nCaesar Brute Force:")
    for result in caesar_brute_force("URYYB JBEYQ"):
        print(result)

    print("\nHexdump:")
    print(hexdump(b"Hello, world!"))

    print("\nBinary to Text:")
    print(binary_to_text("01001000 01100101 01101100 01101100 01101111"))

    print("\nXOR Decryption:")
    print(xor_decrypt("3c2d2e2f", "key"))
