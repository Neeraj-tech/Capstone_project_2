//Binary Tree
#include <stdio.h>
#include <stdlib.h>

typedef struct node {
	int data;
	struct node *left;
	struct node *right;
}BST;

void addNodeToBST(BST **ptr, int val);
int findVal(BST *root, int val);

int main(){
	BST *ROOT = NULL;

	int a[10] = {5,7,8,2,45,3,9,1,4,12};

	int i = 0;
	for(i=0;i<10;i++) {
		addNodeToBST(&ROOT, a[i]);
	}

	int x=9;
	int v = findVal(ROOT,x);

	(v==0) ? printf("\n %d Value not found ",x):printf("\n %d value found",x);

	x = 78;
	v = findVal(ROOT,x);

	(v==0) ? printf("\n %d Value not found ",x):printf("\n %d value found ",x);

	return 0;
}

void addNodeToBST(BST **ptr, int val){

	if(*ptr == NULL) {
		BST *x = (BST *)malloc(sizeof(BST));
		x->data = val;
		x->left = NULL;
		x->right = NULL;
		*ptr = x;
		printf("\nAdding %d",val);
		return;
	}
	BST *temp = *ptr;
	if(val > temp->data){
		addNodeToBST(&(temp->right),val);
	}
	else
	{
		addNodeToBST(&(temp->left),val);
	}
}

int findVal(BST *root, int val) {
	if(root==NULL)
		return 0;

	if(val == root->data)
		return 1;

	if(val <root->data)
		return 0 | findVal(root->left,val);
	else
		return 0 | findVal(root->right,val);
}
