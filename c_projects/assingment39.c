//DDL Example
#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;
	struct node *next;
	struct node *prev;
};

void add(struct node **root,int value);
void print(struct node *root);
void printRev(struct node *root);

int main(){

	struct node *root=NULL;
	int i;
	for(i=0;i<10;i++){
		add(&root,i);
	}

	print(root);

	printf("\nPrinting list in reverse order");
	
	printRev(root);

	printf("\n");

	return 0;
}

void add(struct node **root,int value){

	struct node *temp = (struct node *)malloc(sizeof(struct node));

	temp->data = value;
	temp->next = NULL;
	temp->prev = NULL;

	if(*root == NULL){
		*root = temp;
		return;
	}

	struct node *list = *root;
	while(list->next != NULL){
		list = list->next;
	}

	temp->prev = list;
	list->next = temp;
}

void printRev(struct node *root){
	struct node *temp = root;
	while(temp->next != NULL)
		temp = temp->next;
	while(temp!=NULL){
		printf("\n%d",temp->data);
		temp = temp->prev;
	}
}

void print(struct node *root)
{
	struct node *temp = root;
}
