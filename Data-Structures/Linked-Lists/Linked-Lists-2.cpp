// Second example of Linked lists (program written by my teacher)
#include <stdio.h>
#include <stdlib.h>

struct node
{
	int x;
	struct node *next;
};

int main()
{	
	int data, y = 1;
	struct node *start, *newNode, *current, *last;
	
	start =  (node *) malloc(sizeof(node));
	start -> x = 10;
	start -> next = NULL;
	last = start;
	
	printf("%d: x value = %d, next addr = %d  addr in decimal = %d \n", y, start->x, start->next, start);
	
	for(int y = 2; y <=4; y++)
	{
	
		printf("enter next data: ");
		scanf("%d", &data);
		newNode = (node *) malloc(sizeof(node));	
		newNode->x = data;
		newNode->next = NULL;
		printf("%d: x value = %d, next addr = %d  addr in decimal = %d \n", y, newNode->x, newNode->next, newNode);
	
		last->next = newNode;
		last = newNode;	
	}	
	printf("\n\n");
	current = start;

	while (current != NULL)
	{
		printf("addr %d, x %d, --> next addr --> %d \n", current, current->x, current->next);
		current = current->next;
	}
	
}
