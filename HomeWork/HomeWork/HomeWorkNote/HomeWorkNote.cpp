#include <iostream>

struct Node
{
	Node()
		:ch(0)
		,mleft(nullptr)
		,mright(nullptr)
	{

	}
	char ch;
	Node* mleft;
	Node* mright;
};


void dfs(Node* _node)
{
	if (_node == nullptr)
	{
		return;
	}
	std::cout << _node->ch;


	dfs(_node->mleft);
	dfs(_node->mright);
}

int main()
{
	Node* head = new Node;
	head->ch = 'A';
	head->mleft = new Node;
	head->mleft->ch = 'B';
	head->mleft->mleft = new Node;
	head->mleft->mleft->ch = 'D';
	head->mleft->mright = new Node;
	head->mleft->mright->ch = 'E';
	head->mright = new Node;
	head->mright->ch = 'C';
	head->mright->mleft = new Node;
	head->mright->mleft->ch = 'F';

	dfs(head);
}