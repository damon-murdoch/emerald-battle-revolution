#/bin/bash

# Update Packages
sudo apt update && sudo apt upgrade -y

# Install Linux build tools
sudo apt install -y \
    build-essential \
    binutils-arm-none-eabi \
    gcc-arm-none-eabi \
    libnewlib-arm-none-eabi \
    git wget libpng-dev 

# Install DevKitPro
wget https://apt.devkitpro.org/install-devkitpro-pacman
chmod +x ./install-devkitpro-pacman
sudo ./install-devkitpro-pacman
sudo dkp-pacman -S gba-dev

# Set devkitPro environment vars
source /etc/profile.d/devkit-env.sh

# Install Python3
sudo apt install python3
