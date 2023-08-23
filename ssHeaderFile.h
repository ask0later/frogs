#include <stdio.h>
#include <conio.h>
#include <float.h>

#include <assert.h>
#include <math.h>

enum NumOfRoots
{
    SS_INF_ROOTS = -1,
    SS_NO_ROOTS = 0,
    SS_ONE_ROOTS = 1,
    SS_TWO_ROOTS = 2
};

/* header file */
void PrintRoots( int nRoots, double x1, double x2 );

int SolveEquation( double a, double b, double c,
                   double* x1, double* x2 );
NumOfRoots SolveLinear( double b, double c, double* x1 );

NumOfRoots SolveSquare( double a, double b, double c,
                 double* x1, double* x2 );

int PrintRoots( double *x1, double *x2 );

void ClearBuffer();
void InputNumbers(double *a, double *b, double *c);
int InputSelection();


int TestAll();
int TestSolveEquation( double a, double b, double c, double x1ref, double x2ref, int nRootsRef);
int RunTest(int UserSelection);

int isEqual(double arg1, double arg2);
