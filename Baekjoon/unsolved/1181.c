#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct Words
{
    char word[51];
    int wordlen;
    struct Words *next;
} * first, *pre, *cur, *newrec, *tmprec;
int main()
{
    int n, i;
    char tmp[51];
    scanf("%d", &n);
    first = NULL;
    for (i = 0; i < n; i++)
    {
        scanf("%s", tmp);
        newrec = malloc(sizeof(struct Words));
        strcpy(newrec->word, tmp);
        newrec->wordlen = strlen(tmp);
        if (first == NULL)
        {
            newrec->next = NULL;
            first = newrec;
        }
        else
        {
            cur = first;
            while (cur != NULL && newrec->wordlen > cur->wordlen)
            {
                pre = cur;
                cur = cur->next;
                while (cur != NULL && newrec->wordlen == cur->wordlen && strcmp(newrec->word, cur->word) > 0)
                {
                    pre = cur;
                    cur = cur->next;
                }
            }
            if (cur == first)
                first = newrec;
            else
                pre->next = newrec;
            newrec->next = cur;
        }
    }
    pre = first;
    cur = first->next;
    while (cur != NULL)
    {
        if (strcmp(pre->word, cur->word) == 0)
        {
            pre->next = cur->next;
            tmprec = cur;
            cur = cur->next;
            free(tmprec);
        }
        pre = cur;
        cur = cur->next;
    }
    printf("%s", first->word);
    cur = first->next;
    free(first);
    while (cur != NULL)
    {
        printf("\n%s", cur->word);
        pre = cur;
        cur = cur->next;
        free(pre);
    }
    return 0;
}