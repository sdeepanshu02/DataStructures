#include<stdio.h>
#include<stdlib.h>
struct tree
{
    int data;
    struct tree *lptr;
    struct tree *rptr;
};
struct tree *Insertion(struct tree *root, int data);
int Maximum(struct tree *root);
int Minimum(struct tree *root);
int IsTreeNull(struct tree *root);

void main()
{
    int choice,data,MAX=0,MIN=0;
    struct tree *root = NULL;
menu:
    printf("\n********MENU: Binary Search Tree**********\n1. Insertion\n2. MAX Element\n3. MIN Element\n4. EXIT\nEnter Your Choice: ");
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        printf("\nEnter a NUMBER : ");
        scanf("%d",&data);
        root = Insertion(root, data);
        fflush(stdin);
        break;
    case 2:
        if(IsTreeNull(root) == 0)
        {
            MAX = Maximum(root);
            printf("\nMAX Element :%d\n",MAX);
        }
        else
        {
            printf("\nNo Element is present in TREE!!\n");
        }
        break;
    case 3:
        if(IsTreeNull(root) == 0)
        {
            MIN = Minimum(root);
            printf("\nMIN Element :%d\n",MIN);
        }
        else
        {
            printf("\nNo Element is present in TREE!!\n");
        }
        break;
    case 4:
        return;
        break;
    default:
        goto menu;
        break;
    }
    goto menu;

}

int IsTreeNull(struct tree *root)
{
    if(root == NULL)
        return 1;
    else
        return 0;
}
struct tree* Insertion(struct tree *root, int data)
{
    if(root == NULL)
    {

        struct tree *temp =  (struct tree *)malloc(sizeof(struct tree));
        temp->data = data;
        temp->lptr = NULL;
        temp->rptr = NULL;
        root = temp;
        return root;
    }

    if(data < root->data)
        root->lptr = Insertion(root->lptr, data);
    else if(data > root->data)
        root->rptr = Insertion(root->rptr, data);
    return root;
}

int Maximum(struct tree *root)
{
    if (root->rptr != NULL)
    {
        return Maximum(root->rptr);
    }
    else
    {
        return root->data;
    }
}

int Minimum(struct tree *root)
{
    if (root->lptr != NULL)
    {
        return Minimum(root->lptr);
    }
    else
    {
        return root->data;
    }
}
