#include<stdio.h>
#include<stdlib.h>

typedef struct listnode {
	char *data;
	struct listnode *next;
} LIST;
LIST *head = NULL;

void addToList(char *s){
	LIST *x = (LIST *)malloc(sizeof(LIST));
	x->data = s;
	x->next = NULL;

	if(head == NULL){
		head = x;
	}
	else {
		LIST *temp = head;
		while(temp->next != NULL){
			temp=temp->next;
		}
		temp->next = x;
	}
}

void initialize(){
	addToList("hello");
	addToList("world");
	addToList("today");
	addToList("is");
	addToList("beautiful");
	addToList("day");

}

LIST * getListHeader(){
	return head;
}
