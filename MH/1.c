#include <stdio.h>
#include <string.h>

int main()
{
    int i, j, len, flag[20];
    char str[20], C, *nums[21]= {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
    for(i=0;i<20;i++)
    {
        flag[i]=0;
    }
    scanf("%s", str);
    getchar();
    scanf("%c", &C);
    len = strlen(str);
    for (i = 0; i < len; i++)
    {
        if (str[i] == C)
        {

            for (j = i; j < len; j++)
            {
                str[j] = str[j + 1];
            }
            i--;
            len--;
        }
    }
    puts(str);
    return 0;
}