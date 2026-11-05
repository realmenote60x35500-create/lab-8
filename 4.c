#include <stdio.h>

int dispense(int amount, int *n5000, int *n1000, int *n500, int *n100)
{
    if (amount <= 0 || amount % 100 != 0)
    {
        return 0;
    }

    *n5000 = amount / 5000;
    amount = amount % 5000;

    *n1000 = amount / 1000;
    amount = amount % 1000;

    *n500 = amount / 500;
    amount = amount % 500;

    *n100 = amount / 100;

    return 1;
}

int main()
{
    int amount;
    int n5000, n1000, n500, n100;

    printf("Enter withdrawal amount: ");
    scanf("%d", &amount);

    if (dispense(amount, &n5000, &n1000, &n500, &n100))
    {
        printf("\n5000 notes: %d", n5000);
        printf("\n1000 notes: %d", n1000);
        printf("\n500 notes: %d", n500);
        printf("\n100 notes: %d", n100);
    }
    else
    {
        printf("Invalid amount");
    }

    return 0;
}
