#include <stdio.h>
#include <string.h>
#include <stdlib.h>
// puts, strchr, strncpy, strcat, strncat, fgets, strdup, getline

int Getline(char* str, char* argv[]);

int main(int argc, char* argv[])
{
    char str[256];

    int num = Getline(str, argv);

    printf("%d", num);
}

int Getline(char* str, char* argv[])
{
    FILE *fp;

    fp = fopen(argv[1], "r");

    if (fp != NULL)
        {
        fgets(str, 256, fp);
        }

    printf("%s\n", str);

    fclose(fp);

    return strlen(str);
}

