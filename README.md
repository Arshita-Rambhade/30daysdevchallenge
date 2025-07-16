
# 🔐 Vigenère Cipher Decryption

## ✅ Decrypted Message
**welcome to cipher day one challenge!**

## 🧠 Explanation of Logic
- The keyword `"github"` is repeated to match the encrypted message length.
- Each letter in the encrypted message is decrypted by subtracting the key letter’s position from it.
- The alphabet wraps around using modulo 26.
- Non-alphabetic characters like spaces and punctuation are preserved.

