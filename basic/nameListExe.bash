#!/bin/false

echo "What is your first name? "
read fullName[0]
echo "What is your middle name? "
read fullName[1]
echo "what is your last name? "
read fullName[2]

nameType=(first middle last)
counter=0


for name in "${fullName[@]}"
do
    echo "Your ${nameType[$counter]} is ${name}"
    ((counter++))
done
