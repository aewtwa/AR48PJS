//문제 1번
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

}

//문제 5번

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

//문제 15번

#include <iostream>

int main()
{

}

//문제 16번

#include <iostream>

int main()
{

}

//문제 17번

#include <iostream>

int main()
{

}

//문제 18번

#include <iostream>

int main()
{

}

//문제 19번

#include <iostream>

int main()
{

}

//문제 20번

#include <iostream>

int main()
{

}

//문제 21번

#include <iostream>

int main()
{

}