/*Write Basic structure of the linked list to add 10 numbers and print it.
Extend the above by writing a function to add an element after a value. Then again write a function to delete that value.
*/

#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;
	struct node *next;
};

void add(struct node **root, int value);
void print(struct node *root);
void addAfter(struct node *root, int value, int afterVal);
void deleteNode(struct node *root,int value);

int main(){
	struct node *root=NULL;

	int i;
	for(i=0;i<10;i++){
		add(&root,i);
	}
	print(root);

	addAfter(root,34,4);

	print(root);

	deleteNode(root,34);

	print(root);
	return 0;
}

void add(struct node **root, int value){
	struct node *temp = (struct node *)malloc(sizeof(struct node));

	temp->data = value;
	temp->next = NULL;

	if(*root == NULL){
		*root = temp;
		return;
	}

	struct node *list = *root;

	while(list->next != NULL){
		list = list->next;
	}

	list->next = temp;
}

void print(struct node *root){
	struct node *temp = root;
	while(temp != NULL)
	{
		printf("\n%d",temp->data);
		temp = temp->next;
	}
	printf("\n");
}

void addAfter(struct node *root,int value, int x){
	if(root == NULL)
		return;

	struct node *temp = root;
	while(temp->next != NULL && temp->data != x){
		temp=temp->next;
	}

	if(temp->next != NULL){
		struct node *p = (struct node *)malloc(sizeof(struct node));
		p->data = value;
		p->next = temp->next;
		temp->next = p;
	}
}

void deleteNode(struct node *root, int val){
	struct node *temp = root;
	struct node *prev = NULL;
	while(temp->next != NULL && temp->data != val){
		prev = temp;
		temp = temp->next;
	}
	if(prev == NULL)
		return;
	if(temp->data != val)
		return;
	prev->next = temp->next;
	free(temp);
}
