//C program to convert INFIX Expression to POSTFIX Expression

#include<stdio.h>
#include<ctype.h>

char charStack[50];
int top = -1;

void push(char elem)
{
    charStack[++top] = elem;
}

char pop()
{
    return (charStack[top--]);
}

//Function to check the precedence of operators
int precedence(char elem)
{
    switch (elem)
    {
    case '#':
        return 0;
    case '(':
        return 1;
    case '+':
    case '-':
        return 2;
    case '*':
    case '/':
        return 3;
    }
}

void main()
{
    char infix[50], postfix[50], ch, elem;
    int i = 0, last = 0;

//Scanning Infix Expression
    printf("Enter INFIX Expression: ");
    scanf("%s", infix);

    push('#');
    while ((ch = infix[i++]) != '\0')
    {
        if (ch == '(')
            push(ch);
        else if (isalnum(ch))
            postfix[last++] = ch;
        else if (ch == ')')
        {
            while (charStack[top] != '(')
                postfix[last++] = pop();
            elem = pop();
        }
        else
        {
            while (precedence(charStack[top]) >= precedence(ch))
                postfix[last++] = pop();
            push(ch);
        }
    }

//Empty the stack and append the elements at the end of postfix
    while (charStack[top] != '#')
        postfix[last++] = pop();
    postfix[last] = '\0';

//Output
    printf("\nPostfix Expression: %s\n", postfix);
}
