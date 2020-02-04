if [ "$1" = "hello" ]; then
    echo "What's up baba?"
elif [ "$1" = "see you" ]; then
    echo "Good bye" `whoami`
else 
    echo "Well, this is awkward :). No? :("
fi