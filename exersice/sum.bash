    sum=0
    for i in "$*" 
    do
        # sum=$(expr $sum + $i)
        (($sum=$sum+$i))
    done

    echo "$sum";

# echo "$*"