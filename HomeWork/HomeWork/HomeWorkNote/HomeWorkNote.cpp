#include <iostream>

class Queue
{
public:
	void AddQueue(char _ch)
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
			Node* p = head;
			while (true)
			{
				if (p->pNext == nullptr)
					break;

				p = p->pNext;
			}
			tail->pNext = new Node;
			tail->pNext->ch = _ch;
			tail->pNext->pNext = nullptr;
			tail = tail->pNext;
		}
	}

	void DeleteQueue(char _ch)
	{
		Node* pNode = head;
		if (head->ch == _ch)
		{
			head = pNode->pNext;
			delete pNode;
			pNode = nullptr;
		}
	}

	void PrintQueue()
	{
		Node* p = head;
		while (true)
		{
			std::cout << p->ch << " ";
			if (p->pNext == nullptr)
				return;

			p = p->pNext;
		}
	}

	struct Node
	{
		char ch;
		Node* pNext;
		Node* pPrev;
	};
	
private:
	Node* head = nullptr;
	Node* tail = nullptr;
};

int main()
{
	Queue Queue;
	int Enqueue = 0;
	std::cin >> Enqueue;
	int Dequeue = 0;
	std::cin >> Dequeue;
	char arr[256] = {};
	std::cin >> arr;
	for (size_t i = 0; i < Enqueue; i++)
	{
		Queue.AddQueue(arr[i]);
	}
	for (size_t i = 0; i < Dequeue; i++)
	{
		Queue.DeleteQueue(arr[i]);
	}
	Queue.PrintQueue();
}