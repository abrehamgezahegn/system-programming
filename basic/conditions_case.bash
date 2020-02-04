case "$1" in 
    hello|hi|"what\'s up")
        echo "What up? Am here!"
        ;;
    bye|chaw|"fare well")
        echo "Good by then" `whoami`
        ;;
    *) 
        echo "Well this is awkward !)" 
esac

# case "compare this var with" in 
#     "this one")
#         echo "Satisfied"
#         ;;
#     "or this one")
#         echo "satisfied"
#         ;;
#     *) echo "defaul"
# esac