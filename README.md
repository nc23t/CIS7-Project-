 Vigenère Cipher Program

This is my C++ implementation of the Vigenère cipher, a method of encrypting and decrypting text using a keyword. The program processes only alphabetic characters, preserving case sensitivity, and skips over non-alphabetic characters without modifying them.

---

 Features
- Encrypts alphabetic messages using the Vigenère cipher.
- Decrypts ciphered messages back to their original form.
- Preserves non-alphabetic characters (e.g., numbers, symbols) in their original form.

---

 Programming Approach
The program utilizes:
1. Modular Arithmetic: To wrap around the alphabetic characters during encryption and decryption.
2. Character Base Adjustment: Determines whether each character is uppercase or lowercase and processes accordingly.
3. Key Repetition: Extends the provided keyword to match the length of the message for cyclic encryption and decryption.
4. Efficient Processing: Skips non-alphabetic characters while preserving their order in the text.

The encryption and decryption processes are implemented in the `encrypt` and `decrypt` functions respectively.

---

 How to Use
1. Compilation: Compile the program using a C++ compiler
2. Input a word and a key (use alphabetic values) then press enter 
