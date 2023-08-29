#include <stdio.h>
#include <assert.h>
#include <string.h>
// puts, strchr, strncpy, strcat, strncat, fgets, strdup, getline

void Fgets(char* argv[], char* str[256]);

int main(int argc, char *argv[])
{
    char* str[256];

    Fgets(argv, str);
}

void Fgets(char* argv[], char* str[256])
{
    FILE *fp;

    if ((fp=fopen(argv[1], "r") ) != NULL)
    {
        int i = 0;

        while (fgetc(fp) != '\0')
            {
            str[i];
            i++;
            }

        printf("%s", str);
    }
    fclose(fp);
}
