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

struct Node
{
	int num;
	Node* pNext;
};
Node* head = nullptr;
Node* tail = nullptr;
void addNode(int _num)
{
	if (head == nullptr)
	{
		head = new Node;
		head->num = _num;
		head->pNext = nullptr;
		tail = head;
	}
	else
	{
		tail->pNext = new Node;
		tail->pNext->num = _num;
		tail->pNext->pNext = nullptr;
		tail = tail->pNext;
	}
}

int main()
{
	int arr[4] = { 3,5,4,2 };

	for (size_t i = 0; i < 4; i++)
	{
		addNode(arr[i]);
	}

	Node* p = head;
	while (true)
	{
		std::cout << p->num;
		if (p->pNext == nullptr)
			break;

		p = p->pNext;
	}
}

//문제 6번
//총 5개의 문자를 입력받습니다.
//new 또는 malloc을 활용해, 입력받은 문자들을 링크드리스트에 저장 해 주세요.
//만약 Q T P K Q 를 입력받았다면 아래와 같이 링크드리스트가 만들어집니다.
//그리고 head pointer를 이용하여 가장 마지막 노드의 값을 출력하세요.
//입력 예제
//Q T P K Q
//출력 결과
//Q

#include <iostream>

struct Node
{
	char ch;
	Node* pNext;
};

Node* head = nullptr;
Node* tail = nullptr;

void addNode(char _ch)
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

int main()
{
	char arr[6] = {};
	std::cin >> arr;
	for (size_t i = 0; i < 5; i++)
	{
		addNode(arr[i]);
	}
	std::cout << head->pNext->pNext->pNext->pNext->ch;
}

//문제 7번
//아침드라마의 재미는 연인들의 관계입니다.
//화살표는 사랑하는 사람을 나타낸 표식입니다.
//아래와 같은 구성으로 관계가 되어 있을때 링크드리스트로 구현해주세요.
//이제 head를 이용해서 son의 Love1과 Love2가 누구인지 출력 해주세요

#include <iostream>

struct Node
{
	char* Name;
	Node* Love1;
	Node* Love2;
};

char Namearr[5][256] =
{
   "boss",
   "wife",
   "son",
   "girlfriend",
   "boyfriend"
};

Node* head = nullptr;
Node* boss = new Node();
Node* wife = new Node();
Node* son = new Node();
Node* girlfriend = new Node();
Node* boyfriend = new Node();

Node* FindSon(Node* _Node)
{
	if (head == nullptr)
	{
		head = boss;
	}
	Node* p = head;
	while (true)
	{
		if (p->Love1 == son)
			break;
		if (p->Love2 == son)
			break;

		p = p->Love1;
	}
}

int main()
{
	boss->Name = Namearr[0];
	boss->Love1 = wife;
	boss->Love2 = son;
	wife->Name = Namearr[1];
	wife->Love1 = boss;
	wife->Love2 = son;
	son->Name = Namearr[2];
	son->Love1 = girlfriend;
	son->Love2 = boyfriend;
	girlfriend->Name = Namearr[3];
	girlfriend->Love1 = son;
	girlfriend->Love2 = boyfriend;
	boyfriend->Name = Namearr[4];
	boyfriend->Love1 = girlfriend;
	boyfriend->Love2 = nullptr;
	FindSon(head);
}

//문제 8번
//숫자 하나만 입력 받으세요. (int 변수에다가 숫자 하나 입력받으세요)
//6자리 숫자만 입력할 수 있습니다.
//두 번째 자리 숫자와 네 번째 자리 숫자를 추출하고 조합하세요
//그리고 만들어진 두 자리 숫자에 5를 더한 값을 출력 해주세요.
//입력 예제
//354129
//출력 결과
//47

#include <iostream>

int main()
{
	int a = 0;
	std::cin >> a;

	int b = (a % 10000) / 1000;
	int c = (a % 100) / 10;
	std::cout << b * 10 + c + 5;
}

//문제 9번
//4 x 4 배열을 입력받아주세요. #은 빈칸을 의미합니다.
//각 세로줄마다 몇개의 문자가 있는지 출력 하세요.
//만약 아래와 같이 입력받았다면,
//#AFG
//B##E
//###D
//#E##
//입력 예제
//#AFG
//B##E
//###D
//#E##
//출력 결과
//1 2 1 3

#include <iostream>

int main()
{
	char arr[4][5] = {};
	int count = 0;
	int countarr[4] = {};
	for (size_t i = 0; i < 4; i++)
	{
		std::cin >> arr[i];
	}
	for (size_t i = 0; i < 4; i++)
	{
		for (size_t j = 0; j < 4; j++)
		{
			if ('A' <= arr[j][i] && arr[j][i] <= 'Z')
			{
				count++;
			}
			countarr[i] = count;
		}
		count = 0;
	}
	for (size_t i = 0; i < 4; i++)
	{
		std::cout << countarr[i] << " ";
	}
}


//문제 10번
//B와 F로 된 문장을 입력 받고 짝이 맞는지 알려주는 프로그램을 작성해주세요.
//(최대 글자수는 10글자)
//B는 Begin을 뜻하고(시작)  F는 Finish를 뜻합니다.(종료)
//그리고 B와 F는 서로 짝이 맞아야 합니다.
//아래 내용을 참고하세요.
//BBFF인 경우는 짝이 맞습니다
//시작이 2번 되었으니 끝 신호가
//2번 와야 하기 때문입니다
//짝이 맞으면 "짝이맞음" 출력
//안맞으면 "짝이안맞음" 출력
//입력 예제
//BFBFBF
//출력 결과
//짝이맞음

#include <iostream>

char str[11] = {};

int isPair()
{
	int bucket[256] = {};
	for (int i = 0; i < 10; i++)
	{
		int target = str[i];
		bucket[target]++;
		if (bucket[70] > bucket[66])
		{
			return 1;
		}
	}
	if (bucket[66] != bucket[70])
	{
		return 1;
	}
	return 0;
}

int main()
{
	std::cin >> str;
	if (isPair() == 1)
	{
		std::cout << "짝이 안 맞음";
	}
	else
	{
		std::cout << "짝이 맞음";
	}
}

//문제 11번
//아래 그림과 같이 3 x 3의 네모블럭이 있습니다.하드코딩 하세요.
//_ 5 4
//3 _ _
//_ _ 1
//그리고 숫자 하나를 입력 받으세요.
//이 입력 숫자는 블럭을 오른쪽으로 굴릴 횟수 입니다.
//입력한 숫자만큼 오른쪽으로 굴려 숫자 위치가 변경된 상태를 출력 해주세요.
//* 빈칸은 언더바('_')로 바꾸어서 출력 해 주세요
//입력 예제
//3
//출력 결과
//4_1
//5__
//_3_

#include <iostream>

char arr[3][4] =
{
	"_54",
	"3__",
	"__1"
};

void spin()
{
	int a = arr[0][0];
	arr[0][0] = arr[2][0];
	arr[2][0] = arr[2][2];
	arr[2][2] = arr[0][2];
	arr[0][2] = a;

	int b = arr[0][1];
	arr[0][1] = arr[1][0];
	arr[1][0] = arr[2][1];
	arr[2][1] = arr[1][2];
	arr[1][2] = b;
}

int main()
{
	int a = 0;
	std::cin >> a;
	for (size_t i = 0; i < a; i++)
	{
		spin();
	}
	for (size_t i = 0; i < 3; i++)
	{
		std::cout << arr[i] << "\n";
	}
}

//문제 12번
//2진수형태의 한 문장을 입력 받으세요.(15글자)
//그리고 5자리씩 끊어서
//배열 3개에 넣고 출력 해주세요.
//입력: 011011010101101 (문자열로 입력)
//출력 : 01101
//10101
//01101
//입력 예제
//011011010101101
//출력 결과
//01101
//10101
//01101

#include <iostream>

int main()
{
	char arr[16] = {};
	std::cin >> arr;
	char A[5] = {};
	char B[5] = {};
	char C[5] = {};
	for (size_t i = 0; i < 5; i++)
	{
		A[i] = arr[i];
		std::cout << A[i];
	}
	std::cout << "\n";
	for (size_t i = 5; i < 10; i++)
	{
		B[i - 5] = arr[i];
		std::cout << B[i - 5];
	}
	std::cout << "\n";
	for (size_t i = 10; i < 15; i++)
	{
		C[i - 10] = arr[i];
		std::cout << C[i - 10];
	}
}

//문제 13번
//6개의 숫자와 m과 x로 된 한 문장을 입력 받아주세요.
//m은 min값을 의미하고, x는 max값을 의마합니다.
//Command[0]부터~[5]까지 순서대로 탐색하면서
//m이면 min값을, x면 max값을 Number배열에서 찾아 출력 하세요.
//* Number에 같은 숫자는 입력되지 않습니다.
//* 한번 출력한 숫자는 다시 출력하지 않습니다.
//입력 예제
//3 7 4 0 9 6
//m x m m x x
//출력 결과
//093476

#include <iostream>

int number[6] = {};

int main()
{
	for (size_t i = 0; i < 6; i++)
	{
		std::cin >> number[i];
	}

	char command[7] = {};
	std::cin >> command;

	int minbucket[6] = {};
	int maxbucket[6] = {};

	for (int i = 0; i < 6; i++)
	{
		if (command[i] == 'm')
		{

		}
		else
		{

		}
	}
}

//문제 14번
//주사위 n개로 나올 수 있는 눈금을 모두 출력 해주세요.
//입력 예제
//2
//출력 결과
//11
//12
//13
//14
//15
//16
//21
//22
//23
//24
//25
//26
//31
//32
//33
//34
//35
//36
//41
//42
//43
//44
//45
//46
//51
//52
//53
//54
//55
//56
//61
//62
//63
//64
//65
//66

#include <iostream>

char dicenum[6] = { '1','2','3','4','5','6' };
char path[6] = {};
void dice(int _level, int _a)
{
	if (_level == _a)
	{
		std::cout << path << "\n";
		return;
	}
	for (size_t i = 0; i < 6; i++)
	{
		path[_level] = dicenum[i];
		dice(_level + 1, _a);
		path[_level] = 0;
	}
}

int main()
{
	int n = 0;
	std::cin >> n;
	dice(0, n);
}
