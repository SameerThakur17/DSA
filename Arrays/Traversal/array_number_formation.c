#include<stdio.h>
#include<math.h>
int main(){
    int number=0,digits[10],noofdigits,i;
    printf("Enter number of digits\n");
    scanf("%d",&noofdigits);
    for (int i = 0; i < noofdigits; i++)
    {
        printf("Enter the digit at position %d ",i+1);
        scanf("%d",&digits[i]);
    }
    i=0;
    while (i<noofdigits)
    {
        number=number+digits[i]*pow(10,i);
        i++;
    }
    printf("Number formed from the sum of digits is %d",number);    
    
    return 0;
}