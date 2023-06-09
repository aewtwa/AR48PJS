﻿//문제 1번
//input() 함수는
//숫자 1개를 입력받고 그 숫자를 return하는 함수입니다.
//main() 함수에서는
//input함수를 3번 호출하여 숫자 3개를 입력받아주세요.
//그리고 그 숫자 3개를 cals함수로 값을 보내주세요
//ex)
//a = input();
//b = input();
//c = input();
//cals() 함수에서는
//숫자 3개를 받고 그 합을 출력해주는 함수입니다
//ex) cals(a, b, c);
//[TIP]
//1. KFC 함수로 값을 보내는 방법
//- 함수 정의할 때
//void KFC(int x, int y)
//{
//    //...
//}
//- 함수 호출할 때
//ABC(3, 5); 숫자 3과 5를 ABC 함수로 보낸다.
//*이 예제는 값 2개 보냈습니다.호출할 때는 여러 값을 보낼 수 있습니다.
//* void KFC(int x, int y) 에서 "void"의 의미는 return 할 값이 없을 때 사용합니다
//2. KFC함수에서 값을 return 받는 방법
//- 함수 정의할 때
//int KFC()
//{
//    int x = 5;
//    return x;
//}
//- 함수 호출할 때
//int a = KFC(); KFC함수의 return값을 변수 a에 저장한다
//*int KFC() 에서 "int"의 의미는 숫자 형태의 값을 return 하겠다 라는 뜻입니다.
//* 값을 보낼때와 달리, 값을 되돌려줄때는 오직 값 1개만 return할 수 있습니다.
//3. KFC함수에서 값을 보내고, 결과를 받는 방법
//- 함수 정의할 때
//int KFC(int a, int b)
//{
//    return a + b;
//}
//- 함수 호출할 때
//int t = KFC(1, 2);  숫자 2개를 보내고, 숫자 1개를 return받는 코드
//입력 예시
//1 1 2
//출력 예시
//4

#include <iostream>

int input()
{
	int a;
	std::cin >> a;
	return a;
}

void cals(int _a, int _b, int _c)
{
	std::cout << _a + _b + _c;
}
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	a = input();
	b = input();
	c = input();
	cals(a, b, c);
}

//문제 2번
//[전역변수를 사용하지 말고 풀어주세요]
//다음과 같은 함수를 만들어주세요
//sum(int a, int b) 함수는 숫자 2개를 받고 그 합을 return 하는 함수입니다.
//comp(int a, int b) 함수는 숫자 2개를 받고 그 차를 return 하는 함수입니다.
//print(int t1, int t2) 함수는 숫자 2개를 받고 그 받은 숫자 2개를 출력하는 함수입니다.
//main함수에서는 숫자 2개를 입력 받으세요
//그리고 sum함수, comp함수를 호출해서 입력 받은 두 수의 합과 차를 구해주세요
//그리고 print함수에 구한 합과 차를 보내고, 그 결과를 출력 해 주세요
//입력 예시
//5 1
//출력 예시
//합 : 6
//차 : 4

#include <iostream>

int sum(int _a, int _b)
{
	return _a + _b;
}

int comp(int _a, int _b)
{
	if (_a - _b > 0)
	{
		return _a - _b;
	}
	else if (_a - _b < 0)
	{
		return _b - _a;
	}
}

void print(int _a, int _b)
{
	std::cout << "합:" << _a << "\n";
	std::cout << "차:" << _b;
}


int main()
{
	int a;
	std::cin >> a;
	int b;
	std::cin >> b;
	print(sum(a, b), comp(a, b));
}

//문제 3번
//이번 문제를 통해 포인터 개념을 한번 더 확실히 익혀봅니다.
//꼼꼼히 읽어보면서 아래 문제를 풀어보고, 스스로 포인터 연습도 해 보세요
//아래 그림과 같이 int형(int type) a와 char형 gd 변수를 만들고
//숫자1개, 문자1개를 입력 받아 각각의 변수 안에 넣어주세요
//아래는 숫자3과 문자 'A'를 입력받았을 때 그림입니다
//그리고
//int pointer형 변수 p를 선언하고 변수 a를 가르키도록 해 주세요
//char pointer형 변수 t를 선언하고 변수 gd를 가르키도록 해 주세요
//이제
//포인터 변수를 이용해서 가르키고 있는 곳의 값을 출력 해 주세요
//아래와 같이 출력하시면 됩니다
//cout << *p;
//cout << *t;
//[TIP] "가르킨다" 라는 의미(Teaching이 아닙니다 / Pointing 입니다)
//포인터 변수 에다가 다른 변수의 주소를 넣는 것을 "가르킨다" 라고 표현합니다.
//예로들어
//int x = 10;
//int* p;  integer pointer형 p를 선언
//p = &x;  p 에다가 x의 주소를 넣음
//변수 이름 앞에다가& (엠퍼센드)를 붙이면 변수의 메모리 주소값을 나타냅니다.
//이 주소값을 p라는 변수에다가 집어 넣은 것이죠
//그리고 이 동작을 한번에 처리할 수 도 있습니다.
//int* p = &x;   integer pointer형 p를 선언하고, x를 가르키게 한 코드
//[TIP] 포인터와 일반 변수의 차이
//포인터 변수나 일반 변수나 똑같은 변수입니다.어떤 값을 저장하는 변수입니다.
//int형 변수는 정수형 숫자값을 저장하고
//char형 변수는 문자값를 저장하고
//integer pointer형 변수는 int형 변수의 주소값을 저장하는 변수입니다
//포인터 변수는 일반 변수와 달리 특별한 기능을 가지고 있습니다.
//포인터가 어떤 변수를 가르키고 있을 때(변수의 주소를 저장하고 있을 때)
//포인터 앞에* 을 붙이면
//가르키고 있는 변수를 원격 조정이 가능해지죠
//예로 들자면
//int x = 10;
//int* p = &x; p는 x를 가르킨다
//*p = 10;   능력사용! p가 가르키고 있는 곳의 값에다가 10을 넣는다.
//(*p)++;  능력사용! p가 가르키고 있는 곳의 값에다가 1 더한다.
//cout << *p; 능력사용! p가 가르키고 있는 곳의 값을 출력한다.
//cout << x; 변수 x 출력
//Trace를 해보면서 연습해보세요
//입력 예시
//3 A
//출력 예시
//3 A

#include <iostream>

int main()
{
	int a;
	char gd;
	std::cin >> a;
	std::cin >> gd;
	int* p = &a;
	char* t = &gd;
	std::cout << *p;
	std::cout << *t;
}

//문제 4번
//문자 변수 a, b, c를 만들고 문자 3개를 입력 받으세요
//그리고 char pointer형 변수 3개를 만들고 각각 문자 변수들을 가르켜주세요. (pointing)
//pointer의 능력을 사용해서
//각 문자의 다음 알파벳을 출력 해 주세요
//[HINT] pointer 능력 사용해서 가르키고 있는 변수 값 원격으로 바꾸기
//int* p = &x;
//*p = 10;
//이렇게 하면 변수 x에 값이 10이 들어가게 됩니다
//[HINT2] 가르키는 곳에 ++ 하는 방법
//int a = 10;
//int* p = &a;
//(*a)++;
//주의: *a++; 하면 안됩니다. (*a)++; 이렇게 해야 합니다.
//* a++; 이것은* (a++); 이런 뜻이며, a 주소 값에 1을 더한다는 뜻입니다.
//입력 예시
//A B C
//출력 예시
//B C D

#include <iostream>

int main()
{
	char a;
	std::cin >> a;
	char b;
	std::cin >> b;
	char c;
	std::cin >> c;
	char* Pa = &a;
	char* Pb = &b;
	char* Pc = &c;
	(*Pa)++;
	(*Pb)++;
	(*Pc)++;
	std::cout << a;
	std::cout << b;
	std::cout << c;
}

//문제 5번
//int형 변수 a, b 에 숫자 2개를 입력 받으세요
//그리고 int pointer형 변수 p, t를 선언하고 각각 a, b를 가르켜주세요.(pointing)
//이제 변수 a와 b를 Swap하려고 합니다.
//* p와* t를 이용해서 두 값을 SWAP 하고 변수* p와* t를 출력 해 주세요
//[HINT]
//int temp;
//temp변수와* p, * t 를 가지고 SWAP을 할 수 있습니다
//입력 예시
//3 6
//출력 예시
//6 3

#include <iostream>

int main()
{
	int a;
	std::cin >> a;
	int b;
	std::cin >> b;
	int* p = &a;
	int* t = &b;
	int temp = 0;
	temp = *p;
	*p = *t;
	*t = temp;
	std::cout << a;
	std::cout << b;
}

//문제 6번
//3	4 1	3 2	7 3
//위 배열을 하드코딩 해 주세요
//그리고 숫자 하나를 입력받아주세요
//그 숫자가 존재하면 "발견" 출력
//존재하지 않으면 "미발견" 출력
//counting방식으로 풀지 말고, flag방식으로 문제를 풀어주세요
//[TIP] Counting VS Flag
//Counting방식은 내가 원하는 값이 몇개 있는지 세는 방식입니다
//Flag방식은 스위치 변수를 하나 두고, 원하는 값이 발견되면 스위치를 켜는 방식입니다.
//물론 Flag대신 Counting방식으로도 코딩할 수 있지만,
//몇 개인지 셀때는 Counting
//존재여부를 검사할때는 Flag
//가독성을 위해 Flag를 쓸 때와 Counting을 할 때를 구분해서 써 주세요
//입력 예시
//3
//출력 예시
//발견

#include <iostream>

int main()
{
	int arr[7] = { 3,4,1,3,2,7,3 };
	int a;
	std::cin >> a;
	int flag = 0;
	for (int i = 0; i < 7; i++)
	{
		if (arr[i] == a)
		{
			flag = 1;
		}
	}
	if (flag == 1)
	{
		std::cout << "발견";
	}
	else
	{
		std::cout << "미발견";
	}
}

//문제 7번
//7칸짜리 int형 배열을 만들어주세요.
//그리고 이 배열에 숫자 7개를 입력받아주세요
//예로들어 4 1 5 2 3 2 2 를 입력받았다고하면
//4	1 5	2 3	2 2
//이렇게 채워질 수 있습니다.
//이 상태에서 MAX값과 MIN값을 구해서 출력 해 주세요
//입력 예시
//4 1 5 2 3 2 2
//출력 예시
//MAX = 5
//MIN = 1

#include <iostream>

int main()
{
	int arr[7] = {};
	int MAX = 0;
	int MIN = 987654321;
	for (int i = 0; i < 7; i++)
	{
		std::cin >> arr[i];
		if (arr[i] > MAX)
		{
			MAX = arr[i];
		}
		if (arr[i] < MIN)
		{
			MIN = arr[i];
		}
	}
	std::cout << "MAX = " << MAX << "\n";
	std::cout << "MIN = " << MIN;
}

//문제 8번
//다음 문장을 배열에 하드코딩 해 주세요
//"StructPointer"
//그리고 문자 하나를 입력 받으세요
//그 문자가 만약 존재하면 "발견" 출력
//존재하지않으면 "미발견" 출력
//입력 예시
//P
//출력 예시
//발견

#include <iostream>

int main()
{
	char arr[13] = { 'S','t','r','u','c','t','P','o','i','n','t','e','r' };
	char a;
	std::cin >> a;
	int flag = 0;
	for (int i = 0; i < 13; i++)
	{
		if (arr[i] == a)
		{
			flag = 1;
		}
	}
	if (flag == 1)
	{
		std::cout << "발견";
	}
	else
	{
		std::cout << "미발견";
	}
}

//문제 9번
//for문을 돌려 문자 8개를 입력 받아주세요
//만약 d T e a A B f a 를 입력했다면 아래와 같이 배열이 만들어집니다
//d	T e	a A	B f	a
//그리고 big, small이라는 8칸 짜리 배열 2개를 더 만들어주세요
//만들어진 배열을 탐색하면서 대문자는 big 배열에 채워주세요
//만들어진 배열을 탐색하면서 소문자는 small 배열에 채워주세요
//big배열
//T	A B
//small 배열
//d	e a	f a
//big 배열과 small 배열을 출력 해 주시면 됩니다.
//입력 예시
//d T e a A B f a
//출력 예시
//big = TAB
//small = deafa

#include <iostream>

int main()
{
	char arr[8] = {};
	for (int i = 0; i < 8; i++)
	{
		std::cin >> arr[i];
	}
	char big[8] = {};
	int bigidx = 0;
	char small[8] = {};
	int smallidx = 0;
	for (int i = 0; i < 8; i++)
	{
		if ('A' <= arr[i] && arr[i] <= 'Z')
		{
			big[bigidx] = arr[i];
			bigidx++;
		}
		else if ('a' <= arr[i] && arr[i] <= 'z')
		{
			small[smallidx] = arr[i];
			smallidx++;
		}
	}
	std::cout << "big = ";
	for (int i = 0; i < 8; i++)
	{
		std::cout << big[i];
	}
	std::cout << "\n";
	std::cout << "small = ";
	for (int i = 0; i < 8; i++)
	{
		std::cout << small[i];
	}
}

//문제 10번
//전역배열 vect[2][5] 를 하드코딩 해주세요.
//3	2 6	2 4
//1	4 2	6 5
//그리고 아래 그림과 같이 코딩을 해 주세요.
//main에서는 KFC함수를 호출하고, 그 결과를 return 받습니다.
//return 받은 값이 1이라면 "값이 존재합니다" 를 출력
//return 받은 값이 0이라면 "값이 없습니다"를 출력
//[TIP] return 명령어에 대해서1
//return 명령어는 함수를 종료시키면서 호출했던 곳으로 돌아가는 명령어입니다
//void 함수에서는 return 명령어가 없어도 되지만, 일부러 넣는 경우들이 있습니다. (함수를 강제로 종료할 때)
//예로들어
//void KFC()
//{
//	cout << "#"; //실행 됨
//	return; //실행 됨
//	cout << "@"; //실행안되는 코드
//}
//여기서 KFC함수를 호출하면 #@가 뜨지않고, #만 뜨고 KFC함수가 바로 종료되게 됩니다.
//그리고 KFC 함수는 void로 시작하는 함수이기 때문에 호출 한 함수로 돌려줄 값이 없습니다.
//[TIP2] return 명령어에 대해서2
//return 명령어는 무조건 맨 뒤에 있어야 하는 것이 아닙니다.
//소스코드 중간 어디에서나 집어넣을 수 있고, 여러개 집어넣어도 됩니다.
//함수를 즉시 종료 시킬 때 사용합니다.
//int isCheck(int g)
//{
//	if (g == 1)
//	{
//		return 0;
//	}
//	cout << "#";
//	return 100;
//}
//이 소스코드는
//isCheck라는 함수에 숫자1을 보낼경우-- > return 0을 수행하고 바로 함수를 끝냅니다.
//isCheck라는 함수에 숫자5를 보낼경우-- > #을 출력하고, return 100을 수행하고 바로 함수를 끝냅니다.
//입력 예시
//2
//출력 예시
//값이 존재합니다

#include <iostream>

int vect[2][5] =
{
	{3,2,6,2,4},
	{1,4,2,6,5}
};

int KFC(int _a)
{
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (vect[i][j] == _a)
			{
				return 1;
			}
		}
	}
	return 0;
}

int main()
{
	int target;
	std::cin >> target;
	if (KFC(target) == 1)
	{
		std::cout << "값이 존재합니다.";
	}
	else if (KFC(target) == 0)
	{
		std::cout << "값이 없습니다.";
	}
}


//문제 11번
//아래와 같이 2차 배열을 하드 코딩 해 주세요
//1	3 6	2
//4	2 4	5
//6	3 7	3
//1	5 4	6
//숫자 1개를 입력 받아주세요
//입력받은 숫자보다 더 큰 값을 찾아서, 16칸 짜리 select 배열에 값을 채우는 문제입니다
//만약 숫자 2를 입력 받았다면 select 배열에는 아래와 같이 채워집니다
//3	6 4	4 5	6 3	7 3	5 4	6
//만약 숫자 4를 입력 받았다면 select 배열에는 아래와 같이 채워집니다
//6	5 6	7 5	6
//입력 예시
//4
//출력 예시
//6 5 6 7 5 6

#include <iostream>
int arr2d[4][4] =
{
	{1,3,6,2},
	{4,2,4,5},
	{6,3,7,3},
	{1,5,4,6}
};

int select[16] = {};
int selectidx = 0;

int input()
{
	int a;
	std::cin >> a;
	return a;
}

void biger(int _a)
{
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (arr2d[i][j] > _a)
			{
				select[selectidx] = arr2d[i][j];
				selectidx++;
			}
		}
	}
}

void output()
{
	for (int i = 0; i < 16; i++)
	{
		std::cout << select[i];
	}
}

int main()
{
	biger(input());
	output();
}

//문제 12번
//아래 문자 배열을 하드코딩 해 주세요
//D	F G	D A	Q
//그리고 문자 2개를 변수 a, b에 입력 받으세요
//만약 a ~b 사이에 있는 문자가 발견 되면(a <= 문자 <= b)
//"발견!!!" 출력
//그렇지 않으면 "미발견!!!" 을 출력 해 주세요
//ex) 예로들어서 C E를 입력받았다면
//C ~E 사이에 있는 문자 D가 배열에 존재하므로
//"발견!!!"을 출력하시면 됩니다
//* 모든 소스 코드는 지우고 처음부터 다시 작성 하는것 잊지 않으셨죠!?
//우리의 실력 향상을 위해 모든 소스코드는 항상 처음부터 짜야 합니다.
//이 습관을 기르는게 정말 중요해서, 반복적으로 강조를 하고 있습니다.
//(프로그래머의 악습관 : 코드 의존성 습관 제거)
//지금까지 모든 소스코드를 처음부터 작성하신 분은 잘 하고계신겁니다!
//만약 그동안 소스코드를 수정해서 숙제를 제출 하셨다면,
//지금부터라도 모든 소스 코드를 다 지우고 작성 해 주세요.
//입력 예시
//A C
//출력 예시
//발견!!!

#include <iostream>

int main()
{
	char arr[6] = { 'D','F','G','D','A','Q' };
	char a;
	std::cin >> a;
	char b;
	std::cin >> b;
	int flag = 0;
	for (int i = 0; i < 6; i++)
	{
		if (a <= arr[i] && arr[i] <= b)
		{
			flag = 1;
		}
	}
	if (flag == 1)
	{
		std::cout << "발견!!!";
	}
	else if (flag == 0)
	{
		std::cout << "미발견!!!";
	}
}

//문제 13번
//1	1 1
//1	2 1
//3	6 3
//위 배열을 전역배열로 하드코딩해 주세요(전역변수 사용금지)
//그리고 아래의 규칙에 따라, 입력 받은 숫자가 몇 개 있는지 찾아 출력하는 프로그램을 작성 해 주세요
//main함수에서는
//- 숫자 하나 입력
//- Count(x) 호출
//- 개수를 return받고 출력하기
//Count함수에서는
//- 전달받은 값이 3 x 3 배열 안에 몇 개 있는지 count
//- count한 값을 return 하기
//입력 예시
//1
//출력 예시
//5

#include <iostream>

int arr2d[3][3] =
{
	{1,1,1},
	{1,2,1},
	{3,6,3}
};

int count(int _a)
{
	int count = 0;

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (arr2d[i][j] == _a)
			{
				count++;
			}
		}
	}
	return count;
}

void output(int _a)
{
	std::cout << _a;
}

int main()
{
	int a;
	std::cin >> a;
	output(count(a));
}

//문제 14번
//A	1 1	1 5	A w	z
//위 배열을 하드코딩 해 주세요
//그리고 문자 하나를 입력받으세요
//입력받은 문자가 3개 이상 존재한다면 "THREE" 출력
//입력받은 문자가 2개 존재한다면 "TWO" 출력
//입력받은 문자가 1개 존재한다면 "ONE" 출력
//입력받은 문자가 없다면 "NOTHING" 출력
//입력 예시
//A
//출력 예시
//TWO

#include <iostream>

int main()
{
	char arr[8] = { 'A','1','1','1','5','A','w','z' };
	char a;
	std::cin >> a;
	int count = 0;
	for (int i = 0; i < 8; i++)
	{
		if (arr[i] == a)
		{
			count++;
		}
	}
	if (count >= 3)
	{
		std::cout << "THREE";
	}
	else if (count == 2)
	{
		std::cout << "TWO";
	}
	else if (count == 1)
	{
		std::cout << "ONE";
	}
	else if (count == 0)
	{
		std::cout << "NOTHING";
	}
}

//문제 15번
//2차배열을 하드코딩 해 주세요
//a	b a	c z
//c	t a	c d
//c	c c	c a
//그리고 문자 1개를 입력받아주세요
//입력받은 문자가
//3개 이상이면 "이야"
//5개 이상이면 "와우"
//7개 이상이면 "세상에"
//위 3가지 경우가 아니라면 "이런"를 출력 해 주세요
//를 출력 해 주세요
//입력 예시
//c
//출력 예시
//세상에

#include <iostream>

int main()
{
	char arr[3][5] =
	{
		{'a','b','a','c','z'},
		{'c','t','a','c','d'},
		{'c','c','c','c','a'}
	};
	char a;
	std::cin >> a;
	int count = 0;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (arr[i][j] == a)
			{
				count++;
			}
		}
	}
	if (count >= 7)
	{
		std::cout << "세상에";
	}
	else if (count >= 5)
	{
		std::cout << "와우";
	}
	else if (count >= 3)
	{
		std::cout << "이야";
	}
	else
	{
		std::cout << "이런";
	}
}

//문제 16번
//숫자 6개를 입력받아주세요
//만약 3 1 5 0 0 3 을 입력하였다면 아래와 같이 채워집니다
//3	1 5
//0	0 3
//입력 받은 값들을 출력하는데
//숫자 0은 '#'으로 바꾸어서 출력 해 주세요
//[HINT] 2중 for문을 돌면서 출력을 합니다
//만약 지금 출력할 값이 0 이 아니면 배열 값을 출력하고
//지금 출력할 값이 0이라면 #을 출력하면 됩니다
//입력 예시
//3 1 5 0 0 3
//출력 예시
//315
//##3

#include <iostream>

int main()
{
	int arr2d[2][3] = {};
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			std::cin >> arr2d[i][j];
		}
	}
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (arr2d[i][j] == 0)
			{
				std::cout << (char)('#');
			}
			else
			{
				std::cout << arr2d[i][j];
			}
		}
		std::cout << "\n";
	}
}

//문제 17번
//main함수에서 아래와 같이 배열 5칸을 선언 및 하드코딩 해 주세요
//3	5 1	2 7
//그리고 같은 사이즈의 배열을 하나 더 만들고, 숫자 5개를 이 배열에 입력 받아주세요
//만약 3 5 1 1 1 을 입력하였다면 아래와 같이 채우면 됩니다
//3	5 1	1 1
//이제 CompareGo함수로 배열을 모두 전달 해 주세요
//CompareGo 함수에서 전달받은 두개의 배열이 완전히 똑같다면 "두배열은완전같음" 출력
//다른 숫자가 하나라도 있다면 "두배열은같지않음" 출력
//[HINT] 두 배열이 완전히 같은지 다른지 알기 위해서는
//flag를 써서, 다른 글자가 존재 하는지를 찾으면 됩니다.
//다른 글자가 존재한다면 flag를 1 켜고 break
//입력 예시
//3 5 1 1 1
//출력 예시
//두배열은같지않음

#include <iostream>

void CompareGo(int _a[], int _b[])
{
	int flag = 0;
	for (int i = 0; i < 5; i++)
	{
		if (_a[i] != _b[i])
		{
			flag = 1;
			break;
		}
	}

	if (flag == 1)
	{
		std::cout << "두 배열은 같지 않음.";
	}
	else
	{
		std::cout << "두 배열은 완전 같음.";
	}
}

int main()
{
	int arr1[5] = { 3,5,1,2,7 };
	int arr2[5] = {};
	for (int i = 0; i < 5; i++)
	{
		std::cin >> arr2[i];
	}
	CompareGo(arr1, arr2);
}

//문제 18번
//a	b E
//E	2 W
//3	2 4
//위 2차배열을 하드코딩 해 주세요 그리고 출력을 해 주세요
//출력을 할 때 다음 규칙을 적용 시켜주세요
//- 대문자는 소문자로 바꾸어 출력
//- 소문자는 대문자로 바꾸어 출력
//- 숫자로 된 문자는 5를 더한 값으로 바꾸어 출력 해 주세요
//* 배열 값을 바꾸는 것이 아니라,
//배열 값을 그대로 둔 채, 문자를 바꾸어서 출력만 합니다.
//출력 예시
//A B e
//e 7 w
//8 7 9

#include <iostream>

int main()
{
	char arr[3][3] =
	{
		{'a','b','E'},
		{'E','2','W'},
		{'3','2','4'}
	};
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if ('a' <= arr[i][j] && arr[i][j] <= 'z')
			{
				std::cout << (char)(arr[i][j] - ('a' - 'A')) << " ";
			}
			else if ('A' <= arr[i][j] && arr[i][j] <= 'Z')
			{
				std::cout << (char)(arr[i][j] + ('a' - 'A')) << " ";
			}
			else if ('0' <= arr[i][j] && arr[i][j] <= '9')
			{
				std::cout << (char)(arr[i][j] + ('6' - '1')) << " ";
			}
		}
		std::cout << "\n";
	}
}

//문제 19번
//전역배열을 하나를 아래와 같이 만들어주세요
//이 문제는 전역변수를 쓰지않고 푸는 문제입니다(전역배열만 써주세요)
//a	b d
//e	w z
//q	v a
//Input함수에서 대문자 1개를 입력받아주세요
//Process함수에 입력받은 문자를 전달 해 주세요
//그리고 전달받은 대문자를 소문자로 바꾸고, 그 소문자가 배열에
//존재한다면 "존재", 없다면 "없음"을 출력 해 주세요
//ex) 만약 대문자 A를 입력받는다면
//소문자인 a가 배열에 존재하는지 찾으면 됩니다.
//입력 예시
//A
//출력 예시
//존재

#include <iostream>

char arr2d[3][3] =
{
	{'a','b','d'},
	{'e','w','z'},
	{'q','v','a'}
};

char input()
{
	char a;
	std::cin >> a;
	return a;
}

void process(char _a)
{
	int flag = 0;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if ((char)(_a + ('a' - 'A')) == arr2d[i][j])
			{
				flag = 1;
				break;
			}
		}
	}
	if (flag == 1)
	{
		std::cout << "존재";
	}
	else
	{
		std::cout << "없음";
	}
}

int main()
{
	process(input());
}

//문제 20번
//3	1 6
//7	8 4
//9	2 3
//위 2차배열을 하드코딩 해 주세요
//변수 a, b, c에 숫자 3개를 입력받아주세요
//입력받은 값을 활용해서(a, b) 좌표에 값 c를 넣어주세요
//그리고 MAX와 MIN값을 구한 후 그 합을 출력 해 주세요
//ex) 만약 0 2 0 을 입력했다면(0, 2) 좌표에 숫자 0을 먼저 넣어주세요
//그리고 전체 3x3 배열에서 MAX와 MIN값을 찾으면 됩니다.
//MAX = 9, MIN = 0 이 됩니다.따라서 출력은 9 + 0 = 9를 출력하면 됩니다.
//입력 예시
//0 2 0
//출력 예시
//9

#include <iostream>

int main()
{
	int arr2d[3][3] =
	{
		{3,1,6},
		{7,8,4},
		{9,2,3}
	};
	int a;
	std::cin >> a;
	int b;
	std::cin >> b;
	int c;
	std::cin >> c;
	int MAX = 0;
	int MIN = 987654321;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (a == i && b == j)
			{
				arr2d[i][j] = c;
			}
			if (arr2d[i][j] > MAX)
			{
				MAX = arr2d[i][j];
			}
			else if (arr2d[i][j] < MIN)
			{
				MIN = arr2d[i][j];
			}
		}
	}
	std::cout << MAX + MIN;
}

//문제 21번
//2 x 3 배열에 숫자 6개를 입력받아주세요
//맨 뒤에서 부터 순차적으로 입력받으시면 됩니다
//예로들어
//만약 7 2 3 4 5 6을 입력받았다면 아래와 같이 채워집니다
//6	5 4
//3	2 7
//그리고 6칸짜리 int형 배열을 하나 더 만들고,
//위 2차 배열값들을 6칸 짜리 int배열에 값을 옮겨주세요(2중for문 사용)
//6	5 4	3 2	7
//그리고[0]과[5]번 index의 값을 SWAP 해 주세요
//이렇게 만들어진 최종 1차원 배열 값을 출력 해 주세요
//입력 예시
//7 2 3 4 5 6
//출력 예시
//7 5 4 3 2 6

#include <iostream>

int main()
{
	int arr2d[2][3] = {};
	for (int i = 1; i >= 0; i--)
	{
		for (int j = 2; j >= 0; j--)
		{
			std::cin >> arr2d[i][j];
		}
	}
	int arr[6] = {};
	int arridx = 0;
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			arr[arridx] = arr2d[i][j];
			arridx++;
		}
	}
	int c = arr[0];
	arr[0] = arr[5];
	arr[5] = c;
	for (int i = 0; i < 6; i++)
	{
		std::cout << arr[i];
	}
}