# wic-image
# 🔐 SHC Compiled C File

This repository contains a `.c` file generated using the `shc` tool to protect the original shell script.

---

## 📦 Install `shc`

To generate `.c` files from your own shell scripts in the future, install `shc`:

### On Ubuntu/Debian:

```bash
sudo apt update
sudo apt install shc
gcc image-wic.c -o image-wic
image-wic ./openbmc/build/
