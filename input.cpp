#include "input.h"

void InputSelection(int argc, char* argv[])
{
    if (argc == 1)
        ;

    else if ((argc == 2) && (!strcmp(argv[1], "--test")))
        RunTest(argc, argv);

    else if (argc == 3)
        RunTest(argc, argv);

    else
    {
        printf("The request was not read correctly, please enter the correct input\n");
        printf("Arguments was: argc = %d argv = ", argc);
        for (int i = 0; i < argc; ++i)
            printf("%s ", argv[i]);
        putchar('\n');
    }
}

void InputNumbers(DATA* data)
{
    assert (data != NULL);

    while (scanf("%lg %lg %lg", &(data -> a), &((*data).b), &(data -> c)) < 3)
    {
        ClearBuffer();
        printf("Enter right numbers \n");
    }

    if (!isfinite(data -> a) || !isfinite((*data).b) || !isfinite(data -> c))
    {
        printf ("Enter right numbers \n");
        InputNumbers(data);
    }

}

void ClearBuffer()
{
    while (getchar() != '\n')
    ;
}
