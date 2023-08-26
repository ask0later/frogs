#include "test.h"
int TestSolveEquation( DATA dataRef )
{
    DATA data { .a=dataRef.a, .b=dataRef.b, .c=dataRef.c, .x1 = 0, .x2 = 0};
    SolveEquation(& data);
    if ( !(isEqual( data.x1, dataRef.x1)) || !(isEqual( data.x2, dataRef.x2)) || data.nRoots != dataRef.nRoots)
    {
        printf("FAILED: x1=%lg x2=%lg nRoots=%d\nEXECTED: x1ref=%lg x2ref=%lg nRootsRef=%d\n",
        data.x1, data.x2, data.nRoots, dataRef.x1, dataRef.x2, dataRef.nRoots);
        return 0;
    }

    else
    {
        printf("\033[32mTest is OK\n\033[0m");
        return 1;
    }

}
int TestAll()
{
    int numSuccess = 0;
    numSuccess += TestSolveEquation({ 0,   0,   0,   0,    0, SS_INF_ROOTS});
    numSuccess += TestSolveEquation({ 0,   0,   4,   0,    0, SS_NO_ROOTS });
    numSuccess += TestSolveEquation({ 0,   2,  -8,   4,    0, SS_ONE_ROOTS});
    numSuccess += TestSolveEquation({ 1,   2,   1,  -1,   -1, SS_ONE_ROOTS});
    numSuccess += TestSolveEquation({ 1,   1,   1,   0,    0, SS_NO_ROOTS });
    numSuccess += TestSolveEquation({ 2,   5,   2, -0.5,  -2, SS_TWO_ROOTS});
    numSuccess += TestSolveEquation({ 1,  -5,   6,   3,    2, SS_TWO_ROOTS});
    numSuccess += TestSolveEquation({ 1,   8,  15,  -3,   -5, SS_TWO_ROOTS});
    return numSuccess;
}

int RunTest(int UserSelection)
{
    if (UserSelection == 1 )
    {
        printf ("%d successful test of 8\n", TestAll());
        return 1;
    }

    else
    {
        return 0;
    }
}
