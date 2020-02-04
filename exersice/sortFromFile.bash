file="$1"
if [ -s "$file" ]; then 
   sort "$file">sorted.txt 
else 
    echo "Please give me a file with entries."
fi  
