#!/bin/bash

echo "Enter a decimal number: "
read decimal

octal=""
while [ $decimal -gt 0 ]; do
  remainder=$((decimal % 8))
  octal="$remainder$octal"
  decimal=$((decimal / 8))
done

echo "Octal representation: $octal"
