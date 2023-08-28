#include <stdio.h>
#include <math.h>
#include <assert.h>
#include <conio.h>
#include <float.h>

struct DATA
{
    double a, b, c;
    double x1, x2;
    int nRoots;
};

enum NumOfRoots
{
    SS_INF_ROOTS = -1,
    SS_NO_ROOTS = 0,
    SS_ONE_ROOTS = 1,
    SS_TWO_ROOTS = 2
};

/*!
This function determines which equation the expression is and calls other functions to solve it
\param[in] a first input coefficient of equation
\param[in] b second input coefficient of equation
\param[in] c third input coefficient of equation
\param[in] x1 pointer to first solution to the equation
\param[in] x2 pointer to second solution to the equation
*/
void SolveEquation(DATA* data);




/*!
This function solves a quadratic equation when the higher coefficient is zero and the equation becomes linear
\param[in] b second input coefficient of equation
\param[in] c third input coefficient of equation
\param[in] x1 pointer to singular solution to the equation
*/
void SolveLinear(DATA* data);




/*!
This function solves a quadratic equation when the higher coefficient is not zero and the equation is quadratic
\param[in] a first input coefficient of equation
\param[in] b second input coefficient of equation
\param[in] c third input coefficient of equation
\param[in] x1 pointer to first solution to the equation
\param[in] x2 pointer to second solution to the equation
*/
void SolveSquare(DATA* data);


/*!
This function compares two numbers
\param[in] arg1 first comparison number
\param[in] arg2 second comparison number
\return 1 if numbers is close <br>
        0 if numbers is unequal
*/
int isEqual(double arg1, double arg2);

