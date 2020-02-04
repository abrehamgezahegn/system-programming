# !bin/sh
echo "enter length"
read length
echo "enter width"
read width


# # we can use expr, let of (()) for expressions.

# # expr -> expression 
# echo "give me some: "
# read x
# if [ "$x" -eq 10 ]; then 
#  echo "you got here"
# fi  
# else echo "something something"

# area=`expr $length \* $width`



area=(($length * $width))
echo "area of rectangle is $area"



