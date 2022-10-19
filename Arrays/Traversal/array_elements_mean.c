#include<stdio.h>

int main(){
    int arr[20],size,sum=0;
    printf("Enter the size of array\n");
    scanf("%d",&size);
    if (size>20)
    {
        printf("Array is full\n");
    }
    else{
        printf("Enter array elements\n");
        for (int i = 0; i < size; i++)
        {
            scanf("%d",&arr[i]);
        }
        for (int i = 0; i < size; i++)
        {
            sum+=arr[i];
        }
        printf("The mean of array elements is %0.2f ",(float)sum/size);
        

    }
    
    return 0;
}