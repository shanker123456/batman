#!/bin/bash
#sudo apt-get install bc
binary_number="1101"

decimal_number=$(echo "ibase=2; $binary_number" | bc)

echo "Binary: $binary_number"
echo "Decimal: $decimal_number"
