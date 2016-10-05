#include<stdio.h>
#include<stdlib.h>
struct tree
{
    int data;
    struct tree *lptr;
    struct tree *rptr;
};
struct tree *Insertion(struct tree *root, int data);
struct tree *Del(struct tree *root);
int IsTreeNull(struct tree *root);

void main()
{
    int choice,data,counter=0;
    struct tree *root = NULL;
menu:
    printf("\n********MENU: Binary Search Tree**********\n1. Insertion\n2. Delete BST\n3. EXIT\nEnter Your Choice: ");
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
            root = Del(root);
        }
        printf("\nTREE has been DELETED.\n",counter);
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

struct tree *Del(struct tree *root)
{
    if (root != NULL)
    {
        root->lptr = Del(root->lptr);
        root->lptr = Del(root->rptr);
        free(root);
    }
    return NULL;
}
