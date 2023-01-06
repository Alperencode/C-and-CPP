#include <stdio.h>
#include <stdlib.h>
#define size 9

struct n{
    int data;
    struct n *right, *left;
};

typedef struct n node;

node* insert(node* root, int x){
    if(root == NULL){
        root = (node*)malloc(sizeof(node));
        root -> right = NULL;
        root -> left = NULL;
        root -> data = x;
        return root;
    }

    if(root->data < x){
        root->right = insert(root->right,x);
        return root;
    }

    root->left = insert(root->left, x);
    return root;
}

void traverse(node *root){
    // Prefix Traverse
    if(root==NULL)
        return;
    
    printf("%d ", root->data);
    traverse(root->left);
    traverse(root->right);
}

int min(node *root){
    while(root->left != NULL)
        root = root->left;
    return root->data;
}

int max(node *root){
    while(root->right != NULL)
        root = root->right;
    return root->data;
}

node* deletion(node *root, int x){

    if(root == NULL){
        free(root);
        return NULL;
    }

    if (root->data == x){
        if (root->right == NULL && root->left == NULL){
            free(root);
            return NULL;
        }
        if (root->right != NULL){
            root -> data = min(root->right);
            root -> right = deletion(root->right, root->data);
            return root;
        }
        root -> data = max(root->left);
        root -> left = deletion(root->left, root->data);
        return root;
    }
    
    if (root->data < x){
        root -> right = deletion(root->right, x);
        return root;
    }

    root -> left = deletion(root->left, x);
    return root;
}

int main(){

    node *root = NULL;
    int arr[size] = {56,200,26,190,28,213,18,24,12};

    for (int i = 0; i < size; i++)
        root = insert(root, arr[i]);

    traverse(root);

    printf("\nMin: %d", min(root));
    printf("\nMax: %d\n", max(root));

    deletion(root, 56);

    traverse(root);

}