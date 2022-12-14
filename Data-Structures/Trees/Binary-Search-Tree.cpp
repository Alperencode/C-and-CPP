#include <stdio.h>
#include <stdlib.h>
#define size 20

struct n
{
    int data;
    struct n *right;
    struct n *left;
};
typedef struct n node;

node* insert(node *root, int data){
    // if root is NULL, create null
    if(root == NULL){
        root = (node*)malloc(sizeof(node));
        root -> left = NULL;
        root -> right = NULL;
        root -> data = data;
        return root;
    }

    // if data is smaller than root's data
    if(data < root->data){
        // add to left using recursive functions
        root -> left = insert(root->left, data);
        return root;
    }
    // otherwise add to right
    root -> right = insert(root -> right, data);
    return root;

}

void traverse(node *root){
    // Infix Traversing (LNR)
    if(root == NULL)
        return;
    traverse(root -> left);
    printf("%d ", root->data);
    traverse(root -> right);
}

int main(){

    node *root = NULL;
    int arr[size] = {45,20,60,30,48,55,70,14,51,86,39,84,12,9,150,519,210,113,52,105};

    for (int i = 0; i < size; i++)
        root = insert(root, arr[i]);    

    traverse(root);

}