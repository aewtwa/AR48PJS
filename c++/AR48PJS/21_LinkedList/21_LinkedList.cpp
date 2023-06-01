// 21_LinkedList.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
//#include <list>

// 자료구조란?
// 데이터(자료)를 저장하는 방법
// 내가 만들 기능(프로그램)에 적합한 자료구조를 사용하면 된다.
// 대표적인 자료구조 예시
// 배열(DAT), 링크드 리스트(리스트), 큐, 스택, 그래프, 트리


// 링크드 리스트
// 중간에 데이터가 삭제 또는 삽입이
// 자주 일어날떄 링크드리스트를 활용하면
// 속도에서 이점이 생긴다.

// 노드의 개념
// 자료구조에서 자료를 저장하는 최소 단위
// 배열에서 노드는 각 칸을 의미한다.
// 링크드 리스트에서 노드는 각 데이터가 하나들어있는 노드를
// 의미한다.

// 배열 VS 링크드 리스트
// 배열은 실행도중에 노드수를 늘리수 없다.
// 링크드리스트는 실행 도중에 노드를 계속 추가할수 있다.



struct Node
{
	char ch;
	Node* pNext;
	//Node* prev;
	Node()
	{

	}
};


Node* head = nullptr;
Node* tail = nullptr;

void push_front(char data)
{
	Node* temp = new Node();
	temp->ch = data;
	temp->pNext = head;

	head = temp;
}
void push_back(char data)
{
	if (head == nullptr)
	{
		head = new Node();
		//(*head).ch = data;
		head->ch = data;
		head->pNext = nullptr;

		tail = head;
	}
	else
	{

		// 반복문 돌면서 노드 추가하는 방식
		//Node* p = head;
		//for (; p->pNext != nullptr
		//	; p = p->pNext)
		//{
		//}

		//Node* p = head;
		//while (true)
		//{
		//	if (p->pNext == nullptr)
		//		break;

		//	p = p->pNext;
		//}

		//p->pNext = new Node();
		//p->pNext->ch = data;
		//p->pNext->pNext = nullptr;

		// tail을 이용한 노드추가
		tail->pNext = new Node();
		tail->pNext->ch = data;
		tail->pNext->pNext = nullptr;
		tail = tail->pNext;

		//int* p = new int();
		//int* p = new int;
	}
}

int main()
{
	push_back('C');
	push_back('A');
	push_back('D');
	push_front('F');
	//Node n1;
	//Node n2;
	//Node n3;

	//head = &n1;

	//n1.ch = 'H';
	//n1.pNext = &n2;
	//
	////(*n1.pNext).ch = 'e';
	//
	//n2.ch = 'e';
	//n2.pNext = &n3;

	//n3.ch = 'l';
	//n3.pNext = nullptr;

	// 중간 데이터 삭제하는 코드
	//n1.pNext = &n3;

	// 화살표로 역참조 연산을 간단하게 사용할수
	// 있다.
	//std::cout << (*head).ch;
	//std::cout << head->ch;

	// -> 과 . 덜 헷갈리는 방법
	// 만약 구조체를 가리키는 포인터라면
	// 고미없이 화살표를 쓰면된다.
	//std::cout << head->ch;

	// 구조체 변수 자체라면
	// 고민없이 .을쓰면 된다.
	//Node noode;
	//noode.ch = 'A';

	//n3.pNext = new Node();
	//n3.pNext->ch = 'D';
	//n3.pNext->pNext = nullptr;

	return 0;
}

