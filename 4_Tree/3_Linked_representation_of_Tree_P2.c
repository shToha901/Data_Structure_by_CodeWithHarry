// CODE FOR: Representating a tree using linked. (with function) [Recomended method]

#include <stdio.h>
#include <stdlib.h>

// Doubly linkrd-list structure
struct node
{
    int data;
    struct node *left; // Self-referential structure
    struct node *right;
};

// Function for creating a node and return it to main function
struct node *createNode(int data)
{
    struct node *n;
    n = (struct node *)malloc(sizeof(struct node));
    n->data = data;
    n->left = NULL;
    n->right = NULL;
    return n;
}

int main()
{
    // Creating nodes using function
    struct node *r = createNode(2);
    struct node *n2 = createNode(1);
    struct node *n3 = createNode(4);
    struct node *n4 = createNode(11);
    struct node *n5 = createNode(12);
    struct node *n6 = createNode(3);

    // Linking the nodes with root and between its desendents
    r->left = n2;
    n2->left = n4;
    n2->right = n5;
    r->right = n3;
    n3->right = n6;

    return 0;
}