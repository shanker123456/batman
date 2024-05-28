#!/bin/bash

echo "Enter a decimal number: "
read decimal

hex=""
while [ $decimal -gt 0 ]; do
  remainder=$((decimal % 16))
  hex="$(printf "%x" $remainder)$hex"
  decimal=$((decimal / 16))
done

echo "Hexadecimal representation: $hex"
