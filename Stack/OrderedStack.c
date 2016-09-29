//C program for creating an ORDERED Stack
#include<stdio.h>
#include<string.h>

int S[20];
int top = -1;


void PUSH(int data)
{
    int temp;
    if(top == 19)
        printf("FULL");
    else
    {
        if(top == -1 || S[top] >= data)
        {
            top++;
            S[top] = data;
        }
        else
        {
            temp = POP();
            PUSH(data);
            PUSH(temp);
        }
    }
}
int POP()
{
    int popped;
    if(top==-1)
    {
        printf("Stack is already Empty!!");
        return 0;
    }
    else
    {
        popped = S[top];
        top--;
        return popped;
    }
}
void DISPLAY()
{
    int i;
    if(top==-1)
    {
        printf("Stack is Empty!!!");
    }
    else
    {
        for(i=top; i>=0; --i)
        {
            printf("\n********\n");
            printf("\n%d\n",S[i]);
        }
        printf("\n*******************************\n");
    }
}

void main()
{
    int data,choice;
menu:
    printf("\n********MENU**********\n1. PUSH\n2. DISPLAY\n3. EXIT\nEnter Your Choice: ");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        printf("Enter a num:");
        scanf("%d",&data);
        PUSH(data);
        break;
    case 2:
        DISPLAY();
        break;
    case 3:
        return;
        break;
    default:
        goto menu;
        break;
    }
    goto menu;

}
