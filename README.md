# Emir Shell - Custom Linux Shell 🔧
*A simple yet powerful shell implementation for Linux systems*

![Shell Demo](https://img.shields.io/badge/Status-Functional-brightgreen) 
![License](https://img.shields.io/badge/License-GPL--3.0-orange)
## 📖 Overview
Shell kustom yang dikembangkan untuk memulihkan shell yang hilang di lab jaringan. Dibangun menggunakan C dengan library `readline`, mendukung berbagai command dasar dan fitur khusus dengan arsitektur modular.

**Fitur Utama:**
- 🖨️ Operasi file dengan enkripsi Caesar cipher
- 🧮 Kalkulator floating point
- 📂 Manajemen proses dan direktori
- 🔒 Enkripsi/dekripsi file otomatis
- 🕒 System information & time display

**Tech Stack:**
- `C Language` - Bahasa utama
- `fork()/exec()` - Process management
- `readline library` - Input handling
- `Linux System Calls` - File operations

## ✨ Features
### Core Features
- **File Operations**
  - Create/write files (`buatdong`)
  - Read files (`bacadong`)
  - Encrypted file handling (`rahasiabanget`/`pembacapikiran`)
  
- **Calculator**
  - Basic arithmetic operations (`itungwoi`)
  - Error handling division by zero
  - Float precision (2 decimal places)

- **System Interaction**
  - Process listing (`lihatproses`)
  - Directory management (`buatdir`, `listfile`)

### Additional Features
- Custom ASCII art landing page
- Command history navigation (↑/↓ keys)
- Auto-complete commands
- Colorful help menu

## 🛠️ Installation
**Requirements:**
- Linux OS
- GCC compiler
- readline library

```bash
# Clone repository
git clone https://github.com/yourusername/emir-shell.git
cd emir-shell

# Install dependencies
sudo apt install build-essential libreadline-dev

# Compile
make all

# Run shell
./emir_shell

🚀 Usage
# Basic file operations
netlab>> buatdong contoh.txt "Hello World"
netlab>> bacadong contoh.txt

# Encrypted file handling
netlab>> rahasiabanget secret.txt "My Password"
netlab>> pembacapikiran secret.txt

# System info
netlab>> waktushow
netlab>> infosistem

# Process management
