#include "solution.h"
void SolveEquation(DATA* data)
{
    assert(data != NULL);

    if (isEqual((data -> a), 0))
        SolveLinear(data);

    else
        SolveSquare(data);
}

void SolveLinear(DATA* data)
{
    assert (data != NULL);

    if (isEqual ((data -> b), 0))
    {
        if (fabs(data -> c) > DBL_EPSILON)
            (data -> nRoots) = SS_NO_ROOTS;

        else
            (data -> nRoots) = SS_INF_ROOTS;
    }

    else
    {
        (data -> x1) = -(data -> c) / (data -> b);
        (data -> nRoots) = SS_ONE_ROOTS;
    }

}


void SolveSquare(DATA* data)
{
    assert(data != NULL);

    double d = (data -> b) * (data -> b) - 4 * (data -> a) * (data -> c) ;
    double sqrt_d = sqrt(d);

    if (isEqual(d,0))
    {
        (*data).x1 = (*data).x2 = -(data -> b) / (2 * (data -> a));
        (data -> nRoots) = SS_ONE_ROOTS;
    }

    else if (d > DBL_EPSILON)
    {
        (*data).x1 = (-(data -> b) + sqrt_d) / (2 * (data -> a));
        (*data).x2 = (-(data -> b) - sqrt_d) / (2 * (data -> a));
        (data -> nRoots) = SS_TWO_ROOTS;
    }

    else if (d < - DBL_EPSILON)
    {
        (data -> nRoots) = SS_NO_ROOTS;
    }

    else
    {
        (data -> nRoots) = SS_NO_ROOTS;
    }
}


int isEqual(double arg1, double arg2)
{
    double modul = fabs(fabs(arg1) - fabs(arg2));

    if (modul < DBL_EPSILON)
        return 1;

    else
        return 0;

}
