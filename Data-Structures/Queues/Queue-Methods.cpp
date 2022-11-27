#include <iostream>
using namespace std;

// Methods
void Enqueue(int);
int Dequeue();
void printList();

struct node{
    int data;
    struct node *next;
}*head,*tail,*newNode,*temp;

int main(){

    tail = head = NULL;

    int flag = 1;
    while(flag!=0){
        int input;
        printf("\n\n[1] Enqueue (Add to queue)\n[2] Dequeue (Remove from queue)\nChoose operation: ");
        scanf("%d",&input);
        
        int data;
        switch(input)
        {
        case 1:
            printf("Enter the element that will be Enqueued: ");
            scanf("%d",&data);
            Enqueue(data);
            break;
        case 2:
            printf("Element Dequeued: %d\n", Dequeue());
            break;
        default:
            flag=0;
        }
        printf("\nLinked-List: ");
        printList();
    }
    
}

void Enqueue(int data){
    // O(1) Operation
    newNode = (node*)malloc(sizeof(node));
    newNode -> data = data;
    newNode -> next = NULL;

    if(head == NULL)
        tail = head = newNode;
    else{
        tail -> next = newNode;
        tail = newNode; 
    }
}

int Dequeue(){
    // O(1) Operation
    int data = head -> data;
    
    temp = head;
    head = head -> next;
    free(temp);

    return data;
}

void printList(){
    // O(n)
    temp = head;
    while(temp != NULL){
        printf("%d ", temp->data);
        temp = temp->next;
    }
}