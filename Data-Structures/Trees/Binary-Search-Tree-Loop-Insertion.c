#include <stdio.h>
#include <stdlib.h>

struct node {
    struct node *left,*right;
    int data;
}*prev, *current, *newNode, *root = NULL;

void insert(struct node *troot, int d){
    
    newNode = (struct node*) malloc(sizeof(struct node));
    newNode->data = d;
    newNode->left = NULL;
    newNode->right = NULL;

    if (troot == NULL)
        troot = newNode;
    else{
        current = troot;
        while (current != NULL){
            prev = current;
            if (newNode->data < current->data)
                current = current->left;
            else
                current = current->right;
        }
        if(newNode->data > prev->data)
            prev->right = newNode;
        else
        prev->left = newNode;
    }
    root = troot;
}

void inorder(struct node *tree){
    if(tree==NULL) return;
    inorder(tree->left);
    printf("%d ", tree->data);
    inorder(tree->right);
}

int main(void){

    int size = 16;
    int arr[] = {26, 19, 30, 15, 25, 10, 22, 28, 20, 23, 18, 47, 32, 29, 27, 60};
    
    for (int i = 0; i < size ; i++)
        insert(root, arr[i]);

    printf("\nInorder traverse: ");
    inorder(root);

    return 0;
} 