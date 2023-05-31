#include <iostream>

struct Node
{
	int num;
	Node* pNext;
};
Node* head = nullptr;

int main()
{
	Node FirstNode = {};
	head = &FirstNode;
	head->num = 3;
	head->pNext = new Node;
	head->pNext->num = 5;
	head->pNext->pNext = new Node;
	head->pNext->pNext->num = 4;
	head->pNext->pNext->pNext = new Node;
	head->pNext->pNext->pNext->num = 2;
	int
}