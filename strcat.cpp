#include <stdio.h>
#include <assert.h>
#include <string.h>
// puts, strchr, strncpy, strcat, strncat, fgets, strdup, getline

void Strcat(char* dst, const char *app);

int main()
{
    char dst[] = "privet ";
    const char app[] = "kak dela";

    puts(dst);
    puts(app);

    Strcat(dst, app);
    //strcat(dst, app);

    puts(dst);
    puts(app);
}

void Strcat(char* dst, const char *app)
{
    int i;

    for (i = 0; dst[i] != '\0'; i++)
        ;

    int j;

    for (j = 0; app[j] != '\0'; j++)
        dst[i + j] = app[j];
}
