#include <stdio.h>
#include <stdlib.h>

struct node{
	int data;
	struct node *next;
};

struct qHead{
	struct node *front;
	int count;
	struct node *rear;
};

struct qHead *q; 

void create_queue(struct qHead*);
void insert(struct qHead*, int);
void delete_element(struct qHead*);
void display(struct qHead*);
void peek(struct qHead*);

int main(){

	int val, option;
	q = (struct qHead*)malloc(sizeof(struct qHead));
	create_queue(q);

	do{
		printf("\n *****MAIN MENU*****");
		printf("\n 0. COUNT");
		printf("\n 1. INSERT");
		printf("\n 2. DELETE");
		printf("\n 3. PEEK");
		printf("\n 4. DISPLAY");
		printf("\n 5. EXIT");
		printf("\n Enter your option: ");
		scanf("%d", &option);

		switch(option){
			case 0:
				printf("\nQueue count = %d \n",  q->count);
				break;
			case 1:
				printf("\nEnter the number to insert in the queue:");
				scanf("%d", &val);
				insert(q,val);
				break;
			case 2:
				delete_element(q);
				break;
			case 3:
				peek(q);
				break;
			case 4:
				display(q);
				break;
		}

	}while(option != 5);

	return 0;
}

void create_queue(struct qHead *q){

	q -> rear = NULL;
	q -> count = 0;
	q -> front = NULL;

}

void insert(struct qHead *q, int val){

	struct node *newNode;
	newNode = (struct node*)malloc(sizeof(struct node));
	newNode -> data = val;
	newNode -> next = NULL;
	
	if(q -> count == 0){
		q -> front = newNode;
		q -> rear = newNode;
	}else{
		q -> rear -> next = newNode;
		q -> rear = newNode;
	}
	q->count += 1;

}

void display(struct qHead *q){

	if(q->count == 0)
		printf("\nQUEUE IS EMPTY");
	else{
		struct node *current;
		current = q -> front;
		printf("\n");
	 	while(current !=q -> rear){	
			printf("%d\t", current -> data);
			current = current -> next;
		}
		printf("%d\t ", current -> data);
	}

}

void delete_element(struct qHead *q){
	
	if(q -> count == 0)
		printf("\nUNDERFLOW");
	else{	
		struct node *temp;
		temp = q -> front;
		q -> front = q -> front -> next;
		printf("\nThe value being deleted is : %d", temp -> data);
		q->count -=1;
		free(temp);
	}

}

void peek(struct qHead *q){

	if(q->count== 0)
		printf("\nQUEUE IS EMPTY");
	else
		printf("\nThe value at front of queue is : %d", q->front->data);

}