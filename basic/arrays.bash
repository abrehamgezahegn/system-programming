# fist way of decalation
bag[0]=headset
bag[1]=banana
bag[2]=notebook

# second way of decalration
pants=(headset banana notebook) 
words='baba babich babu'

# third way of decalration 
# -a -> array
declare -a duffleBag=(headset banana notebook)


# accessing items

# doesnt work
# echo `$bag[$#]` 

#doesn't work 
# echo $bag[1] 

# works
echo "${bag[0]}" # list first item
echo "${bag[@]}" # list all items
echo "${pants[0]}"
echo "${duffleBag[0]}"