import base64

def decode_base64_multiple_times():
    """
    Takes a Base64-encoded string as input from the user and decodes it three times,
    printing the result after each decoding. Also removes 'b' at the start and "'" at the end
    of the decoded string if they exist.
    """
    encoded_string = input("Enter the Base64-encoded string: ")

    for i in range(1, 4):
        try:
            # Decode the Base64 string
            decoded_bytes = base64.b64decode(encoded_string)
            decoded_string = decoded_bytes.decode('utf-8')

            # Check if it starts with 'b' and ends with "'"
            if decoded_string.startswith('b') and decoded_string.endswith("'"):
                decoded_string = decoded_string[1:-1]  # Remove 'b' from the start and "'" from the end

            print(f"Decoding {i}: {decoded_string}")
            encoded_string = decoded_string  # Use the decoded string for the next iteration
        except Exception as e:
            print(f"Error during decoding {i}: {e}")
            break

if __name__ == "__main__":
    decode_base64_multiple_times()
