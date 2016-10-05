//Introduction to Circular Queue
#include<stdio.h>

int head = -1;
int tail = -1;

void EnqueueCQ(int *CQ, int num)
{
    if(head == (tail+1)%50)
    {
        printf("\nQueue is FULL!!!\n\n");
        return;
    }
    tail = (tail+1)%50;
    CQ[tail] = num;
    printf("\n%d is Enqueued.\n\n",num);
    if(head == -1)
    {
        head++;
    }
    return;
}

int DequeueCQ(int *CQ)
{
    int temp;
    if(tail == head && head == -1)
    {
        printf("\nQueue is EMPTY!!!\n\n");
        return -1;
    }
    temp = CQ[head];
    if(head == tail)
    {
        head = tail = -1;
    }
    else
    {
        head = (head+1)%50;
    }
    return temp;
}

void ShowCQ(int *CQ)
{
    int i;
    if(tail == head && head == -1)
    {
        printf("\nQueue is EMPTY!!!\n\n");
        return;
    }
    printf("\n");
    for(i=head; i != tail; i=(i+1)%50)
    {
        printf("%d <-- ",CQ[i]);
    }
    printf("%d\n\n",CQ[tail]);
}

void main()
{
    int CQ[50],choice,num,delNum;
    start:
    printf("********MENU*********\n1. Remove an Element\n2. Insert an Element\n3. Show Queque\n4. Exit\nEnter your choice: ");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:delNum = DequeueCQ(CQ);
                if(delNum != -1)
                {
                    printf("\n%d is Dequeued.\n\n",delNum);
                }
                break;
        case 2: printf("\nEnter the number: ");
                scanf("%d",&num);
                EnqueueCQ(CQ,num);
                break;
        case 3: ShowCQ(CQ);
                break;
        case 4:return;
                break;
        default:goto start;
                break;
    }
    goto start;
}
