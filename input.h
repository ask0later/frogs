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

/*!
This function checks the coefficients of a quadratic equation entered by the user
\param[in] a pointer to first input coefficient of equation
\param[in] b pointer to second input coefficient of equation
\param[in] c pointer to third input coefficient of equation
*/
void InputNumbers(DATA* data);




/*!
This function validates the input value of the unit check start selection
/return user selection value
*/
int InputSelection();





/*!
This function is used to clear the memory buffer
*/
void ClearBuffer();
