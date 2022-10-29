#inclde<conio.h>
#include<iostream>
using namespace std;

struct Node
{
    int data;
    struct Node* link;
}*temp,*start,*p;

void insert(int x);
void pop();
void count();
void display();
void search(int x);

int main()
{
    int ch,n;
    start = NULL;
    
    do
    {
      
      printf("Enter your choice : \n");
      printf("Press 1 to insert : \n");
      printf("Press 2 to Pop : \n");
      printf("Press 3 to display : \n");
      scanf("%d",&ch);

      switch(ch)
      {

        case 1: printf("Enter the number to insert : \n");
                scanf("%d",&n);
                insert(n);
                break;

        case 2: pop();
                break;

        case 3: display();
                break;

        default: printf("You have entered wrong choice..");
      }

      printf("Press 0 to continue..");
      scanf("%d",&ch);

    } while (ch==0);
    
    void insert(int x)
    {
        if(start==NULL)
        {
            start = (struct node*)malloc(sizeof(struct node));
            start->data = x;
            start->link = NULL;
        }

        else
        { 
            while(p->link!=NULL)
            {
                p=p->link;
            }
            temp = (struct node*)malloc(sizeof(struct node));
            p->link = temp;
            temp->data = x;
            temp->link = NULL;
        }
    }

    void pop()
    {
        if(start==NULL)
         printf("NO list present");

        elseif(start->link==NULL)
        {
            free(start);
            printf("\nNode is deleted\n");
            start=NULL;
        }

        else
        {
            p=start;
            while(p->link->link!=NULL)
            {
                p=p->link;
            }

            temp = p->link;
            free(temp);
            printf("Node is deleted\n");
            p->link=NULL;
        }
    }
 

}