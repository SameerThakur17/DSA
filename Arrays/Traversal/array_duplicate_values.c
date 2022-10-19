#include<stdio.h>

int main(){
    int arr[20],size,flag=0;
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
            for (int j = i+1; j < size; j++)
            {
                if (arr[i]==arr[j])
                {
                    flag=1;
                    printf("Duplicate value found at index %d and %d\n",i,j);
                }
                
            }            
        }
        if (flag==0)
            {
                printf("No duplicate value found");
            }
        
    }    
    return 0;
}