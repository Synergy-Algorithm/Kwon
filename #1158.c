#include <stdio.h>

typedef struct NODE *ListNode;
struct NODE{
	ListNode next;
	int data;
};

int main() {
	int i, j, n, m;
	ListNode head = (ListNode)malloc(sizeof(struct NODE));
	ListNode last = (ListNode)malloc(sizeof(struct NODE));
	head->next = last;
	scanf("%d %d", &n, &m);
	
	last->data = n;
	
	for(i=n-1; i>=1; i--)
	{
		addNode(head, i);
	}
	last->next = head->next;
	
	ListNode curr = head;
	
	printf("<");
	for(i=0; i<n; i++)
	{
		for(j=0; j<m-1; j++)
		{
			curr=curr->next;
		}
		if(i<n-1)
			printf("%d, ", curr->next->data);
		else
			printf("%d", curr->next->data);
		removeNode(curr);
		
	}
	printf(">");

	return 0;
}

void addNode(ListNode target, int data)
{
	ListNode newNode = (ListNode)malloc(sizeof(struct NODE));
	newNode->next = target->next;
	newNode->data = data;
	target->next = newNode;
}

void removeNode(ListNode target)
{
	ListNode deleteNode= target->next;
	target->next = deleteNode->next;
	
	free(deleteNode);
}
