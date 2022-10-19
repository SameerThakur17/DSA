#include<stdio.h>

int main(){
    int arr[20],size,pos=0,large;
    printf("Enter the size of array\n");
    scanf("%d",&size);
    if (size>20)
    {
        printf("Array is full\n");
    }
    else
    {
        for (int i = 0; i < size; i++)
        {
            scanf("%d",&arr[i]);
        }
        large=arr[0];
        for (int i = 0; i < size; i++)
        {
            if (arr[i]>large)
            {
                large=arr[i];
                pos=i;
            }
        }
        printf("The largest element in the array is %d at index %d ",large,pos);
        
        
    }
    
    return 0;
}