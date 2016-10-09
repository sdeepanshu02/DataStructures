//C Program for Selection SORT
#include <stdio.h>
void selectionSort(int arr[], int n)
{
    int i, j, min_idx, temp;
    for (i = 0; i < n-1; i++)
    {
        min_idx = i;
        for (j = i+1; j < n; j++)
            if (arr[j] < arr[min_idx])
                min_idx = j;
        temp = arr[min_idx];
        arr[min_idx] = arr[i];
        arr[i] = temp;
    }
}

int main()
{
    int arr[5], i;
    printf("Enter array: \n");
    for (i=0; i < 5; i++)
    {
        printf("Element %d: ", i+1);
        scanf("%d",&arr[i]);
    }
    selectionSort(arr, 5);
    printf("\nSorted array: \n");
    for (i=0; i < 5; i++)
        printf("%d ", arr[i]);
    printf("\n");
    return 0;
}
