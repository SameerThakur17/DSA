#include<stdio.h>

int main(){
    int arr[50],size;

    printf("Enter size of array\n");
    scanf("%d",&size);

    if (size>50)
    {
        printf("Overflow condition reached");
    }
    else{
        printf("Enter array elements\n");
        for (int i = 0; i < size; i++)
        {
            scanf("%d",&arr[i]);
        }
        printf("Elements in the array are \n");

        for (int i = 0; i < size; i++)
        {
            printf("%d ",arr[i]);
        }

    }
    


    return 0;
}