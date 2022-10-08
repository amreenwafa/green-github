//WAP to enter 3times in a loop if  the user enter even no atleast one time then it should print you won 
#include<stdio.h>
int main()
{
    int a,i=1;
    printf("You have entered to the game\n");

    while(i<=3)
    {
         printf("\n Enter the even number : ");
        scanf("%d",&a);
        if(a%2==0)
        {
            printf("\nHehe... You Gave The Correct Answer");
            break;
        } 
        else
        i++;
         printf("Game Over");
    }

return 0;
}