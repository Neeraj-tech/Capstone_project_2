#include <stdio.h>
#include <stdlib.h>

typedef struct node {
	int data;
	struct node *left;
	struct node *right;
} TREE_NODE;

TREE_NODE* addNode(int *p, int l,int r);

int main(){

	int data[10] = {1,2,3,4,5,6,7,8,9,10};
	TREE_NODE *ROOT = addNode(data,0,9);
	return 0;
}

TREE_NODE* addNode(int *p,int l,int r){

	if(l>r) return NULL;

	int mid = (l+r)/2;

	TREE_NODE *x = (TREE_NODE *)malloc(sizeof(TREE_NODE));
	printf("\nAdding Node : %d",*(p+mid));
	x->data = *(p+mid);
	x->left = addNode(p,l,mid-1);
	x->right = addNode(p,mid+1,r);
	return x;
}
