file="$1"
if [ -f "$file" ]; then 
   sort "$file">sorted.txt 
fi  
