//Introduction to Binary Search Tree
#include<stdio.h>
#include<stdlib.h>

struct tree
{
    int data;
    struct tree *lptr;
    struct tree *rptr;
};

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

void Search(struct tree *root, int data)
{
    if(root == NULL)
    {
        printf("\n%d is NOT PRESENT in TREE!!!\n",data);
        return;
    }

    if(root->data == data)
    {
        printf("\n%d is PRESENT in TREE\n",data);
    }
    else if(data < root->data)
        Search(root->lptr, data);
    else if(data > root->data)
        Search(root->rptr, data);
}

void Inorder(struct tree *root)
{
    if (root != NULL)
    {
        Inorder(root->lptr);
        printf("%d \n", root->data);
        Inorder(root->rptr);
    }
}

void Preorder(struct tree *root)
{
    if (root != NULL)
    {
        printf("%d \n", root->data);
        Preorder(root->lptr);
        Preorder(root->rptr);
    }
}

void Postorder(struct tree *root)
{
    if (root != NULL)
    {
        Postorder(root->lptr);
        Postorder(root->rptr);
        printf("%d \n", root->data);
    }
}

void main()
{
    int choice,data;
    struct tree *root = NULL;
    menu:
    printf("\n********MENU: Binary Search Tree**********\n1. Insertion\n2. Search\n3. Inorder Traversal\n4. Preorder Traversal\n5. Postorder Traversal\n6. EXIT\nEnter Your Choice: ");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1: printf("\nEnter a NUMBER : ");
                scanf("%d",&data);
                root = Insertion(root, data);
                fflush(stdin);
                break;
        case 2: printf("\nEnter a NUMBER : ");
                scanf("%d",&data);
                Search(root, data);
                fflush(stdin);
                break;
        case 3: if(IsTreeNull(root))
                {
                    printf("\nTREE is EMPTY\n");
                    break;
                }
                printf("\n*****INORDER TRAVERSAL*****\n");
                Inorder(root);
                break;
        case 4: if(IsTreeNull(root))
                {
                    printf("\nTREE is EMPTY\n");
                    break;
                }
                printf("\n*****PREORDER TRAVERSAL*****\n");
                Preorder(root);
                break;
        case 5: if(IsTreeNull(root))
                {
                    printf("\nTREE is EMPTY\n");
                    break;
                }
                printf("\n*****POSTORDER TRAVERSAL*****\n");
                Postorder(root);
                break;
        case 6: return;
                break;
        default: goto menu;
                break;
    }
    goto menu;

}
