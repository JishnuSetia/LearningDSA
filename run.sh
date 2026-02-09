#!/bin/bash

printf -- "\n----------------------------------------"
printf -- "\nRUNNING CODE FILE - $1"
printf -- "\n----------------------------------------\n\n"

if [[ "$1" =~ \.c$ ]]; then
gcc -Wall -Wextra $1
if [ $? -ne 0 ]; then
    echo "Compilation failed!"
    exit 1
fi
./a.out
rm a.out

elif [[ "$1" =~ \.py$ ]]; then
python $1

elif [[ "$1" =~ \.java$ ]]; then
java $1

elif [[ "$1" =~ \.js$  ]]; then
node $1

else
echo "Unidentified File Type. This script only supports C, Java, Python, and JavaScript."

fi


printf -- "\n\n----------------------------------------"
printf -- "\nExecution Complete with exit code $?"
printf -- "\n----------------------------------------\n\n"

