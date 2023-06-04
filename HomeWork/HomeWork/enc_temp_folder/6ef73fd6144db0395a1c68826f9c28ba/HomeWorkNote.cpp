#include <iostream>
class List
{
public:
	List()
		:head(nullptr)
		,tail(nullptr)
		,connected(0)
	{

	}
	struct Node
	{
		Node()
			:ch('\0')
			,pNext(nullptr)
		{

		}
		char ch;
		Node* pNext;
	};
	void push(char _ch)
	{
		if (head == nullptr)
		{
			head = new Node;
			head->ch = _ch;
			tail = head;
			connected++;
		}
		else
		{
			tail->pNext = new Node;
			tail->pNext->ch = _ch;
			tail = tail->pNext;
			connected++;
		}
	}
private:
	Node* head;
	Node* tail;
	int connected;
};


int main()
{
	List A = {};
	List B = {};
	List C = {};
	List D = {};
	A.push('B');
	A.push('C');
	A.push('D');
}