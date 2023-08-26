#include <stdio.h>
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
    SS_TWO_ROOTS = 2,
    COMPLEX_ROOTS = 3
};



/*!
This function determines which equation the expression is and calls other functions to solve it
\param[in] a first input coefficient of equation
\param[in] b second input coefficient of equation
\param[in] c third input coefficient of equation
\param[in] x1 pointer to first solution to the equation
\param[in] x2 pointer to second solution to the equation
\return value of the called functions
*/
int SolveEquation( DATA* data );



/*!
This function counts the number of successful unit checks
/return value of the number of successful tests
*/
int TestAll();





/*!
This function takes the value of the coefficients <br>
and compares the value of the solutions obtained by the program with the correct solutions.
\param[in] a first input coefficient of equation
\param[in] b second input coefficient of equation
\param[in] c third input coefficient of equation
\param[in] x1ref first solution to the equation
\param[in] x2ref second solution to the equation
\param[in] nRootsRef value of number to solution
\return 1 if values is close <br>
        0 if values is unequal
*/
int TestSolveEquation( DATA dataRef );




/*!
This function runs a check depending on the value of the user's selection
\param[in] UserSelection value selection of user
*/
int RunTest(int UserSelection);


/*!
This function compares two numbers
\param[in] arg1 first comparison number
\param[in] arg2 second comparison number
\return 1 if numbers is close <br>
        0 if numbers is unequal
*/
int isEqual(double arg1, double arg2);
