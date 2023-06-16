#include <iostream>

int a = 0;

class Queue
{
public:
	struct Node
	{
		char ch;
		Node* pNext;
	};

	void Enqueue(char _ch)
	{
		if (head == nullptr)
		{
			head = new Node;
			head->ch = _ch;
			head->pNext = nullptr;
			tail = head;
		}
		else
		{
			tail->pNext = new Node;
			tail->pNext->ch = _ch;
			tail->pNext->pNext = nullptr;
			tail = tail->pNext;
		}
	}

	char Dequeue()
	{
		Node* p = head;
		head = head->pNext;
		return p->ch;
	}

	void print()
	{
		for (int i = 0; i < a - 1; i++)
		{
			Enqueue(Dequeue());
		}
		std::cout << head->ch;
		Dequeue();
	}
private:
	Node* head = nullptr;
	Node* tail = nullptr;
};

int main()
{
	std::cin >> a;

	Queue queue = {};

	queue.Enqueue('B');
	queue.Enqueue('I');
	queue.Enqueue('A');
	queue.Enqueue('H');
	for (size_t i = 0; i < 4; i++)
	{
		queue.print();
	}
}