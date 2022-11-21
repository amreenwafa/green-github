//Linked list implementation of stack.

#include<stdio.h>
#include<conio.h>
#include<alloc.h>

//Node contating data part and link part
struct Node
{
  int data;
  struct Node *link;

} *start,*p,*temp;

//Declaring function
void insert(int x);
void pop();
void search(int x);
void count();
void display();

void main()
{
  int ch,n;
  start = NULL;
  clrscr();

  //Menu driven
  do
  {
   clrscr();
   printf("\n\n\t\tEnter your choice :");
   printf("\n\n\t\tPress 1 to insert ");
   printf("\n\n\t\tPress 2 to delete");
   printf("\n\n\t\tPress 3 to search");
   printf("\n\n\t\tPress 4 to count");
   printf("\n\n\t\tPress 5 to display");
   scanf("%d",&ch);

   switch(ch)
   {
     case 1: printf("\n Enter the value to insert");
	           scanf("%d",&n);
	           insert(n);
	           break;

     case 2: pop();
	     break;

     case 3: printf("Enter value to be search ");
	     scanf("%d",&n);
	     search(n);
	     break;

     case 4: count();
	     break;

     case 5: display();
	     break;

     default: printf("\nInvalid choice");

   }
   printf("\nPress 0 to continue...");
   scanf("%d",&ch);

  }while(ch==0);
}
 //Insert operation
 void insert(int x)
 {
   if(start==NULL)
   {
    start=(struct Node*)malloc(sizeof(struct Node));
    start->link=NULL;
    start->data=x;
   }
   else
   {
    p=start;
    while(p->link!=NULL)
	  p=p->link;

    temp = (struct Node*)malloc(sizeof(struct Node));
    p->link=temp;
    temp->link=NULL;
    temp->data=x;
   }
 }
 //Delete operation
 void pop()
 {
   if(start==NULL)
    printf("\nNo List Present");

   else if(start->link==NULL)
   {
     free(start);
     printf("\n Node is deleted");
     start = NULL;
   }
   else
   {
     p = start;
     while(p->link->link!=NULL)
      {
	      p = p->link;
      }
      temp = p->link;
      free(temp);
      printf("\nNode is deleted");
      p->link=NULL;
   }
 }

 //Function for searching an element
 void search(int x)
 {
   int flag = 0;

   if(start==NULL)
    {
      printf("No list present...");
    }
   else
    {
      p = start;
      while(p!=NULL)
      {
	      if(p->data==x)
	      flag++;

	      p = p->link;
      }
    }
    if(flag)
       printf("\nElement found %d number of times",flag);
    else
       printf("\nElement Not Found");
 }

 //Function for counting all element
 void count()
 {
   int c = 0;

   if(start==NULL)
    {
       count<<"No list present!";
    }
    else
    {
     p = start;

      while(p!=NULL)
       {
	       c++;
	       p = p->link;
       }

       printf("\nThe total no. of elements in the list is %d", c);
    }
    
 }

 //Function for displaying element
 void display()
 {
   if(start==NULL)
    {
      printf("No list present!!!");
    }
    else
    {
      p = start;
      while(p!=NULL)
       {
	       printf("%d\n",p->data);
	       p = p->link;
       }
    }
 }