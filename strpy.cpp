#include <stdio.h>
#include <assert.h>
char* MyStrcpy (char dest[], char* src);
//void PrintArray(char* dest, char* src);
int main()
{
    char src[] = "ABC";
    char dest[sizeof(src)+5] = "xyz";

    printf("%s\n",src);
    printf("%s\n",dest);
    //PrintArray(dest, src);
    MyStrcpy( dest, src);
    printf("%s\n",src);
    printf("%s\n",dest);
    //PrintArray(dest, src);
}
char* MyStrcpy (char dest[], char* src)
{
    assert(src);
    assert(dest);

    size_t i = 0;
    for( i = 0; src[i] != '\0'; i++)
        dest[i] = src[i];
    dest[i] = '\0';

    return dest;
}

// puts, strchr, strncpy, strcat, strncat, fgets, strdup, getline

/*void PrintArray(char* dest, char* src)
{
for( size_t i = 0; src[i] != '\0'; i++)
    printf("%c",src[i]);
printf("\n");
for( size_t j = 0; dest[j] != '\0'; j++)
    printf("%c",dest[j]);
printf("\n");
}  */
