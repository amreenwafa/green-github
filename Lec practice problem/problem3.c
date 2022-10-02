//WAP to print n natural number
#include<stdio.h>
int main()
{
    int n, a=1;
    
      printf("Enter the value of n : ");
       scanf("%d",&n);
    while(a<=n)
    {
        printf("\n%d",a);
        a++;
    }

return 0;
}