#include <stdio.h>
#include <assert.h>
#include <string.h>

const int size = 3;

// puts, strchr, strncpy, strcat, strncat, fgets, strdup, getline

void Strncat(char* dst, const char *app);

int main()
{
    char dst[] = "privet ";
    const char app[] = "kak dela";

    puts(dst);
    puts(app);

    Strncat(dst, app);
    //strncat(dst, app,3);

    puts(dst);
    puts(app);
}

void Strncat(char* dst, const char *app)
{
    int i;

    for (i = 0; dst[i] != '\0'; i++)
        ;

    int j;

    for (j = 0; ((app[j] != '\0') && (j < size)); j++)
        dst[i + j] = app[j];
}

