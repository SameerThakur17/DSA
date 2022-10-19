#include<stdio.h>

int main(){
    int arr[20],size,pos=0,small;
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
        small=arr[0];
        for (int i = 0; i < size; i++)
        {
            if (arr[i]<small)
            {
                small=arr[i];
                pos=i;
            }
        }
        printf("The smallest element in the array is %d at index %d ",small,pos);
        
        
    }
    
    return 0;
}