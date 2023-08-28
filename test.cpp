#include "test.h"
int TestSolveEquation( DATA dataRef )
{
    DATA data { .a = dataRef.a, .b = dataRef.b, .c = dataRef.c, .x1 = 0, .x2 = 0};

    SolveEquation(& data);

    if (!EqualRoots(&data, &dataRef))
    {
        printf(TO_RED "FAILED:    x1=%lg    x2=%lg    nRoots=%d\n"
                       "EXECTED: x1ref=%lg x2ref=%lg nRootsRef=%d\n" TO_DEFAULT,
        data.x1, data.x2, data.nRoots, dataRef.x1, dataRef.x2, dataRef.nRoots);
        return 0;
    }

    else
    {
        printf(TO_GREEN "Test is OK\n" TO_DEFAULT);
        return 1;
    }
}
int TestAll(const char* filename)
{
    DATA dataRef{.a = 0, .b = 0, .c = 0, .x1 = 0, .x2 = 0, .nRoots = 0};
    int numSuccess = 0;

    FILE* fp = fopen( filename, "r");

    assert(fp != NULL);

    while( (fscanf(fp, "%lg %lg %lg %lg %lg %d",
            &dataRef.a, &dataRef.b, &dataRef.c,
            &dataRef.x1, &dataRef.x2, &dataRef.nRoots )) == 6)
        numSuccess += TestSolveEquation(dataRef);

    return numSuccess;
}

void RunTest(int argc, char* argv[])
{
    const char* filename = NULL;

    if (argc == 2)
        filename = "data.txt";

    else
        filename = argv[2];

    printf (TO_GREEN "%d successful tests of 7\n" TO_DEFAULT, TestAll(filename));
}

int EqualRoots(DATA* data, DATA* dataRef)
{
    Sort(&data -> x1, &data -> x2);
    Sort(&dataRef -> x1, &dataRef -> x2);
    return (isEqual((dataRef -> x2), (data -> x2)) && isEqual((dataRef -> x1), (data -> x1)));
}

void Sort(double* arg1, double* arg2)
{
    if (*arg1 > *arg2)
        {
        double tmp = *arg1 ;
        *arg1 = *arg2;
        *arg2 = tmp;
        }
}
