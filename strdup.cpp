#include <stdio.h>
#include <string.h>
#include <stdlib.h>
// puts, strchr, strncpy, strcat, strncat, fgets, strdup, getline

char* Strdup(char* dst);

int main()
{
    char dst[] = "privet";

    puts(Strdup(dst));
}

char* Strdup(char* dst)
{
    char* st;
    int i;

    st = (char*)malloc((strlen(dst) + 1) * sizeof(char));

    for (i = 0; dst[i] != '\0'; i++)
        st[i] = dst[i];

    st[i] = '\0';

    return st;
}
