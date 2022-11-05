// Linked-Lists-Insertion (Program written by my professor)
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
	int data, continue_ = 1;
	int x = 1;
	node *start, *newNode, *current, *prev;
	
	start = (node *) malloc(sizeof(node));
	printf("Start pointer's memory addr = %d \n", start);
	printf("enter first data: ");
	scanf("%d", &data);
	start -> x = data;
	start -> next = NULL;

	printf("%d. node addr %d, data value = %d, next addr = %d \n", x, start, start->x, start->next);
	while (continue_ != 0)
	{	x++;
		newNode = (node *) malloc(sizeof(node));	
		printf("<< %d. node memory addr = %d \n", x, newNode);
		
		printf("enter next data: ");
		scanf("%d", &data);
		newNode->x = data;
		newNode->next = NULL;
		
		current = start;
		prev = start;
		if (newNode->x < start->x)
		{
			printf("\n> current x = %d, newNode x = %d added to head of list\n", current->x, newNode->x);
			newNode->next = start;
			start = newNode;			
		}
		else
		{		
			while (current->x < newNode->x )
			{
				if (current->next !=NULL)
				{			
					prev = current;
					current = current->next;
				}	
				else
				{
					printf("\n> current x = %d, newNode x = %d added to end of list\n", current->x, newNode->x);
					current->next = newNode;
				}									
			}
			
			if (current->x > newNode->x )
			{	printf("\n> current x = %d, newNode x = %d added to list\n", current->x, newNode->x);
				newNode->next = prev->next;
				prev->next = newNode;
			}
		}
		printf("enter 0 to stop: ");
		scanf("%d", &continue_);
	}

	printf("\n");
	current = start;
	
	while (current!= NULL)
	{
		printf("*addr %d, data = %d, next = %d \n", current, current-> x, current->next);
		current = current->next;
	}
}// end of main
