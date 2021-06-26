#include <stdio.h>
#include <string.h>
int main()
{
    char a[4], b[4], tmp;
    scanf("%s%s", a, b);
    tmp = a[0];
    a[0] = a[2];
    a[2] = tmp;
    tmp = b[0];
    b[0] = b[2];
    b[2] = tmp;
    if (strcmp(a, b) > 0)
        printf("%s", a);
    else if (strcmp(a, b) < 0)
        printf("%s", b);
    return 0;
}