#include<stdio.h>

int main(){
    int arr[20],size,pos1=0,pos2=0,large,secondlarge;
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
                pos1=i;
            }
        }
        secondlarge=arr[1];
        for (int i = 0; i < size; i++)
        {
            if (arr[i]!=large)
            {
                if (arr[i]>secondlarge)
                {
                    secondlarge=arr[i];
                    pos2=i;
                }
                
            }
            
        }
        

        printf("The largest element in the array is %d at index %d \n",large,pos1);
        printf("The second largest element in the array is %d at index %d \n",secondlarge,pos2);
        
        
    }
    
    return 0;
}