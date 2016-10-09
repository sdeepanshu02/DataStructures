//C Program for Quick SORT
#include<stdio.h>
void swap(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}
int partition (int arr[], int low, int high)
{
    int pivot = arr[high];
    int i = (low - 1), j;

    for (j = low; j <= high- 1; j++)
    {
        if (arr[j] <= pivot)
        {
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}
void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pi = partition(arr, low, high);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
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
    quickSort(arr, 0, 4);
    printf("\nSorted array: \n");
    for (i=0; i < 5; i++)
        printf("%d ", arr[i]);
    printf("\n");
    return 0;
}
