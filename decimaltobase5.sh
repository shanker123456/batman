#!/bin/bash

echo "Enter a decimal number: "
read decimal

base5=""
while [ $decimal -gt 0 ]; do
  remainder=$((decimal % 5))
  base5="$remainder$base5"
  decimal=$((decimal / 5))
done

echo "Base 5 representation: $base5"

