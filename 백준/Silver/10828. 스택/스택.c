#include <stdio.h>
#include <stdlib.h>

#define TRUE 1
#define FALSE 0

typedef int Data;

typedef struct _node {
	Data data;
	struct _node* next;
}Node;

typedef struct _listStack {

	Node* head;
	int numofdata;
}ListStack;

typedef ListStack Stack;




void Stackinit(Stack* pstack) {
	pstack->head = NULL;
	pstack->numofdata = 0;
}
int Sisempty(Stack* pstack) {
	if (pstack->head == NULL)
		return TRUE;
	else
		return FALSE;
}

void Stackpush(Stack* pstack, Data data) {
	Node* newnode = (Node*)malloc(sizeof(Node));
	newnode->data = data;
	newnode->next = pstack->head;
	pstack->head = newnode;
	(pstack->numofdata)++;
}
Data Stackpop(Stack* pstack) {

	Data temp;
	Node* tnode;

	if (Sisempty(pstack)) {
		return -1;
	}

	temp = pstack->head->data;
	tnode = pstack->head;

	pstack->head = pstack->head->next;

	free(tnode);
	(pstack->numofdata)--;
	return temp;
}
Data Stackseek(Stack* pstack) {

	if (Sisempty(pstack)) {
		return -1;
	}

	return(pstack->head->data);
}



int main() {
	Stack stack;
	short n;
	char con[6];
	int num;
	Stackinit(&stack);
	scanf("%hd", &n);
	getchar();
	while (n--) {
		scanf("%s", con);

		if (con[0]=='p' && con[1]=='u') {
			scanf("%d", &num);
			Stackpush(&stack, num);
			getchar();
		}
		else if (con[0] == 'p') {
			printf("%d\n", Stackpop(&stack));
		}
		else if (con[0] == 's') {
			printf("%d\n", stack.numofdata);
		}
		else if (con[0] == 'e') {
			printf("%d\n", Sisempty(&stack));
		}
		else  {
			printf("%d\n", Stackseek(&stack));
		}


	}

}