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