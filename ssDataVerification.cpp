#include "ssHeaderFile.h"

void InputNumbers (double* a, double* b, double* c)
{
    assert (a != NULL);
    assert (b != NULL);
    assert (c != NULL);

    while (scanf ("%lg %lg %lg", a, b, c) < 3)
    {
        ClearBuffer ();
        printf ("enter right numbers \n");
    }

    if (!isfinite (*a) || !isfinite (*b) || !isfinite (*c))
    {
        printf ("enter right numbers \n");
        InputNumbers (a, b, c);
    }

}


void ClearBuffer ()
{
    while (getchar() != '\n')
    {
        continue;
    }

}

