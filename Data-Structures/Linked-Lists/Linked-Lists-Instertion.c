// Linked Lists Inserting
// It's creating a linked list
// and inserting newNode in order to linked list
#include <stdio.h>
#include <stdlib.h>

struct n{
    int data;
    struct n* next;
};
typedef struct n node;

int main(){

    node *head,*newNode,*temp;

    head = (node*)malloc(sizeof(node));  // creating head node

    printf("\nEnter first data: ");  // taking first data to create head of the list
    scanf("%d",&(head -> data));
    head -> next = NULL;

    printf("value of head is: %d, address of head is: %d\n", head->data, head);

    // Making a loop that takes new element to linked list until the input is 0
    int _continue = 1;
    while(_continue != 0){
        newNode = (node*)malloc(sizeof(node));  // allocating space in memory for the newNode
        
        printf("\nEnter new data: ");  // gathering newNode's data
        scanf("%d",&(newNode -> data));
        newNode -> next = NULL;

        if(newNode->data < head->data){
            // if data is smaller than head's data
            newNode->next = head;  // newNode will point to the first element
            head = newNode;  // and head will point to new element
        }else{
            // else we will traverse the list and find the right place
            temp = head;  // so we are starting from head

            // checking if temp's next is exist and temp's next's data is still smaller
            while((temp->next != NULL) && (newNode->data) > (temp->next->data)){
                // then iterate the temp
                temp = temp->next;
            }
            // after while ends that means we found the right place for new data
            // or we are at the end of the list
            newNode -> next = temp->next;  // so newNode points to temp's next
            temp->next = newNode; // and temp's next points to newNode
        }

        printf("newNode value: %d, newNode address: %d, newNode next address: %d",newNode -> data, newNode, newNode->next);
        
        printf("\nEnter 0 to finish the program: ");
        scanf("%d",&_continue);
    }

    // At the and we traversing the linked list
    temp = head;
    while(temp != NULL){
        printf("\nAddress: %d, data: %d, next %d", temp, temp->data, temp->next);
        temp = temp->next;
    }
    
}