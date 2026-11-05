
#include <stdio.h>

int main()
{
    int n;

    printf("Enter number of meetings: ");
    scanf("%d", &n);

    int start[n], end[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter start time of meeting %d: ", i + 1);
        scanf("%d", &start[i]);

        printf("Enter end time of meeting %d: ", i + 1);
        scanf("%d", &end[i]);
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (start[j] > start[j + 1])
            {
                int temp = start[j];
                start[j] = start[j + 1];
                start[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (end[j] > end[j + 1])
            {
                int temp = end[j];
                end[j] = end[j + 1];
                end[j + 1] = temp;
            }
        }
    }

    int i = 0, j = 0;
    int rooms = 0, maxRooms = 0;

    while (i < n)
    {
        if (start[i] < end[j])
        {
            rooms++;

            if (rooms > maxRooms)
            {
                maxRooms = rooms;
            }

            i++;
        }
        else
        {
            rooms--;
            j++;
        }
    }

    printf("\nMinimum rooms required = %d\n", maxRooms);

    return 0;
}
