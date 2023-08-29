#include <stdio.h>
#include <string.h>
#include <assert.h>

const int size = 9;

void StrnCpy(char* std2, char* std1);
void PrintArray(char* std1, char* std2);

// puts, strchr, strncpy, strcat, strncat, fgets, strdup, getline

int main (void)
{
    char std1[] = "3123053294210213";
    char std2[size + 1] = "2123232";

    PrintArray(std1, std2);

    //strncpy(std2, std1, size);
    StrnCpy(std2, std1);

    PrintArray(std1, std2);
}

void PrintArray(char* std1, char* std2)
{
    for (size_t i = 0; std1[i] != '\0'; i++)
        printf("%c",std1[i]);

    printf("\n");

    for (size_t j = 0; std2[j] != '\0'; j++)
        printf("%c", std2[j]);

    printf("\n");
}

void StrnCpy(char* std2, char* std1)
{
    int i;

    for (i = 0; i < size; i++)
        std2[i] = std1[i];

    std2[i + 1] = '\0';
}
