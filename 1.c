#include <stdio.h>
void swap(int n, int tag[])
{
    int count = 0;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (tag[j] > tag[j + 1])
            {
                count = count + 1;
            }
        }
    }
    printf("swap is %d\n", count);
}

int sortitems(int n, int tag[])
{
    int temp, j;
    for (int i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - i - 1; j++)
        {
            if (tag[j] > tag[j + 1])
            {
                temp = tag[j];
                tag[j] = tag[j + 1];
                tag[j + 1] = temp;
            }
        }
    }
    printf("after: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d", tag[i]);
    }
    printf("\n");
}
int main()
{
    int n;
    printf("enter number:");
    scanf("%d", &n);
    int tag[n];
    for (int i = 0; i < n; i++)
    {
        printf("enter tag (0 for plastic,1 for paper,2 for metal) %d:", i + 1);
        scanf("%d", &tag[i]);
    }
    printf("before: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d", tag[i]);
    }
    printf("\n");

    swap(n, tag);
    sortitems(n, tag);
    return 0;
}