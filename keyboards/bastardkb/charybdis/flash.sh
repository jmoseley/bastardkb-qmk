#!/bin/bash

echo "Compiling the keyboard"

qmk compile -c -kb bastardkb/charybdis/4x6 -km coding

echo "Connect the right hand side of the keyboard in bootloader mode"

# wait for confirmation that keyboard is connected and in bootloader mode
read -p "Press Enter to flash the right hand side of the keyboard"

echo "Flashing the right hand side of the keyboard"

qmk flash -kb bastardkb/charybdis/4x6 -km coding

echo "Connect the left hand side of the keyboard in bootloader mode"

# wait for confirmation that keyboard is connected and in bootloader mode
read -p "Press Enter to flash the left hand side of the keyboard"

echo "Flashing the left hand side of the keyboard"

qmk flash -kb bastardkb/charybdis/4x6 -km coding

echo "Remember to connect the halves together before connecting to your computer"
