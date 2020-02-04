echo "Give me a number: ";
read "Give me a number: "  num

i=1;
fac=1;

while [ $i -le $num ]
do
fac=$(($i * $fac))
i=`expr $i + 1`  
done

echo "Fatorial is  $fac"