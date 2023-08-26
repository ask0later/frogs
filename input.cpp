#include "input.h"
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

void InputNumbers (DATA* data)
{
    assert (data != NULL);

    while (scanf ("%lg %lg %lg", &(data -> a), &((*data).b), &(data -> c)) < 3)
    {
        ClearBuffer ();
        printf ("enter right numbers \n");
    }

    if (!isfinite (data -> a) || !isfinite ((*data).b) || !isfinite (data -> c))
    {
        printf ("enter right numbers \n");
        InputNumbers (data);
    }

}
/******************************************************************
*
*
*
*
*
*
*
*
*
*
*
*
*
*******************************************************************/
void ClearBuffer ()
{
    while (getchar() != '\n')
        ;
}
