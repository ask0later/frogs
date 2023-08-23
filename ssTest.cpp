#include "ssHeaderFile.h"

int TestSolveEquation( double a, double b, double c, double x1ref, double x2ref, int nRootsRef)
{
    double x1 = 0, x2 = 0;
    int nRoots = SolveEquation( a, b, c, &x1, &x2 );
    if ( !(isEqual( x1, x1ref)) || !(isEqual( x2, x2ref)) || nRoots != nRootsRef)
    {
        printf("FAILED: x1=%lg x2=%lg nRoots=%d\nEXECTED: x1ref=%lg x2ref=%lg nRootsRef=%d\n",
        x1, x2, nRoots, x1ref, x2ref, nRootsRef);
        return 0;
    }

    else
    {
        printf("Test is OK\n");
        return 1;
    }

}


int TestAll()
{
    int numSuccess = 0;
    numSuccess += TestSolveEquation( 0, 0, 0, 0, 0, SS_INF_ROOTS);
    numSuccess += TestSolveEquation( 0, 0, 4, 0, 0, SS_NO_ROOTS);
    numSuccess += TestSolveEquation( 0, 2, -8, 4, 0, SS_ONE_ROOTS);
    numSuccess += TestSolveEquation( 1, 2, 1, -1, -1, SS_ONE_ROOTS);
    numSuccess += TestSolveEquation( 1, 1, 1, 0, 0, SS_NO_ROOTS);
    numSuccess += TestSolveEquation( 2, 5, 2, -0.5, -2, SS_TWO_ROOTS);
    numSuccess += TestSolveEquation( 1, -5, 6, 3, 2, SS_TWO_ROOTS);
    numSuccess += TestSolveEquation( 1, 8, 15, -3, -5, SS_TWO_ROOTS);
    return numSuccess;
}


int InputSelection()
{
    int UserSelection = 0;
    while((scanf("%d", &UserSelection)) != 1)
    {
        ClearBuffer();
        printf("ENTER 1 OR 0 NOT OTHER!!!!!!!!\n");
    }
    if (!(UserSelection == 1 || UserSelection == 0))
    {
        printf("ENTER 1 OR 0 NOT OTHER!!!!!!!!\n");
        InputSelection();
    }
    return UserSelection;
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
