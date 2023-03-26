#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node
{
	struct node* next;
	int data;
}Node;

typedef struct stack
{
	Node* head;
	int num;
}Stack;

void Init(Stack* s);
void PUSH(Stack* s, char data);
int POP(Stack* s);
int EMPTY(Stack* s);
int TOP(Stack* s);

int main()
{
	Stack s;
	int t, n;
	char str[52];
	scanf("%d", &t);
	getchar();

	for (int i = 0; i < t; i++)
	{
		Init(&s);
		fgets(str, sizeof(str), stdin);
		str[strlen(str) - 1] = '\0';        // scanf("%s", str);

		PUSH(&s, str[0]);

		for (int j = 1; j < strlen(str); j++)
		{
			if (TOP(&s) == '(' && str[j] == ')')
				POP(&s);
			else
				PUSH(&s, str[j]);
		}

		if (EMPTY(&s))
			printf("YES\n");
		else
			printf("NO\n");
	}


	return 0;
}

void Init(Stack* s)
{
	s->head = NULL;
	s->num = 0;
}

void PUSH(Stack* s, char data)
{
	Node* newNode = (Node*)malloc(sizeof(Node));
	newNode->data = data;

	newNode->next = s->head;
	s->head = newNode;

	s->num++;
}

int POP(Stack* s)
{
	if (EMPTY(s))
		return -1;

	Node* rnode = s->head;
	int Data = rnode->data;

	s->head = s->head->next;

	free(rnode);
	s->num--;

	return Data;
}

int EMPTY(Stack* s)
{
	if (s->head == NULL)
		return 1;
	else
		return 0;
}

int TOP(Stack* s)
{
	if (EMPTY(s))
		return -1;

	return s->head->data;
}