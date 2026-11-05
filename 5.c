#include <stdio.h>
int main()
{
    int n;
    printf("enter number:");
    scanf("%d", &n);
    int ticket[n];
    for (int i = 0; i < n; i++)
    {
        printf("enter tickets:");
        scanf("%d", &ticket[i]);
    }

    for (int i = 0; i < n; i++)
    {

        printf("%d", ticket[i]);
    }
    printf("\n");
    for (int i = 0; i < n - 1; i++)
    {
        if (ticket[i] == ticket[i + 1])
        {
            ticket[i + 1] = ' ';
            printf("duplicate is %d\n", ticket[i]);
        }
    }

    for (int i = 1; i <= n; i++)
    {
        int found = 0;
        for (int k = 0; k < n; k++)
        {

            if (ticket[k] == i)
            {
                found = 1;
                break;
            }
        }
        if (found == 0)
        {
            printf("missing is %d\n", i);
        }
    }

    return 0;
}