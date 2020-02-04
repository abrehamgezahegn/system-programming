

int main()
{

    int count = 0;
    while (1)
    {
        printf("some \n");
        if (count > 3)
        {
            kill(getpid());
        }
    }
}