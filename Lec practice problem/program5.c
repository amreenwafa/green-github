//wap to add numbers entered by user,user can enter any number of number until he enterd zero
#include<stdio.h>
int main()
{
    int a,sum=0;
    
    do
    {
         printf("\n Enter the any number : ");
        scanf("%d",&a);  
        sum=sum+a;
    } while (a);

    printf("Sum is %d",sum);
   
return 0;
}