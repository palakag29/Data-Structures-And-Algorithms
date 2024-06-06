#include <stdio.h>

int main()
{
    int arr[5][5] = {{8, 3, 9, 0, 10}, {3, 5, 17, 1, 1}, {2, 8, 6, 23, 1}, {15, 7, 3, 2, 9}, {6, 14, 2, 6, 0}};

    int rowSum[5] = {0}; // Array to store row sums, initialized to 0
    int colSum[5] = {0}; // Array to store column sums, initialized to 0

    // Calculate row and column sums
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            rowSum[i] += arr[i][j]; // Calculate row sum
            colSum[j] += arr[i][j]; // Calculate column sum
            printf("rowSum[%d] => %d, arr[%d][%d] => %d\n", i,rowSum[i],  i, j, arr[i][j]);
            printf("colsum[%d] => %d, arr[%d][%d] => %d\n", j, colSum[j] ,i, j, arr[i][j]);
        }
    }

    // Print the row sums
    for (int i = 0; i < 5; i++)
    {
        printf("Row %d Sum = %d\n", i + 1, rowSum[i]);
    }

    // Print the column sums
    for (int j = 0; j < 5; j++)
    {
        printf("Column %d Sum = %d\n", j + 1, colSum[j]);
    }

    return 0;
}
