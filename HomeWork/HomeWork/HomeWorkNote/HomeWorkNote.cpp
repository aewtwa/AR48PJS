#include <iostream>

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
		if (mHead == nullptr)
		{
			mHead = new Node;
			mHead->ch = _ch;
			mHead->pNext = nullptr;
			mTail = mHead;
		}
		else
		{
			mTail->pNext = new Node;
			mTail->pNext->ch = _ch;
			mTail->pNext->pNext = mHead;
			mTail = mTail->pNext;
		}
	}

	void Dequeue()
	{
		Node* pNode = mHead;
		mHead = mHead->pNext;
	}

	void print()
	{

	}

private:
	Node* mHead = nullptr;
	Node* mTail = nullptr;
};

int main()
{
	Queue queue = {};
	queue.Enqueue('B');
	queue.Enqueue('I');
	queue.Enqueue('A');
	queue.Enqueue('H');
}