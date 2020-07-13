#include<stdio.h>
#include<stdlib.h>

struct Node  {
	int data;
	struct Node* prox;
	struct Node* ant;
};

struct Node* head; 

struct Node* GetNewNode(int x) {
	struct Node* newNode
		= (struct Node*)malloc(sizeof(struct Node));
	newNode->data = x;
	newNode->ant = NULL;
	newNode->prox = NULL;
	return newNode;
}

void InsertAtHead(int x) {
	struct Node* newNode = GetNewNode(x);
	if(head == NULL) {
		head = newNode;
		return;
	}
	head->ant = newNode;
	newNode->prox = head; 
	head = newNode;
}

void InsertAtTail(int x) {
	struct Node* temp = head;
	struct Node* newNode = GetNewNode(x);
	if(head == NULL) {
		head = newNode;
		return;
	}
	while(temp->prox != NULL) temp = temp->prox; // Go To last Node
	temp->prox = newNode;
	newNode->ant = temp;
}

void Print() {
	struct Node* temp = head;
	printf("Forward: ");
	while(temp != NULL) {
		printf("%d ",temp->data);
		temp = temp->prox;
	}
	printf("\n");
}

void ReversePrint() {
	struct Node* temp = head;
	if(temp == NULL) return; 
	while(temp->prox != NULL) {
		temp = temp->prox;
	}

	printf("Reverse: ");
	while(temp != NULL) {
		printf("%d ",temp->data);
		temp = temp->ant;
	}
	printf("\n");
}

int main() {

	head = NULL; 
	
	
	InsertAtTail(2); 
	Print(); 
	ReversePrint();
	InsertAtTail(4); 
	Print(); 
	ReversePrint();
	InsertAtHead(6); 
	Print(); 
	ReversePrint();
	InsertAtTail(8); 
	Print(); 
	ReversePrint();
	
}

