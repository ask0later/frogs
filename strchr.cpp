#include <stdio.h>
#include <assert.h>
#include <stdio.h>
#include <string.h>
// puts, strchr, strncpy, strcat, strncat, fgets, strdup, getline

char* MyStrChr (const char* pts, int symbol);

int main()
{
    const char* pts = "You become responsib1e, forever, for what you have tamed";
    int symbol = '1';
    char* mystrchr;
    char* chr;

    mystrchr =  MyStrChr( pts, symbol );

    printf("my %d\n",mystrchr - pts + 1);

    chr = strchr(pts,  symbol);

    printf("function %d\n", chr - pts + 1);

}

char* MyStrChr (const char* pts, int symbol)
{
    assert(pts);

    int i = 0;

    while(pts[i] != symbol)
        i++;

    return (char*) &pts[i];

}
