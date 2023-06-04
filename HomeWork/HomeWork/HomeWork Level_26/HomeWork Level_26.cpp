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
//숫자와 문자가 섞인 문장을 입력 받습니다.
//이때 문장 속에서 숫자는 하나만 존재합니다.(최대 15글자)
//입력 예제
//1999POW
//출력 결과
//2004

#include <iostream>

int main()
{

}

//문제 7번
//한 노드가 다음과 같은 구조체로 된 큐를 배열로 구현해 주세요.
//Node queue[10];
//이제 입력 개수에 따라 입력이 주어 집니다.
//이렇게 입력을 받았다면 큐에 아래와 같이 채워집니다.
//모두 채운 후, 모든 값을 pop 해주세요.
//이제 pop을 할때마다 나오는 값을 출력 해주세요.
//입력 예제
//4
//1 A
//2 B
//3 C
//4 D
//출력 결과
//1 A
//2 B
//3 C
//4 D

#include <iostream>

struct Node
{
	int x;
	char y;
};

template <typename T>
class Queue
{
public:
	Queue()
		:data{}
		, mFront(0)
		, mEnd(0)
	{

	}

	void push(T _Node)
	{
		data[mEnd++] = _Node;
	}

	T pop()
	{
		return data[mFront++];
	}
private:
	T data[256];
	int mFront;
	int mEnd;
};

int main()
{
	Node node[10] = {};
	Queue<Node> queue;
	int a = 0;
	std::cin >> a;
	for (int i = 0; i < a; i++)
	{
		node[i].x = i + 1;
		node[i].y = i + 65;
		queue.push(node[i]);
	}
	Node pop[10] = {};
	for (size_t i = 0; i < a; i++)
	{
		pop[i] = queue.pop();
		std::cout << pop[i].x << " " << pop[i].y << "\n";
	}
}

//문제 8번
//10칸짜리 큐를 만들어주세요.
//숫자 하나를 입력받고, Enqueue 3회 / Dequeue 3회 반복하는 소스코드를 작성 해 주세요.
//Dequeue할때마다 숫자를 출력하면 됩니다.
//만약 n이 5라면 아래와 같은 main 함수가 동작되도록 구현 하시면 됩니다.
//입력 예제
//5
//출력 결과
//123123123123123

#include <iostream>

class Queue
{
public:
	struct Node
	{
		int num;
		Node* pNext;
	};
	void Enqueue(int _a)
	{
		if (head == nullptr)
		{
			head = new Node;
			head->num = _a;
			head->pNext = nullptr;
			tail = head;
		}
		else
		{
			tail->pNext = new Node;
			tail->pNext->num = _a;
			tail->pNext->pNext = nullptr;
			tail = tail->pNext;
		}
	}

	void Dequeue()
	{
		std::cout << head->num;

		Node* pNode = nullptr;
		pNode = head;

		head = head->pNext;
		delete pNode;
		pNode = nullptr;
	}

private:
	Node* head = nullptr;
	Node* tail = nullptr;
};

int main()
{
	Queue queue;
	int a = 0;
	std::cin >> a;

	for (size_t i = 0; i < a; i++)
	{
		queue.Enqueue(1);
		queue.Enqueue(2);
		queue.Enqueue(3);
		queue.Dequeue();
		queue.Dequeue();
		queue.Dequeue();
	}
}

//문제 9번
//다음 2차배열을 하드코딩 해주세요.
//문자로 된 숫자1개 또는 문자 1개를 입력 받으세요.
//해당되는 한줄을 출력 하면 됩니다.
//입력 예제
//1
//출력 결과
//2211

#include <iostream>

char map[4][5] =
{
	"3514",
	"2211",
	"0123",
	"3131"
};

void output(char _ch)
{
	if ('0' <= _ch && _ch <= '9')
	{
		for (size_t i = 0; i < 4; i++)
		{
			std::cout << map[_ch - '0'][i];
		}
	}
	else
	{
		for (size_t i = 0; i < 4; i++)
		{
			std::cout << map[i][_ch - 'A'];
		}
	}

}

int main()
{
	char a = 0;
	std::cin >> a;

	output(a);
}

//문제 10번
//꺽쇠 < 와 >, 숫자로 이루어진 한 문장을 입력 받으세요.
//꺽쇠가 열리면('<') 이후에 꺽쇠가 닫혀야 합니다.('>')
//정상적으로 꺽쇠가 열리고 닫혔는지 판단하는 프로그램을 작성하세요.
//정상이면 "정상", 비정상이면 "비정상" 출력. (최대 20글자)
//ex) < 35 < 6 < 912 > > 10 > = > 정상
//ex) 56 < 7 >> 65 = > 비정상
//ex) >> 15 << = > 비정상
//ex) 612 < > 7 < > 91 = > 정상
//입력 예제
//<35 < 6 < 912 > > 10>
//출력 결과
//정상

#include <iostream>

char str[21] = {};

int isPair(char* _ch)
{
	int bucket[256] = {};
	for (size_t i = 0; i < 21; i++)
	{
		int target = _ch[i];
		bucket[_ch[i]]++;
		if (bucket[62] > bucket[60])
		{
			return 1;
		}
	}

	if (bucket[60] != bucket[62])
	{
		return 1;
	}
	return 0;
}

int main()
{
	std::cin >> str;

	if (isPair(str) == 1)
	{
		std::cout << "비정상";
	}
	else
	{
		std::cout << "정상";
	}
}

//문제 11번
//Text 한문장을 입력 받으세요.
//그리고 커서 위치를 입력 받으세요.
//예를 들어 ABCDEF와 커서위치 2를 입력 받았다면
//CMD는 세가지 입니다.
//L: Left Cursor
//R : Right Cursor
//D : Delete Cursor
//이제 CMD 4개를 입력받고 CMD에 따라 처리를 해주세요.
//만약 RRLD를 입력 받았다면
//오른쪽 2칸, 왼쪽 1칸 커서를 이동시키고, Delete를 한번 수행하면 되므로
//와 같은 상태가 됩니다.
//커서 위치는 3번 index 글자 앞에 있습니다.
//명령어를 수행하고 커서가 있는 위치를 출력 해주세요.
//입력 예제
//ABCDEF
//2
//RRLD
//출력 결과
//3

#include <iostream>

char Text[256] = {};

struct Node
{
	Node()
		:idx(0)
		, ch('\0')
		, pNext(nullptr)
		, pPrev(nullptr)
	{

	}
	int idx;
	char ch;
	Node* pNext;
	Node* pPrev;
};

Node* head = nullptr;
Node* tail = nullptr;
int idx = 0;

void addNode(char _ch)
{
	if (head == nullptr)
	{
		head = new Node;
		head->idx = idx;
		head->ch = _ch;
		tail = head;
		idx++;
	}
	else
	{
		Node* pNode = tail;
		tail->pNext = new Node;
		tail->pNext->idx = idx;
		tail->pNext->ch = _ch;
		tail = tail->pNext;
		tail->pPrev = pNode;
		idx++;
	}
}

void Left(int* _a)
{
	(*_a)--;
}
void Right(int* _a)
{
	(*_a)++;
}
void Delete(int* _a)
{
	Node* pNode = head;
	while (true)
	{
		if (pNode->idx == *_a)
		{
			pNode->pPrev->pNext = pNode->pNext;
			pNode = pNode->pNext;
			Node* p = pNode;
			delete p;
			p = nullptr;
			continu
		}
		pNode = pNode->pNext;
	}
}



int main()
{
	std::cin >> Text;

	for (size_t i = 0; i < 256; i++)
	{
		if (Text[i] == '\0')
			break;

		addNode(Text[i]);
	}

	int cursor = 0;
	std::cin >> cursor;

	char CMD[5] = {};
	std::cin >> CMD;

	for (size_t i = 0; i < 4; i++)
	{
		if (CMD[i] == 'L')
		{
			Left(&cursor);
		}
		else if (CMD[i] == 'R')
		{
			Right(&cursor);
		}
		else if (CMD[i] == 'D')
		{
			Delete(&cursor);
		}
	}
}

//문제 12번
//큐를 이용해서 풀어보세요.
//척척박사님은 B, I, A, H 슈퍼영웅들 중 출동할 사람을 순서대로 뽑아야 합니다.
//척척박사님은 항상 영웅B를 시작으로 다섯번째 사람을 선택합니다.
//반복적으로 다섯번째 사람을 선택했을 때, 출동하는 영웅들의 순서를 출력 하세요.
//출동순서 결과 : B A H I
//출력 결과
//B A H I

#include <iostream>

class Queue
{
public:
	struct Node
	{
		Node()
			:ch('\0')
			, pNext(nullptr)
		{

		}
		char ch;
		Node* pNext;
	};
	void Enqueue(char _ch)
	{

	}

	void Dequeue()
	{

	}
private:
	Node* head = nullptr;
	Node* tail = nullptr;
};

int main()
{
	char arr[4] = { 'B','I','A','H' };
	Queue queue;
	for (size_t i = 0; i < 4; i++)
	{
		for (size_t j = 0; j < 4; j++)
		{

		}

	}
}

//문제 13번
//A, B, C 배열에 있는 정예멤버를 선정하여 후보배열에 넣으려 합니다.(A, B, C 배열은 하드코딩)
//- A배열에서 MAX 3명 선출.(가장 큰수 3개)
//- B배열에서 MIN 3명 선출.(가장 작은수 3개)
//- C배열에서 MIN 2명, MAX 1명 선출.(가장 작은수 2개, 가장 큰 수 1개)
//출력 결과
//7 6 4
//1 1 2
//1 2 9

#include <iostream>

int main()
{

}