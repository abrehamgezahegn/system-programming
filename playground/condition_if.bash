#!/bin/bash

echo "What's your name?"

read name;

if [ "$name" = "Abreham" ] || [ $name = "Abr" ];then
    echo "Oh it's you?"
else
    echo "No baba!"
fi

#!/bin/sh
# user=`whoami`
# if [ $user = "abreham" ]
# then
# echo "Hi Aber!"
# fi


# number operation 
# -eq,-ne,-le,-lt,-ge,-gt


# string operation
# = , != , -z (length is zero), -n (lenght is not zero)

# file operation
# -f - if its a file
# -d - if its a dir
# -s - if its a file and has size > 0


# -a - and 
# -o or ||  - or