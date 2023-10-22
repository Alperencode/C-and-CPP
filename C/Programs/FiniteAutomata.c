#include <stdio.h>
#include <stdlib.h>

void pushFront(data);
void pushBack(data);

struct n{
	int data;
	struct n* next;
}typedef node;

node *head, *tail;
int main(){
	
	int i, number, length;
	
	head = (node*)malloc(sizeof(node));
	head = NULL;
	tail = head;
	
	printf("How long you want the string length: ");
	scanf("%d", &length);
	
	for(i = 0; i < length; i++){
		printf("Enter %d. number: ", i+1);
		scanf("%d", &number);
		pushBack(number);
	}
	
	return 0;
}

int automata(){
	// Need to implement states logic
	node* temp = head;
	while(temp != NULL){
	}
}

void pushFront(int data){
	node *temp = (node*)malloc(sizeof(node));
	temp->data = data;
	temp->next = head;
	head = temp;
	if(tail == NULL)
		tail = temp;
}

void pushBack(int data){
	if(tail == NULL){
		pushFront(data);
		return;
	}
	
	node *temp = (node*)malloc(sizeof(node));
	temp->data = data;
	temp->next = NULL;
	
	tail->next = temp;
	tail = temp;
}

