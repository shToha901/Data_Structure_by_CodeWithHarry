// CODE FOR: Representating a tree using linked. (without function)

#include <stdio.h>
#include <stdlib.h>

// Doubly linked-list structure
struct node
{
    int data;
    struct node *right; // Self-referential structure
    struct node *left;
};

int main()
{
    // Creating root node
    struct node *r;
    r = (struct node *)malloc(sizeof(struct node));
    r->data = 2;
    r->left = NULL;
    r->right = NULL;

    // Creating second node
    struct node *n2;
    n2 = (struct node *)malloc(sizeof(struct node));
    n2->data = 1;
    n2->left = NULL;
    n2->right = NULL;

    // Creating third node
    struct node *n3;
    n3 = (struct node *)malloc(sizeof(struct node));
    n3->data = 4;
    n3->left = NULL;
    n3->right = NULL;

    // Creating fourth node
    struct node *n4;
    n4 = (struct node *)malloc(sizeof(struct node));
    n4->data = 11;
    n4->left = NULL;
    n4->right = NULL;

    // Creating ffifth node
    struct node *n5;
    n5 = (struct node *)malloc(sizeof(struct node));
    n5->data = 12;
    n5->left = NULL;
    n5->right = NULL;

    // Creating sixth node
    struct node *n6;
    n6 = (struct node *)malloc(sizeof(struct node));
    n6->data = 11;
    n6->left = NULL;
    n6->right = NULL;

    // Linking the node with root and between its Decendents
    r->left = n2;
    n2->left = n4;
    n2->right = n5;
    r->right = n3;
    n3->right = n6;

    return 0;
}