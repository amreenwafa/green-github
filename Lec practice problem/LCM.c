//9. Write a program to calculate LCM of two numbers

#include<stdio.h>

int main()
{
    int a,b,i,j,d,lcm=1,x,y,count;

    //Input two number for LCM
    printf("\nEnter two number to find their LCM : ");
    scanf("%d",&a);
    scanf("%d",&b);

    //Assigning the 'a' and 'b' in 'x' and 'y' so we don't loose original value of 'a' and 'b in the further LCM process
    x=a;
    y=b;

    if(a>b)
     d=b;     //Smaller number stored in 'd' variable which will later will be used in loop
    else
     d=a;

    for(i=2;i<=d;i++)   //Here we are running loop to divide both input number by every prime factor starting from 2 till the smallest number
    {
        count = 0;

        //Loop to check prime number
        for(j=2;j<=i/2;j++)
        {
          if(i%j==0)
          {
            count++;
            break;
          }
        }

        //Only Prime number will enter this if block
        if(count==0)
        {
            //Only prime factor of both input given number will enter this while block
            while((a%i==0)&&(b%i==0))  //Here 'i' will divide both given number until it is not further divisible
            {
                lcm = lcm*i;
                a = a/i;      //If 'a' and 'b' is divisible by 'i', then we will modify a and b as it happens during LCM
                b = b/i;      //Ex : Say 12 and 24 is given number then modified a = 12/2 = 6 and b = 24/2 =12
                          //New value of 'a' & 'b' will be 6 and 12 . Again it will check if 'a'&'b' is further divisible by 2 or not. 
                d=a;          //Here, 'a' the smallest among both will be stored in d again , hence 'd' is also modified
            }
        }
    }
    lcm = (lcm*a)*b;   //Here calculating LCM by multiplying 'a' and 'b' that is the last two factor left which can't be divisible further 

    //Displaying LCM
    printf("\nLCM of %d and %d is : %d ", x,y,lcm);

    return 0;
}