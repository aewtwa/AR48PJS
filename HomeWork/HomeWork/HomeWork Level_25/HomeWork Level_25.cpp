//문제 1번
//BBQ구조체를 만들어주세요.
//그리고 new연산자 또는 malloc 함수를 이용하여 힙에 변수를 만들어 주세요.
//그리고 숫자 2개를 이곳에 입력 받고 5를 더한 값을 출력 해주세요.
//입력 예제
//1 4
//출력 결과
//6 9

#include <iostream>

struct BBQ
{
	int a = 0;
	int b = 0;
};

int main()
{
	BBQ* ABC = new BBQ;
	std::cin >> ABC->a;
	std::cin >> ABC->b;
	std::cout << ABC->a + 5 << " " << ABC->b + 5;
}

//문제 2번
//new (or malloc)을 이용하여 char 변수 3개를 만들어주세요.
//그리고 문자 3개를 이 변수에 입력 받고,
//모두 대문자 인지 아닌지 구분하는 프로그램을 작성해주세요.
//모두 대문자이면 "모두대문자"
//소문자가 하나라도 있으면 "소문자있음" 이라고 출력하세요.
//입력 예제
//A K T
//출력 결과
//모두대문자

#include <iostream>

int main()
{
	char* a = new char;
	char* b = new char;
	char* c = new char;
	std::cin >> a;
	std::cin >> b;
	std::cin >> c;
	if ('A' <= *a && *a <= 'Z' && 'A' <= *b && *b <= 'Z' && 'A' <= *c && *c <= 'Z')
	{
		std::cout << "모두 대문자";
	}
	else
	{
		std::cout << "소문자 있음";
	}
}

//문제 3번
//new 또는 malloc 을 이용해서 아래의 그림처럼 연결 해주세요
//(입력 및 출력 값은 없습니다)
//HINT
//① head 포인터가  필요합니다.
//② head->left = new or malloc()
//head->right = new or malloc()
//head->right->left = new or malloc()

#include <iostream>

struct Node
{
	int num = 0;
	Node* pleft;
	Node* pright;
};

int main()
{
	Node* head = nullptr;
	Node num1 = {};
	head = &num1;
	head->num = 3;
	head->pleft = new Node;
	head->pleft->num = 7;
	head->pleft->pleft = nullptr;
	head->pleft->pright = nullptr;
	head->pright = new Node;
	head->pright->num = 6;
	head->pright->pleft = new Node;
	head->pright->pright = nullptr;
	head->pright->pleft->num = 2;
	head->pright->pleft->pleft = nullptr;
	head->pright->pleft->pright = nullptr;
}

//문제 4번
//다음 그림과 같이 노드를 만들어주세요.
//이제 한 문장을 입력받아주세요.
//H는 Head가 가르키는 값을 출력하라는 의미이고,
//HR은 Head->Right 값을 출력하라는 의미입니다.
//또 만약
//HLL을 입력받는다면 Head->Left->Left의 값을 출력하고
//HRR을 입력받는다면 Head->Right->Right 값을 출력하라는 의미입니다.
//H / HR / HL / HLL / HLR에 대해 적합한 값을 출력하는 프로그램을 작성 해 주세요.
//입력 예제
//HLR
//출력 결과
//E

#include <iostream>

struct Node
{
	char ch;
	Node* left;
	Node* right;
};

int main()
{
	Node* Head = nullptr;
	Node Nod = {};
	Head = &Nod;
	Head->ch = 'A';
	Head->left = new Node;
	Head->left->ch = 'B';
	Head->right = new Node;
	Head->right->ch = 'C';
	Head->left->left = new Node;
	Head->left->left->ch = 'D';
	Head->left->right = new Node;
	Head->left->right->ch = 'E';
	char str[256] = {};
	std::cin >> str;
}

//문제 5번
//new / malloc을 이용해서 위와같은 노드를 구성해주세요.
//이제 while문을 이용해서 처음부터 끝까지 출력 해주세요.
//(입력은 없습니다)
//출력 결과
//3 5 4 2

#include <iostream>

int main()
{

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

//문제 14번

#include <iostream>

int main()
{

}
