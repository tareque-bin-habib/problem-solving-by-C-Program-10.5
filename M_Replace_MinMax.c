#include <stdio.h>

int main()
{
    int n, i, min_idx, max_idx;
    scanf("%d", &n);
    int arr[n];

    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    min_idx = 0;
    max_idx = 0;
    for (i = 1; i < n; i++)
    {
        if (arr[i] < arr[min_idx])
        {
            min_idx = i;
        }
        if (arr[i] > arr[max_idx])
        {
            max_idx = i;
        }
    }

    int temp = arr[min_idx];
    arr[min_idx] = arr[max_idx];
    arr[max_idx] = temp;

    for (i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}