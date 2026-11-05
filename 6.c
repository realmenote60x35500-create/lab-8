#include <stdio.h>

void swap(int *a, int *b);
void reverse(int arr[], int start, int end);

int main()
{
    int n, k;
    printf("enter N: ");
    scanf("%d", &n);

    int w[n];
    printf("enter %d weights:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &w[i]);

    printf("enter K: ");
    scanf("%d", &k);

    k = k % n;

    reverse(w, 0, n - 1);
    reverse(w, 0, k - 1);
    reverse(w, k, n - 1);

    printf("after rotation: ");
    for (int i = 0; i < n; i++)
        printf("%d ", w[i]);
    printf("\n");
    return 0;
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void reverse(int arr[], int start, int end)
{
    while (start < end)
    {
        swap(&arr[start], &arr[end]);
        start++;
        end--;
    }
}