//문제 1번
//아래 소스코드는 힙에 노드를 4개 생성한 코드입니다.
//3을 입력하면 3의 배수로 4개 노드를 생성해 주세요.
//이제 while문을 이용해서 만들어진 모든 노드를 출력 해 주세요.
//입력 예제
//3
//출력 결과
//3 6 9 12

#include <iostream>

struct Node
{
	Node()
		:num(0)
		, pNext(nullptr)
	{

	}
	int num;
	Node* pNext;
};

Node* head = nullptr;

void addNode(int _a)
{
	if (head == nullptr)
	{
		head = new Node;
		head->num = _a;
		head->pNext = nullptr;
	}
	else
	{
		Node* pNode = head;
		while (true)
		{
			if (pNode->pNext == nullptr)
				break;

			pNode = pNode->pNext;
		}

		pNode->pNext = new Node;
		pNode->pNext->num = _a;
		pNode->pNext->pNext = nullptr;
	}
}

int main()
{
	int a = 0;
	std::cin >> a;
	for (size_t i = 1; i <= 4; i++)
	{
		addNode(a * i);
	}

	Node* p = head;
	while (true)
	{
		std::cout << p->num << " ";
		if (p->pNext == nullptr)
			break;

		p = p->pNext;
	}
}

//문제 2번
//숫자 하나를 입력으세요(11 ~36 까지 숫자)
//입력받은 번호에 해당하는 문자 부터 노드 4개만 연결시켜주세요.
//11 : A
//12 : B
//13 : C
//14 : D
//...
//36 : Z
//만약 11을 입력받았다면, 아래와 같이 구성하면 됩니다.
//그리고 for문을 돌려 모든 노드를 출력 해 주세요.
//입력 예제
//11
//출력 결과
//ABCD

#include <iostream>

struct Node
{
	char ch;
	Node* pNext;
};

Node* head = nullptr;
Node* tail = nullptr;

void addNode(char _a)
{
	if (head == nullptr)
	{
		head = new Node;
		head->ch = _a;
		head->pNext = nullptr;
		tail = head;
	}
	else
	{
		tail->pNext = new Node;
		tail->pNext->ch = _a;
		tail->pNext->pNext = nullptr;
		tail = tail->pNext;
	}
}

int main()
{
	int a = 0;
	std::cin >> a;

	for (size_t i = 0; i < 4; i++)
	{
		addNode((char)(a + i + 54));
	}

	Node* p = head;
	while (true)
	{
		std::cout << p->ch << " ";
		if (p->pNext == nullptr)
			break;

		p = p->pNext;
	}
}

//문제 3번
//네 종류의 카드가 있습니다. (A, B, C, D)
//몇 장을 뽑을지 입력받아주세요
//n장을 뽑으려고 하는데 중복 없이 뽑는 경우를 출력 해주세요.
//만약 2를 입력했다면
//AB
//AC
//AD
//BA
//BC
//...
//DC
//만약 3을 입력했다면
//ABC
//ABD
//ACB
//...
//DCB
//입력 예제
//2
//출력 결과
//AB
//AC
//AD
//BA
//BC
//BD
//CA
//CB
//CD
//DA
//DB
//DC

#include <iostream>

char arr[4] = { 'A','B','C','D' };
int visited[10] = {};
char path[10] = {};
void abc(int _level, int _a)
{
	if (_level == _a)
	{
		std::cout << path << "\n";
		return;
	}

	for (size_t i = 0; i < 4; i++)
	{
		if (visited[i] == 0)
		{
			visited[i] = 1;
			path[_level] = arr[i];
			abc(_level + 1, _a);
			path[_level] = '\0';
			visited[i] = 0;
		}
	}
}

int main()
{
	int a = 0;
	std::cin >> a;
	abc(0, a);
}

//문제 4번
//숫자 n을 입력 받고, n개만큼 노드를 만들고 연결 해주세요.
//들어가는 값은 순차적으로 A, B, C, D... / 1, 2, 3, 4...입니다.
//노드를 구성한 후
//대문자는 for문으로 출력하고
//숫자들은 while로 모두 출력 해 주세요.
//입력 예제
//4
//출력 결과
//A B C D
//1 2 3 4

#include <iostream>

struct Node
{
	int num;
	char ch;
	Node* pNext;
};

Node* head = nullptr;
Node* tail = nullptr;

void addNode(int _num, char _ch)
{
	if (head == nullptr)
	{
		head = new Node;
		head->num = _num;
		head->ch = _ch;
		head->pNext = nullptr;
		tail = head;
	}
	else
	{
		tail->pNext = new Node;
		tail->pNext->num = _num;
		tail->pNext->ch = _ch;
		tail->pNext->pNext = nullptr;
		tail = tail->pNext;
	}
}

int main()
{
	int a = 0;
	std::cin >> a;

	for (size_t i = 1; i <= a; i++)
	{
		addNode(i, i + 64);
	}

	for (Node* p = head; p != nullptr; p = p->pNext)
	{
		std::cout << p->ch << " ";
	}
	std::cout << "\n";

	Node* q = head;
	while (true)
	{
		std::cout << q->num << " ";
		if (q->pNext == nullptr)
			break;

		q = q->pNext;
	}
}

//문제 5번
//링크드리스트로 Queue를 만들어주세요.
//입력의 첫번째 숫자는 Queue에 넣을 문자 갯수(Enqueue)
//두번째 숫자는 Dequeue 할 갯수 입니다.
//그 다음 문자들은 Queue에 넣을 문자들 입니다.
//입력 예제
//3 1
//A B C
//출력 결과
//B C

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

//문제 6번

#include <iostream>

int main()
{

}

//문제 7번

#include <iostream>

int main()
{

}

//문제 8번

#include <iostream>

int main()
{

}

//문제 9번

#include <iostream>

int main()
{

}

//문제 10번

#include <iostream>

int main()
{

}

//문제 11번

#include <iostream>

int main()
{

}

//문제 12번

#include <iostream>

int main()
{

}

//문제 13번

#include <iostream>

int main()
{

}