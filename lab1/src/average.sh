#!/bin/bash

if [ $# -eq 0 ]; then
    echo "No arguments"
    exit 1
fi

count=$#
echo "Количество чисел: $count"

sum=0

for num in "$@"; do
    if ! [[ "$num" =~ ^[0-9]+$ ]]; then
        echo "$num is not a number"
        exit 1
    fi
    sum=$((sum+num))
done

average=$(echo "scale=2; $sum / $count" | bc -l)


echo "Среднее арифметическое: $average"