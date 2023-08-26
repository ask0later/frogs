#include "main.h"

int main(void)
{
    DATA data {.a = 0, .b = 0, .c = 0, .x1 = 0, .x2 = 0, .nRoots = 0};
    printf("you want to test the system?\nif yea enter 1\nif no enter 0\n");

    int UserSelection = InputSelection();
    RunTest(UserSelection);

    printf("enter coeff\n");
    printf("a, b, c =\n");
    InputNumbers (&data);

    SolveEquation(&data);
    if (isEqual(data.x1, 0))
    {
        data.x1 = 0;
    }
    PrintRoots(&data);
}


void PrintRoots(DATA* data)
{
    switch (data -> nRoots)
    {
        case SS_ONE_ROOTS:
            printf("x = %lg\n", data -> x1);
            break;
        case SS_TWO_ROOTS:
            printf("x1 = %lg  x2= %lg\n", data -> x1, data -> x2);
            break;
        case SS_INF_ROOTS:
            printf("inf");
            break;
        case SS_NO_ROOTS:
            printf("sol is not");
            break;
        default:
            printf ("fail: in function %s:%d\n", __PRETTY_FUNCTION__, __LINE__);
    }
}







