# ways(){
#     a="er"
#     echo "$a"    
# }

# echo $a;
# a="lalal"
# echo $a; 



factorial=1;
counter=1;
limit=5

while [ "$counter" -le $limit ]
do
    echo "couter is $counter";
    factorial=$(($factorial * $counter))
    ((counter++)) 
done

echo "weyne gude $factorial"