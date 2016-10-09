//C Program for Insertion SORT
#include <stdio.h>
void insertionSort(int arr[], int n)
{
   int i, key, j;
   for (i = 1; i < n; i++)
   {
       key = arr[i];
       j = i-1;
       while (j >= 0 && arr[j] > key)
       {
           arr[j+1] = arr[j];
           j = j-1;
       }
       arr[j+1] = key;
   }
}
int main()
{
    int arr[6], i;
    printf("Enter array: \n");
    for (i=0; i < 6; i++)
    {
        printf("Element %d: ", i+1);
        scanf("%d",&arr[i]);
    }
    insertionSort(arr, 6);
    printf("\nSorted array: \n");
    for (i=0; i < 6; i++)
        printf("%d ", arr[i]);
    printf("\n");
    return 0;
}
