//C Program for Bubble SORT
#include <stdio.h>
void bubbleSort(int arr[], int n)
{
    int i, j,temp;
    for (i = 0; i < n-1; i++)
        for (j = 0; j < n-i-1; j++)
            if (arr[j] > arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
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
    bubbleSort(arr, 5);
    printf("\nSorted array: \n");
    for (i=0; i < 5; i++)
        printf("%d ", arr[i]);
    printf("\n");
    return 0;
}
