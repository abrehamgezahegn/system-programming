#!bin/sh
echo "enter length"
read length
echo "enter width"
read width 

# we can use expr, let of (()) for expressions.

# expr -> expression 
area=`expr $length \* $width`

# area=(($length * $width))
echo "area of rectangle is $area"

exit 89


