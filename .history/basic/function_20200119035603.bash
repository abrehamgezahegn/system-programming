# ways(){
#     a="er"
#     echo "$a"    
# }

# echo $a;
# a="lalal"
# echo $a; 



factorial=1;
counter=1;
limit=4

while [ "$counter" -le $limit ]
do
    echo "couter is $counter";
    factorial=$(($factorial * $counter))
    ((counter++)) 
done