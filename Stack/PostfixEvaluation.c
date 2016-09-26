//C program for evaluation of POSTFIX Expression
#include<stdio.h>
#include<ctype.h>

int Stack[50];
int top=-1;

void push(int elem)
{
    Stack[++top]=elem;
}

int pop()
{
    return(Stack[top--]);
}

void main()
{
    char postfix[50],ch;
    int i=0,op1,op2;

//Scanning Postfix Expression
    printf("Enter POSTFIX Expression ? ");
    scanf("%s",postfix);

    while( (ch=postfix[i++]) != '\0')
    {
        if(isdigit(ch))
            push(ch-'0');
        else
        {
            op2=pop();
            op1=pop();
            switch(ch)
            {
            case '+':
                push(op1+op2);
                break;
            case '-':
                push(op1-op2);
                break;
            case '*':
                push(op1*op2);
                break;
            case '/':
                push(op1/op2);
                break;
            }
        }
    }

//Output
    printf("\nResult: %d\n",Stack[top]);
}
