#include <stdio.h>
#include <assert.h>
int MyStrlen (char str[]);
//void PrintArray();
int main()
{
    char str[] = "count how many characters I have in me.";

    printf("%s\n",str);
    printf("%p\n",&str);
    printf("%d\n", MyStrlen(str));
    //PrintArray();
}

int MyStrlen (char* str)
{
    assert(str);

    size_t i = 0;
    while( str[i] != '\0')
        i++;

    return i;

}
/*void PrintArray()
{
for( size_t i = 0; src[i] != '\0'; i++)
    printf("%c",src[i]);
printf("\n");
for( size_t j = 0; dest[j] != '\0'; j++)
    printf("%c",dest[j]);
printf("\n");
}  */
