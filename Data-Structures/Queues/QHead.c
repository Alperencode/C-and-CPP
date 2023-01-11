#include <stdio.h>
#include <stdlib.h>

void Enqueue(int);
void Display();
int Dequeue();

typedef struct n{
    int data;
    struct n *next;
}node;

struct qHead{
    node *front, *rear;
    int counter;
};

struct qHead *q;

int main(){
    int option, data;

    q = (struct qHead*)malloc(sizeof(struct qHead));
    q->counter = 0;
    q->front = NULL;
    q->rear = NULL;

    do{
        printf("\n\n *****MAIN MENU*****");
        printf("\n 1. Enqueue");
        printf("\n 2. Dequeue");
        printf("\n 3. Display");
        printf("\n 4. Exit");
        printf("\n Enter your option: ");
        scanf("%d", &option);

        switch(option){
            case 1:
                printf("\nEnter the number to insert in the queue: ");
                scanf("%d", &data);
                Enqueue(data);
                break;
            case 2: {
                int rValue = Dequeue();
                if(rValue == -1 && q->counter == 0)
                    printf("\nQueue is empty, nothing to dequeue");
                else
                    printf("\n%d removed from queue", rValue);
                    Display();
                break;
            }
            case 3:
                Display();
                break;
            case 4:
                option = 4;
                break;
        }
	}while(option != 4);

	return 0;
}

void Enqueue(int data){
    // O(1)

    node *newNode = (node*)malloc(sizeof(node));
    newNode->data = data;
    newNode->next = NULL;

    if(q->counter == 0){
        q->front = newNode;
        q->rear = newNode;
        q->counter += 1;
    }
    else{
        q->rear->next = newNode;
        q->rear = newNode;
        q->counter += 1;
    }

}

int Dequeue(){
    // O(1) Operation

    if(q->counter == 0)
        return -1;
    else{
        node *temp = q->front;
        int rValue = temp->data;

        q->front = q->front->next;
        free(temp);
        q->counter -= 1;
        
        return rValue;
    }

}

void Display(){
    // O(n) Operation

    if(q->counter == 0){
        printf("\nQueue is empty");
        return;
    }else{
        node *iter = q->front;

        printf("\nQueue: ");
        while(iter != NULL){
            printf("%d ", iter->data);
            iter = iter->next;
        }
    }

} 