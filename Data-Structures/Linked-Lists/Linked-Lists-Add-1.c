// Example of adding element to Linked lists (program written by my professor)
#include <stdio.h>
#include <stdlib.h>

struct n
{
	int x;
	struct n *next;
};
typedef struct n node;

int main()
{
	
	int data;
	node *start, *newNode, *current, *last;
	printf("size of node = %d \n", sizeof(node));

   	start = (node*)malloc(sizeof(node));

	start -> x = 10;
	start -> next = NULL;
	last = start;
	
	printf("1: x value = %d, next addr = %d  x's memory addr  = %d \n", start->x, start->next, start);
	printf("enter next data: ");
	scanf("%d", &data);
	newNode = (node *)malloc(sizeof(node));	
	newNode->x = data;
	newNode->next = NULL;
	printf("2: x value = %d, next addr = %d  x's memory addr  = %d \n", newNode->x, newNode->next, newNode);

	last->next = newNode;
	last = newNode;	
//***********************************
	printf("enter next data: ");
	scanf("%d", &data);
	newNode = (node *) malloc(sizeof(node));	
	newNode->x = data;
	newNode->next = NULL;
	printf("3: x value = %d, next addr = %d  x's memory addr  = %d \n\n", newNode->x, newNode->next, newNode);

	last->next = newNode;
	last = newNode;
//**********************************
	current = start;

	while (current != NULL)
	{
		printf("addr %d, x %d, --> next addr --> %d \n", current, current->x, current->next);
		current = current->next;
	}
	
}