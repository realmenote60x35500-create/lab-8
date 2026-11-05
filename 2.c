#include <stdio.h>
int balance(int N, int arr[][N])
{
    int tileno;
    printf("enter tile number: ");
    scanf("%d", &tileno);
    int leftdiagonal = 0;
    int rightdiagonal = 0;
    int row0 = 0;
    int row1 = 0;
    int row2 = 0;
    int col0 = 0;
    int col1 = 0;
    int col2 = 0;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (i == j)
            {
                leftdiagonal = leftdiagonal + arr[i][j];
            }
            if (i + j == N - 1)
            {
                rightdiagonal = rightdiagonal + arr[i][j];
            }
            if (i == 0)
            {
                row0 = row0 + arr[i][j];
            }
            if (i == 1)
            {
                row1 = row1 + arr[i][j];
            }
            if (i == 2)
            {
                row2 = row2 + arr[i][j];
            }
            if (j == 0)
            {
                col0 = col0 + arr[i][j];
            }
            if (j == 1)
            {
                col1 = col1 + arr[i][j];
            }
            if (j == 2)
            {
                col2 = col2 + arr[i][j];
            }
        }
    }

    if (leftdiagonal == rightdiagonal && rightdiagonal == row0 && row0 == row1 && row1 == row2 && row2 == col0 && col0 == col1 && col1 == col2 && col2 == tileno)
    {
        printf("balance and sum is %d", rightdiagonal);
        return 1;
    }
    else
    {
        int ok = 1;
        if (rightdiagonal != tileno)
        {
            printf("problem in rightdiogonal\n");
            ok = 0;
        }
        if (leftdiagonal != tileno)
        {
            printf("problem in leftdiogonal\n");
            ok = 0;
        }
        if (row0 != tileno)
        {
            printf("problem in row0 \n");
            ok = 0;
        }
        if (row1 != tileno)
        {
            printf("problem in row1\n");
            ok = 0;
        }
        if (row2 != tileno)
        {
            printf("problem in row2\n");
            ok = 0;
        }
        if (col0 != tileno)
        {
            printf("problem in col0\n");
            ok = 0;
        }
        if (col1 != tileno)
        {
            printf("problem in col1\n");
            ok = 0;
        }
        if (col2 != tileno)
        {
            printf("problem in col2\n");
            ok = 0;
        }

        if (ok)
        {

            printf("all right");
        }
    }
    return 0;
}

int main()
{
    int N;
    printf("enter size of matrix: ");
    scanf("%d", &N);
    int arr[N][N];

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            printf("enter matrix %d%d: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    balance(N, arr);

    return 0;
}