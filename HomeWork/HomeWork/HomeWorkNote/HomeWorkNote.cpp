#include <iostream>
class List
{
public:
	List()
		:head(nullptr)
		,tail(nullptr)
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
		}
		else
		{
			tail->pNext = new Node;
			tail->pNext->ch = _ch;
			tail = tail->pNext;
		}
	}
	void PrintList()
	{
		Node* pNode = head;
		while (true)
		{
			if (pNode == nullptr)
				break;

			std::cout << pNode->ch << " ";

			pNode = pNode->pNext;
		}
	}
private:
	Node* head;
	Node* tail;
};


int main()
{
	List list = {};

	int a = 0;
	std::cin >> a;

	char* arr = new char[a];
	for (int i = 0; i < a; i++)
	{
		std::cin >> arr[i];
		list.push(arr[i]);
	}
	list.PrintList();
}