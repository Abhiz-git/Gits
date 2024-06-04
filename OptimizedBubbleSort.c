#include <stdio.h>
#include <stdlib.h>

void BubbleSort(int a[], int n)
{
    int cnt,c, i;
    for(c=0; c < n-1; c++)                      // passes n-1
    {
        cnt = 0;
        for(i=0; i<n-c-1; i++)
        {
            if(a[i]>a[i+1])
            {
                a[i] = a[i] + a[i+1];
                a[i+1] = a[i] - a[i+1]; 
                a[i] = a[i] - a[i+1];
                cnt++;                      // if swapping occurs incremeant counter
            }
        }
        if (cnt == 0) break;                // if Counter is 0 which means all elements are sorted
    }
}

int main()
{   
    int i,n, *arr=NULL;
    printf("Enter no. of elements:  ");
    scanf("%d", &n);
    
    arr = (int *)malloc(n*sizeof(int)); // dynamically allocated memmory
    if(arr == NULL)
    {
        printf("Memory Not Allocated");
        return 1;
    }
    
    printf("Enter the elements: ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    printf("Array before Sorting\n");
    for(i=0; i<n; i++)
    {
        printf("%d\t", arr[i]);
    }
    
    BubbleSort(arr,n);                      // call to BubbleSort Function
    
    printf("\nArray after Sorting\n");
    for(i=0; i<n; i++)
    {
        printf("%d\t", arr[i]);
    }
    
    free(arr);
    return 0;
}
