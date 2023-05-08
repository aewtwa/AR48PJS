//문제 1번
//문자 1개를 입력 받으세요
//그리고 입력받은 문자를 3회 출력하세요
//입력 예시
//a
//출력 예시
//aaa

#include <iostream>

int main()
{
	char ch;
	std::cin >> ch;
	int i;
	for (i = 0; i < 3; i++)
	{
		std::cout << ch;
	}
}

//문제 2번
//정수 4개를 저장할 수 있는 배열을 만들고,
//cin으로 숫자 4개를 배열에 입력 받아주세요.
//그리고 for문을 돌려 전체 합을 구해서 출력 해 주세요.
//ex) 1 1 1 2 를 입력받았으면
//5를 출력하면 됩니다.
//1 + 1 + 1 + 2 = 5
//입력 예시
//1 2 3 4
//출력 예시
//10

#include <iostream>

int main()
{
	int arr[4] = {};
	int i;
	int sum = 0;
	for (i = 0; i < 4; i++)
	{
		std::cin >> arr[i];
		sum = sum + arr[i];
	}
	std::cout << sum;
}

//문제 3번
//3칸짜리 문자 배열을 만들고, 각 칸에 문자 'm' 'i', 'n'를 하드코딩 해 주세요.
//그리고 숫자 하나를 입력받고, 그 index에 해당하는 글자를 출력 해 주세요.
//ex) 0을 입력하면
//출력 : m
//[TIP]
//문자를 하드코딩하는 방법1
//char arr[3];
//arr[0] = 'm';
//arr[1] = 'i';
//arr[2] = 'n';
//문자를 하드코딩 하는 방법2
//char arr[3] = { 'm', 'i', 'n' };
//입력 예시
//1
//출력 예시
//i

#include <iostream>

int main()
{
	char ch[3] = { 'm','i','n' };
	int a;
	std::cin >> a;
	std::cout << ch[a];
}

//문제 4번
//일단 함수 2개를 만들어주세요.
//- KFC() : "KFC입니다" 출력하는 함수
//- MC() : "MC입니다" 출력하는 함수
//그리고 숫자 하나를 입력받아주세요.
//입력받은 숫자가 1이라면 KFC 함수를 호출하고
//입력받은 숫자가 2라면 MC 함수를 호출 해 주세요.
//입력 예시
//1
//출력 예시
//KFC입니다

#include <iostream>

void KFC()
{
	std::cout << "KFC입니다.";
}

void MC()
{
	std::cout << "MC입니다.";
}

int main()
{
	int a;
	std::cin >> a;
	if (a == 1)
	{
		KFC();
	}
	if (a == 2)
	{
		MC();
	}
}

//문제 5번
//LOT이라는 함수를 만들어주세요
//LOT() : 1~5까지 출력하는 함수
//숫자를 하나 입력받고, 그 숫자 횟수만큼 LOT 함수를 호출 해 주세요.
//ex) 3을 입력했으면 LOT 함수가 3번 호출되니까
//12345
//12345
//12345
//이렇게 출력되면 됩니다.
//입력 예시
//2
//출력 예시
//12345
//12345

#include <iostream>

void LOT()
{
	std::cout << "12345\n";
}

int main()
{
	int a;
	std::cin >> a;
	int i;
	for (i = 0; i < a; i++)
	{
		LOT();
	}
}

//문제 6번
//[TIP] 다음 두 용어를 익인 후, 아래 문제를 풀어주세요
//함수를 호출(Call)하다 - 만들어져 있는 함수를 부르는 것을 의미
//ex) KFC();  main함수에서 KFC함수를 호출한다.
//함수를 정의하다 - 함수를 만드는 것을 뜻함
//ex) void KFC() { ... }  KFC함수를 정의하다.
//KFC, MC함수를 정의하세요
//KFC함수 : "#"을 10회 출력
//MC함수 : "@"을 10회 출력
//main함수에서 두 함수를 각각 한번씩 호출하세요
//출력 예시
//##########
//@@@@@@@@@@

#include <iostream>

void KFC()
{
	std::cout << "##########";
}

void MC()
{
	std::cout << "@@@@@@@@@@";
}

int main()
{
	KFC();
	std::cout << "\n";
	MC();
}

//문제 7번
//6칸짜리 arr배열을 만들어주세요.
//arr[0]에서 arr[2]까지 숫자를 입력 받아 배열에 값을 채워주세요.
//그 다음 숫자 1개를 더 입력 받고, arr[3]에서 arr[5]까지 입력받은 값부터
//1씩 증가한 값으로 채워주세요.
//ex)
//[입력]
//3 2 5
//4
//3 2 5 4 5 6
//[출력]
//3 2 5 4 5 6
//입력 예시
//3 2 5
//4
//출력 예시
//3 2 5 4 5 6

#include <iostream>

int main()
{
	int arr[6] = {};
	int a;
	std::cin >> a;
	arr[0] = a;
	int b;
	std::cin >> b;
	arr[1] = b;
	int c;
	std::cin >> c;
	arr[2] = c;
	int d;
	std::cin >> d;
	int i;
	for (i = 3; i < 6; i++)
	{
		arr[i] = d;
		d++;
	}
	int o;
	for (o = 0; o < 6; o++)
	{
		std::cout << arr[o] << " ";
	}
}

//문제 8번
//먼저 두 함수를 정의 해 주세요.
//- KFC함수 : 숫자 1개를 입력받는 함수
//- BBQ함수 : 입력받은 숫자가 5보다 크면 "만세", 그렇지않으면 "다시" 를 출력하는 함수
//main함수에서 KFC함수와 BBQ함수를 각각 호출 하는 프로그램을 작성 해 주세요.
//TIP : 전역변수를 사용하세요
//입력 예시
//6
//출력 예시
//만세

#include <iostream>

int a;
void KFC()
{
	std::cin >> a;
}

void BBQ()
{
	if (a > 5)
	{
		std::cout << "만세";
	}
	else
	{
		std::cout << "다시";
	}
}

int main()
{
	KFC();
	BBQ();
}

//문제 9번
//아래의 전역 배열을 하드코딩 해 주세요
//A	B C
//KFC함수 에서는 for	문을 돌려 전역배열에 있는 문자를 출력합니다.
//main함수에서 숫자하나를 입력받고, 입력받은 숫자 횟수만큼 KFC함수를 호출해 주세요.
//ex) 3을 입력받으면 KFC함수를 3번 호출하니까,
//ABC
//ABC
//ABC
//입력 예시
//2
//출력 예시
//ABC
//ABC

#include <iostream>

char ch[3] = { 'A','B','C' };

void KFC()
{
	int o;
	for (o = 0; o < 3; o++)
	{
		std::cout << ch[o];
	}
	std::cout << "\n";
}

int main()
{
	int a;
	std::cin >> a;
	int i;
	for (i = 0; i < a; i++)
	{
		KFC();
	}
}

//문제 10번
//먼저 두 함수를 정의 해 주세요.
//- input함수 : 숫자 4개를 배열에 입력받아주세요(전역배열 사용)
//- output함수 : For문을 돌려 숫자 4개를 거꾸로 출력 해 주세요.
//main함수에서는 input함수와 output함수를 각각 한번씩 호출 해 주세요
//ex) 만약 1 2 3 4를 입력하였으면, output함수에서 거꾸로 출력되니까
//4 3 2 1 이 출력되면 됩니다.
//입력 예시
//2 5 8 0
//출력 예시
//0852

#include <iostream>

int arr[4] = {};
void input()
{
	int i;
	for (i = 0; i < 4; i++)
	{
		std::cin >> arr[i];
	}
}

void output()
{
	int o;
	for (o = 3; o >= 0; o--)
	{
		std::cout << arr[o];
	}
}

int main()
{
	input();
	output();
}

//문제 11번
//main함수에서 숫자 1개를 입력받으세요
//그리고 입력받은 숫자에서 부터 1씩 증가시킨 숫자 6개를 배열에 채워주세요
//만약 3을 입력받았으면 배열에 이렇게 채우시면 됩니다.
//3	4 5	6 7	8
//그리고 PrintAll() 함수를 호출하여
//배열에 있는 값들을 모두 출력 해 주세요.
//(PrintAll이라는 함수를 정의 해 주셔야 합니다)
//입력 예시
//3
//출력 예시
//3
//4
//5
//6
//7
//8

#include <iostream>

int arr[6] = {};

void PrintAll()
{
	int o;
	for (o = 0; o < 6; o++)
	{
		std::cout << arr[o];
	}
}

int main()
{
	int a;
	std::cin >> a;
	int i;
	for (i = 0; i < 6; i++)
	{
		arr[i] = a;
		a++;
	}
	PrintAll();
}

//문제 12번
//함수 2개를 정의 해 주세요.
//- QTR함수 : "QTR100%" 출력
//- BBQ함수 : "BBQ100%" 출력
//3칸짜리 배열을 만들고, 숫자 3개를 입력 받아 배열에 값을 채워주세요.
//그리고 for문을 돌려 전체 sum을 구해주세요.
//sum이 10보다 같거나 크면 QTR 함수 호출
//그렇지 않으면 BBQ 함수를 호출 해 주세요.
//ex) 만약 숫자 1 2 3을 입력받으면, sum = 6 이므로
//BBQ 함수가 호출되어 BBQ100 % 를 출력하면 됩니다.

#include <iostream>

void QTR()
{
	std::cout << "QTR100%";
}

void BBQ()
{
	std::cout << "BBQ100%";
}

int main()
{
	int arr[3] = {};
	int sum = 0;
	int i;
	for (i = 0; i < 3; i++)
	{
		std::cin >> arr[i];
		sum = sum + arr[i];
	}
	if (sum >= 10)
	{
	QTR();
	}
	else 
	{
	BBQ();
	}
}

//문제 13번
//11칸의 긴 배열이 있습니다.
//아래와 같이 하드코딩 해주세요.
//3 4 1 5 8 1 7 7 3 6 9
//이제 숫자 1개를 입력받고,
//입력 받은 숫자만큼 배열을 건너띄어 값을 출력 해주세요.
//ex1)
//입력: 2
//출력 : 3 1 8 7 3 9
//ex2)
//입력: 4
//출력 : 3 8 3
//[힌트]
//for (x = 0; x < 11; x += input)
//입력 예시
//2
//출력 예시
//3 1 8 7 3 9

#include <iostream>

void input()
{
	
}

int main()
{
	int arr[11] = { 3,4,1,5,8,1,7,7,3,6,9 };
	int a;
	std::cin >> a;
	int i;
	for (i = 0; i < 11;i += input())
	{
		std::cout << arr[i];
	}
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

//문제 22번

#include <iostream>

int main()
{

}

//문제 23번

#include <iostream>

int main()
{

}

//문제 24번

#include <iostream>

int main()
{

}

//문제 25번

#include <iostream>

int main()
{

}

//문제 26번

#include <iostream>

int main()
{

}

//문제 27번

#include <iostream>

int main()
{

}