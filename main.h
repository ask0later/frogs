#include <stdio.h>
#include <conio.h>
#include <float.h>
#include <assert.h>
#include <math.h>

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
This function outputs the number of roots and their value
\param[in] nRoots value of number to solution
\param[in] x1 first solution to the equation
\param[in] x2 second solution to the equation
*/
void PrintRoots(DATA* data);


/*!
This function validates the input value of the unit check start selection
/return user selection value
*/
void InputSelection(int argc, char* argv[]);


/*!
This function checks the coefficients of a quadratic equation entered by the user
\param[in] a pointer to first input coefficient of equation
\param[in] b pointer to second input coefficient of equation
\param[in] c pointer to third input coefficient of equation
*/
void InputNumbers(DATA* data);


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
This function compares two numbers
\param[in] arg1 first comparison number
\param[in] arg2 second comparison number
\return 1 if numbers is close <br>
        0 if numbers is unequal
*/
int isEqual(double arg1, double arg2);
