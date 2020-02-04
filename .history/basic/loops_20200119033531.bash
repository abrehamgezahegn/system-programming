#!/bin/bash 
# there are 
    # -> for
    # ->  while
    # -> until
    # -> select



            # FOR LOOPS

## first way

# {startingPoint , endingPoint , incrementing/decrementingValue(optional)}
# if the startingPoint is less it will increment and vise versa
# for item in {-10..10..3}
# do
#     echo $item
# done


# names="baba babich buna kitfo"
# for name in $names
# do
#     echo Hello $name
# done


# for item in `seq 1 12`; do
#     echo "Item $item"
# done



## second way

# cars=(bugahti audii mercedece)
# for i in "${cars[@]}"
# do
# # any code block here
#     echo "$i"
# done



# third way (slower)

# for ((i=0; i< 10;i++));
# do 
#     echo "$i";

# done



            # WHILE LOOPS

LIMIT=19 
echo 
echo “Printing Numbers 1 through 20 \(but not 3 and 11\)”
a=0 
while [ $a -le “$LIMIT” ]; do 
  a=$(( $a + 1 )) 
  if [ “$a” -eq 3 ] || [ “$a” -eq 11 ] 
  then 
continue 
  fi 
  echo -n “$a ” 
done 



            # UNTILL LOOPS -> same as 'while' but goes until condition
            #                 is true.
        

# counter=0
# until [ $counter -eq 10 ]
# do 
#     echo "$counter is not equal to 10"
#     ((counter++))
# done


            # SELECT -> lets user select from the options (like a drop down)

# options='tolosa gete amsalu'
# PS3='Pick something baba: '
# select selected in $options
# do
#     if [ $selected == 'tolosa' ]
#     then
#         echo "tolosa is going to kiss you baba!"
#         break
#     fi
# done
