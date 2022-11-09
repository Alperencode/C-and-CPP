// Linked Lists Inserting (I wrote this program)
// It's creating a linked list
// and inserting newNode in order to linked list
#include <stdio.h>
#include <stdlib.h>

struct n{
    int data;
    struct n* next;
};
typedef struct n node;

// Linked List Methods
void pushFront(int);
void pushBack(int);
int topFront();
int topBack();
void popFront();
void popBack();
void Erase(int);

void printList();

node *head,*tail;
int main(){

    head = (node*)malloc(sizeof(node));  // creating head node
    head = NULL;
    tail = head;

    int flag = 1;
    while(flag!=0){
        int input;
        printf("\n\n[1] pushFront\n[2] pushBack\n[3] topFront\n[4] topBack\n[5] popFront\n[6] popBack\n[7] Erase\nChoose operation: ");
        scanf("%d",&input);
        
        int data;
        switch(input)
        {
        case 1:
            printf("Enter the element that will be push front: ");
            scanf("%d",&data);
            pushFront(data);
            break;
        case 2:
            printf("Enter the element that will be push back: ");
            scanf("%d",&data);
            pushBack(data);
            break;
        case 3:
            printf("Top front element is: %d", topFront());
            break;
        case 4:
            printf("Top back element is: %d", topBack());
            break;
        case 5:
            printf("Top front element deleted\n");
            popFront();
            break;
        case 6:
            printf("Top back element deleted\n");
            popBack();
            break;
        case 7:
            printf("Enter the data that will be erased: ");
            scanf("%d",&data);
            Erase(data);
            break;
        default:
            flag=0;
        }
        printf("\nLinked-List: ");
        printList();
    }
}

void pushFront(int data){
    node* temp = (node*)malloc(sizeof(node));
    temp->data = data;
    temp->next = head;
    head=temp;
    if(tail==NULL)
        tail = temp;
}

void pushBack(int data){
    node* temp = (node*)malloc(sizeof(node));
    temp->data = data;
    temp->next = NULL;

    tail->next = temp;
    tail = temp;
}

int topFront(){
    return head->data;
}

int topBack(){
    return tail->data;
}

void popFront(){
    if(head==NULL)
        return;
    node* temp = head;
    head = head->next;
    free(temp);
}

void popBack(){
    node* iter = head;
    if(tail==NULL)
        return;
    while(iter->next!=NULL && iter->next!=tail)
        iter=iter->next;
    node* temp = tail;
    if(iter->next==NULL){
        head = NULL;
        tail = head;
    }else{
        tail = iter;
        tail->next = NULL;
    }
    free(temp);
}

void Erase(int data){
    if(head->data == data){
        popFront();
        return;
    }else if(tail->data == data){
        popBack();
        return;
    }else{
        node *iter = head;
        while(iter->next->data != data && iter->next!=NULL){
            iter = iter->next;
        }
        if(iter->next->data == data){
            node *temp = iter->next;
            iter->next = iter->next->next;
            free(temp);
        }
    }
}

void printList(){
    node* temp = head;
    while(temp != NULL){
        printf("%d ", temp->data);
        temp = temp->next;
    }
}