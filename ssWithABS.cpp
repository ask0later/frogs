#include "ssHeaderFile.h"


int main(void)
{
    printf("you want to test the system?\nif yea enter 1\nif no enter 0\n");
    int UserSelection = InputSelection();
    RunTest(UserSelection);
    printf("enter coeff\n");

    double a = 0, b = 0, c = 0;
    printf("a, b, c =\n");

    InputNumbers (&a, &b, &c);

    double x1 = 0, x2 = 0;
    int nRoots = SolveEquation(a, b, c, &x1, &x2);

    PrintRoots(nRoots, x1, x2);
}

//---------------------------------------------
//!
//!
//!
//!
//!
//!
//!
//!
//---------------------------------------------
void PrintRoots(int nRoots, double x1, double x2)
{
    switch (nRoots)
    {
        case SS_ONE_ROOTS:
            printf ("x = %lg\n", x1);
            break;
        case SS_TWO_ROOTS:
            printf ("x1 = %lg  x2= %lg\n",x1 ,x2);
            break;
        case SS_INF_ROOTS:
            printf ("inf");
            break;
        case SS_NO_ROOTS:
            printf ("sol is not");
            break;
        default:
            printf ("fail: in function %s:%d\n", __PRETTY_FUNCTION__, __LINE__);
    }
}


int SolveEquation (double a, double b, double c,
                   double* x1, double* x2)
{
    assert (x1 != NULL);
    assert (x2 != NULL);
    assert (x1 != x2);

    if (isEqual ( a, 0 ))
    {
        return SolveLinear (b, c, x1);
    }

    else
    {
        return SolveSquare (a, b, c, x1, x2);
    }

}

NumOfRoots SolveLinear (double b, double c, double* x1)
{
    assert (x1 != NULL);

    // < 0
    if (fabs(b) < DBL_EPSILON)
    {
        // change to > 0
        if (fabs(c) > DBL_EPSILON)
        {
            return SS_NO_ROOTS;
        }
        else
        {
            return SS_INF_ROOTS;
        }
    }
    else
    {
        *x1 = -c / b;
        return SS_ONE_ROOTS;
    }

}


NumOfRoots SolveSquare (double a, double b, double c,
                 double* x1, double* x2)
{
    assert (x1 != NULL);
    assert (x2 != NULL);


    double d = b * b - 4 * a * c ;

    if (isEqual(d,0))
    {
        *x1 = *x2 = -b / (2 * a);
        return SS_ONE_ROOTS;
    }

    else if (d > 0)
    {
        *x1 = (-b + sqrt(d)) / (2 * a);
        *x2 = (-b - sqrt(d)) / (2 * a);
        return SS_TWO_ROOTS;
    }

    else if (d < 0)
    {
        return SS_NO_ROOTS;
    }
    else
    {
    return SS_NO_ROOTS;
    }
}


int isEqual(double arg1, double arg2)
{
    double modul = fabs( fabs(arg1) - fabs(arg2));
    if ( modul < DBL_EPSILON )
    {
        return 1;
    }

    else
    {
        return 0;
    }

}
// Почитать варианты как сравнивать вещественные числа
// Написать функцию isZero(double x) isEqual(double x, double y)

