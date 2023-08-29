#include <stdio.h>
#include <assert.h>
// puts, strchr, strncpy, strcat, strncat, fgets, strdup, getline
void MyPuts(char* pts);

int main()
{
    char pts[] = "You become responsible, forever, for what you have tamed";

    MyPuts(pts);

    printf("new line\n");

    puts(pts);

    printf("new line\n");

}

void MyPuts(char* pts)
{
    assert(pts);

    int i = 0;

    for(i = 0; (pts[i]) != '\0'; i++)
        putchar(pts[i]);

    putchar('\n');
}
