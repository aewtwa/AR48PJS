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

int main()
{
	int arr[11] = { 3,4,1,5,8,1,7,7,3,6,9 };
	int a;
	std::cin >> a;
	int i;
	for (i = 0; i < 11; i += a)
	{
		std::cout << arr[i];
	}
}

//문제 14번
//ljjcoding 함수를 정의해 주세요.
//이 함수 안에서 숫자 두개를 입력받고 출력하면 됩니다.
//main 함수에서는 ljjcoding 함수를 호출 해 주세요.
//입력 예시
//3 1
//출력 예시
//(3)(1)

#include <iostream>

void ljjcoding()
{
	int a;
	std::cin >> a;
	int b;
	std::cin >> b;
	std::cout << "(" << a << ") " << "(" << b << ")";
}

int main()
{
	ljjcoding();
}

//문제 15번
//함수 2개를 정의 해 주세요
//- KFC함수 : "KFC" 출력
//- BBQ함수 : "BBQ" 출력
//그리고 문자 1개를 입력받아주세요.
//그 문자가 만약에 'B'라면 KFC함수와 BBQ함수를 모두 호출하고
//그 문자가 만약에 'b'라면 BBQ함수를 출력 해주세요.
//그 문자가 만약에 '7'이라면 KFC함수만 호출 해주세요.
//입력 예시
//B
//출력 예시
//KFC
//BBQ

#include <iostream>

void KFC()
{
	std::cout << "KFC";
}

void BBQ()
{
	std::cout << "BBQ";
}

int main()
{
	char a;
	std::cin >> a;
	if (a == 'B')
	{
		KFC();
		std::cout << "\n";
		BBQ();
	}
	else if (a == 'b')
	{
		BBQ();
	}
	else if (a == 7)
	{
		KFC();
	}
}

//문제 16번
//5칸짜리 배열을 2개 만들어주세요.
//그리고 숫자 2개를 입력받고, 그 숫자로 배열에 값을 채워주세요.
//만약 3 5를 입력받았으면, 첫번째 배열은
//3	3 3	3 3
//두번째 배열은
//5	5 5	5 5
//이렇게 채워주시면 됩니다.
//그리고 PrintAll이라는 함수를 정의하시고, 그 함수를 호출하면
//두 배열값이 모두 출력되도록 코딩 해 주세요.
//입력 예시
//3 5
//출력 예시
//33333
//55555

#include <iostream>

int arr0[5] = {};
int arr1[5] = {};

void PrintAll()
{
	int c;
	for (c = 0; c < 5; c++)
	{
		std::cout << arr0[c];
	}
	std::cout << "\n";
	int d;
	for (d = 0; d < 5; d++)
	{
		std::cout << arr1[d];
	}
}

int main()
{
	int a;
	std::cin >> a;
	int b;
	std::cin >> b;
	int i;
	for (i = 0; i < 5; i++)
	{
		arr0[i] = a;
	}
	int o;
	for (o = 0; o < 5; o++)
	{
		arr1[o] = b;
	}
	PrintAll();
}

//문제 17번
//배열 5칸짜리를 만들어주세요.
//그리고 숫자를 하나 입력받고, 그 숫자부터 1씩 감소하는 값들을 배열에 채워주세요.
//만약 6를 입력받았다면 이렇게 채우시면 됩니다.
//6	5 4	3 2
//그리고 이 배열을 모두 출력하는 KFC 함수를 정의하고
//KFC함수를 호출 해 주세요.
//입력 예시
//6
//출력 예시
//65432

#include <iostream>

int arr[5] = {};

void KFC()
{
	int o;
	for (o = 0; o < 5; o++)
	{
		std::cout << arr[o];
	}
}

int main()
{
	int a;
	std::cin >> a;
	int i;
	for (i = 0; i < 5; i++)
	{
		arr[i] = a;
		a--;
	}
	KFC();
}

//문제 18번
//5칸짜리 arr 배열에 아래의 값을 하드코딩 해 주세요
//4 1 2 3 5
//문자 하나를 입력 받고
//그 문자가 'a' 이거나 'b' 이거나 'c' 라면
//-- > 3번 index 에서 0번 index 까지 출력
//그렇지 않으면
//-- > 4번 index에서 1번 index 까지 출력 해 주세요.
//입력 예시
//b
//출력 예시
//3 2 1 4

#include <iostream>

int main()
{
	int arr[5] = { 4,1,2,3,5 };
	char a;
	std::cin >> a;
	if (a == 'a' || a == 'b' || a == 'c')
	{
		int i;
		for (i = 3; i >= 0; i--)
		{
			std::cout << arr[i] << " ";
		}
	}
	else
	{
		int o;
		for (o = 4; o >= 1; o--)
		{
			std::cout << arr[o] << " ";
		}
	}
}

//문제 19번
//다음 배열을 하드코딩 하세요.
//3 5 1 2 4 6 7
//숫자 2개를 입력 받습니다.
//입력한 숫자 범위에 해당하는 인덱스 값을 출력 하는 문제입니다.
//만약 3, 5를 입력 받으면
//배열의 3번 index에서 부터 5번 index까지 해당하는 값을 출력 합니다.
//ex)
//입력 : 3 5
//출력 : 2 4 6
//입력 예시
//3 5
//출력 예시
//2 4 6

#include <iostream>

int main()
{
	int arr[7] = { 3,5,1,2,4,6,7 };
	int a;
	std::cin >> a;
	int b;
	std::cin >> b;
	int i;
	for (i >= a; i <= b; i++)
	{
		std::cout << arr[i] << " ";
	}
}

//문제 20번
//4칸짜리 data배열이 있습니다.
//숫자 1개를 입력받아주세요.
//만약 10을 입력 받으면 아래와 같이 배열에 채워집니다.
//10 9 8 7
//그리고 채워진 배열을 출력 하세요.
//ex)
//입력: 10
//출력 : 10 9 8 7
//입력 예시
//10
//출력 예시
//10 9 8 7

#include <iostream>

int main()
{
	int data[4] = {};
	int a;
	std::cin >> a;
	int i;
	for (i = 0; i < 4; i++)
	{
		data[i] = a;
		std::cout << data[i] << " ";
		a--;
	}
}

//문제 21번
//6칸짜리 arr배열이 있습니다.
//a와 b 변수에 숫자 2개를 입력받아주세요
//a서 부터 증가되는 숫자를 0 ~2번 index에 채우고
//b서 부터 감소되는 숫자를 5 ~3번 index에 채워주세요
//예를 들어
//1 9가 입력 받았다면
//1 2 3 7 8 9 가 배열에 채워져야 합니다.
//예를 들어
//5 55이 입력 받았다면
//5 6 7 53 54 55 가 배열에 채워져야 합니다.

#include <iostream>

int main()
{
	int arr[6] = {};
	int a;
	std::cin >> a;
	int b;
	std::cin >> b;
	int i;
	for (i = 0; i < 3; i++)
	{
		arr[i] = a;
		std::cout << arr[i] << " ";
		a++;
	}
	int o;
	for (o = 3; o <= 5; o++)
	{
		arr[o] = b - 2;
		std::cout << arr[o] << " ";
		b++;
	}
}

//문제 22번
//숫자 2개를 입력 받아주세요.
//첫번째로 입력한 숫자는 배열의 0번째에 들어가는 값입니다.
//두번째로 입력한 숫자는 첫번째로 입력한 숫자에 플러스 되는 값입니다.
//아래 예시를 보고 배열에 값을 채운 후 출력 해주세요.
//ex)
//입력 : 1 2
//출력 : 1 3 5 7 9
//입력 예시
//1 2
//출력 예시
//1 3 5 7 9

#include <iostream>

int main()
{
	int arr[5] = {};
	int a;
	std::cin >> a;
	int b;
	std::cin >> b;
	int i;
	for (i = 0; i < 5; i++)
	{
		arr[i] = a;
		std::cout << arr[i] << " ";
		a = a + b;
	}
}

//문제 23번
//숫자 1개를 입력 받고, 아래 규칙에 따라 배열에 값을 채운 후
//채운 값을 출력 해 주세요.
//만약 3을 입력 받으면
//아래와 같이 배열에 채워집니다.
//3 6 9 12 15 18
//만약 2를 입력 받으면
//아래와 같이 배열에 채워집니다.
//2 4 6 8 10 12
//입력 예시
//3
//출력 예시
//3 6 9 12 15 18

#include <iostream>

int main()
{
	int arr[6] = {};
	int a;
	std::cin >> a;
	int i;
	int sum = a;
	for (i = 0; i < 6; i++)
	{
		arr[i] = sum;
		std::cout << sum << " ";
		sum = sum + a;
	}
}
//문제 24번
//6칸짜리 arr배열을 만들어주세요.
//arr[0]에서 arr[2]까지 숫자를 입력 받아 배열에 값을 채워주세요.
//그 다음 숫자 1개를 더 입력 받고, arr[3]에서 arr[5]까지 입력받은 값부터
//1씩 증가한 값으로 채워주세요.
//ex)
//[입력]
//3 2 5
//4
//
//3 2 5 4 5 6
//[출력]
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

//문제 25번
//5칸짜리 배열에 값을 입력받아 채우고,
//전체 배열값을 더한 sum값을 구해 출력 해주세요.
//ex)
//입력 : 1 4 2 1 6
//1 4 2 1 6
//출력 : 합은 14입니다
//입력 예시
//1 4 2 1 6

#include <iostream>

int main()
{
	int arr[5] = {};
	int i;
	int sum = 0;
	for (i = 0; i < 5; i++)
	{
		std::cin >> arr[i];
		sum = sum + arr[i];
	}
	std::cout << "합은 " << sum << "입니다.";
}

//문제 26번
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

int main()
{
	int arr[11] = { 3,4,1,5,8,1,7,7,3,6,9 };
	int a;
	std::cin >> a;
	int i;
	for (i = 0; i < 11; i += a)
	{
		std::cout << arr[i];
	}
}

//문제 27번
//6칸짜리 arr배열을 만들어주세요.
//int arr[6] = { 0 }; 이 문제에서는 이렇게 모든 칸을 0으로 전체 초기화를 해 주어야 합니다.
//숫자 2개를 변수 a와 b에다가 입력을 받아주세요
//이 arr배열에 a ~b 사이에 숫자를 넣어주세요
//예로들어 2 5를 입력받았다면
//2	3 4	5 0 0
//그리고 배열에 채운값만 출력해주시면 됩니다.
//* 변수 t를 활용해주세요
//* 항상 a보다 b값이 더 큽니다.
//* a 와 b 의 간격은 6칸 이내 입니다.
//입력 예시
//2 5
//출력 예시
//2345

#include <iostream>

int main()
{
	int arr[6] = {};
	int a;
	std::cin >> a;
	int b;
	std::cin >> b;
	int t = b - a + 1;
	int i;
	for (i = 0; i < t; i++)
	{
		arr[i] = a;
		std::cout << a;
		a++;
	}
}