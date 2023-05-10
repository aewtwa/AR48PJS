//문제 1번
//[TIP] char 변수에 글자를 저장하면 글자를 저장한 것처럼
//보이지만 실제로는 숫자로 저장 됩니다.
//따라서 이러한 코드가 가능합니다.
//char one = 'A';
//char two = 65;
//컴퓨터 내부에는 두 코드 모두 숫자로 저장 되어있습니다.
//대신 출력하면 char 변수이기 때문에 문자로 출력 됩니다.
//ABC 함수에서 문자 2개를 입력받으세요
//OUTPUT 함수에서 입력 받은 문자 2개를 출력하세요.
//main함수에서는 ABC 함수와 OUTPUT함수를 호출 하시면 됩니다.
//입력 예시
//A 1
//출력 예시
//A 1

#include <iostream>

char a;
char b;

void ABC()
{
	std::cin >> a;
	std::cin >> b;
}

void OUTPUT()
{
	std::cout << a;
	std::cout << " ";
	std::cout << b;
}

int main()
{
	ABC();
	OUTPUT();
}

//문제 2번
//char변수(케릭터변수)에 문자 3개를 입력받아주세요.
//그리고 입력받은 문자의 아스키코드 번호를 각각 출력 해 주세요.
//예를들어 A B C 를 입력 받으면
//65
//66
//67
//을 출력 하면 됩니다.
//입력 예시
//A B C
//출력 예시
//65
//66
//67

#include <iostream>

int main()
{
	char arr[3] = {};
	for (int i = 0; i < 3; i++)
	{
		std::cin >> arr[i];
		std::cout << arr[i] << "\n";
	}
}

//문제 3번
//숫자 하나를 입력 받아 주세요.
//입력 받은 숫자 만큼 1 2 3 4 5 를 출력 해 주세요.
//4를 입력 받았다면
//1 2 3 4 5
//1 2 3 4 5
//1 2 3 4 5
//1 2 3 4 5
//를 출력 해 주세요.
//2중 for문으로 코딩을 해 주세요.

#include <iostream>

int main()
{
	int a;
	std::cin >> a;
	for (int x = 0; x < a; x++)
	{
		for (int i = 1; i <= 5; i++)
		{
			std::cout << i << " ";
		}
		std::cout << "\n";
	}
}

//문제 4번
//다음 char 배열을 하드 코딩 해 주세요
//$	@ D	A 9	#
//그리고 for문을 돌려
//각 문자와 ASCII값을 출력 해 주세요
//출력 예시
//$ : 36
//@ : 64
//D : 68
//A : 65
//9 : 57
//#:35

#include <iostream>

int main()
{
	char charr[6] = { '$','@','D','A','9','#' };
	int inarr[6] = {};
	for (int i = 0; i < 6; i++)
	{
		inarr[i] = charr[i];
		std::cout << charr[i] << " : " << inarr[i] <<"\n";
	}
}

//문제 5번
//아래의 배열을 하드코딩 해 주세요.
//B T K A
//정수형 변수(int)에 숫자 하나를 입력 받아 주세요.
//입력한 숫자 만큼 위의 배열을 출력 해 주세요.
//5를 입력하셨다면
//B T K A
//B T K A
//B T K A
//B T K A
//B T K A
//가 나와야 합니다.

#include <iostream>

int main()
{
	char arr[4] = { 'B','T','K','A' };
	int a;
	std::cin >> a;
	for (int i = 0; i < a; i++)
	{
		for (int x = 0; x < 4; x++)
		{
			std::cout << arr[x] << " ";
		}
		std::cout << "\n";
	}
}

//문제 6번
//문자 1개를 입력 받아주세요
//입력받은 문자가 대문자인지 소문자인지 구분하는 프로그램을 작성 해 주세요
//"대문자입니다" or "소문자입니다" 를 출력하시면 됩니다.
//[힌트] 이해하시면 답이 보입니다.
//if (g >= '0' && g <= '9')  문자'0' ~ 문자'9' 판별 조건
//if (g >= 'A' && g <= 'Z')  대문자 판별 조건
//if (g >= 65 && g <= 90)  대문자 판별 조건
//*대문자 ASCII값과 소문자 ASCII값은 다릅니다.
//입력 예시
//A
//출력 예시
//대문자입니다

#include <iostream>

int main()
{
	char a;
	std::cin >> a;
	if ('A' <= a && a <= 'Z')
	{
		std::cout << "대문자입니다.";
	}
	else if ('a' <= a && a <= 'z')
	{
		std::cout << "소문자입니다.";
	}
}

//문제 7번
//숫자 하나를 입력 받아 주세요.
//3을 입력 받았다면
//###
//###
//###
//을 출력 해 주세요.
//4를 입력 받았다면
//####
//####
//####
//####
//을 출력 해 주세요.
//꼭 2중 for문으로 작성 해 주세요.
//입력 예시
//3
//출력 예시
//###
//###
//###

#include <iostream>

int main()
{
	int a;
	std::cin >> a;
	for (int i = 0; i < a; i++)
	{
		for (int x = 0; x < a; x++)
		{
			std::cout << "#";
		}
		std::cout << "\n";
	}
}

//문제 8번
//char input; 변수를 만들고,
//문자 하나를 입력 받아주세요.
//만약 0~9 사이의 문자를 입력 받았다면
//입력 받은 문자를 숫자로 바꾼 후, 5를 더한 값을 출력 해 주세요.
//[힌트] 입력 받은 문자를 숫자로 바꾸는 방법
//char input = '3';
//int t = input - '0';
//input변수에는 아스키코드값 51이 저장되어 있습니다.
//(51은 문자'3'의 아스키코드값)
//여기서 문자'0'의 아스키코드값인 48을 빼면
//51 - 48 = 3
//따라서 변수 t에는 숫자 3이 저장 됩니다.
//입력 예시
//8
//출력 예시
//13

#include <iostream>

int main()
{
	char input;
	int t = 0;
	std::cin >> input;
	if ('0' <= input && input <= '9')
	{
		t = input - '0' + 5;
		std::cout << t;
	}
}

//문제 9번
//대문자 알파벳 하나를 입력 받아주세요
//A부터 입력받은 알파벳 까지 출력 해 주세요.
//만약 H를 입력받았다면
//ABCDEFGH
//이렇게 출력하시면 됩니다
//[힌트] A부터 Z까지 출력하는 소스코드
//for (x = 'A'; x <= 'Z'; x++)
//{
//	cout << (char)(x);
//}
//입력 예시
//D
//출력 예시
//ABCD

#include <iostream>

int main()
{
	char a;
	std::cin >> a;
	for (char i = 'A'; i <= a; i++)
	{
		std::cout << i;
	}
}

//문제 10번
//소문자를 1개를 입력 받으세요.
//입력받은 소문자를 대문자로 바꾸어 출력 해 주세요.
//만약 a를 입력받았다면, 대문자 A를 출력하면 됩니다.
//힌트1
//아스키코드표를 보면 규칙이 있습니다.
//힌트2 <아스키코드표 없이 대문자로 바꾸기>
//char ch = 'd';
//cout << (char)(ch - 'a' + 'A'); //대문자 D가 출력 됩니다.
//입력 예시
//b
//출력 예시
//B

#include <iostream>

int main()
{
	char a;
	std::cin >> a;
	std::cout << (char)(a - 'a' + 'A');
}

//문제 11번
//문자 두개를 입력 받아 주세요.
//만약 A 와 D를 입력 받았다면, A B C D를 4회 반복 출력하시면 됩니다.
//만약 B 와 H를 입력 받았다면, B C D E F G H 를 4회 반복 출력 해 주시면 됩니다.
//입력 예시
//B H
//출력 예시
//B C D E F G H
//B C D E F G H
//B C D E F G H
//B C D E F G H

#include <iostream>

int main()
{
	char a;
	std::cin >> a;
	char b;
	std::cin >> b;
	for (int i = 0; i < 4; i++)
	{
		for (char x = a; x <= b; x++)
		{
			std::cout << x << " ";
		}
		std::cout << "\n";
	}
}

//문제 12번
//전역변수 flag, a, b, c 이렇게 4개의 char변수를 만들어주세요
//input함수에서 문자 3개를 a, b, c 변수에 입력 받으세요
//process함수에서는 이렇게 처리 해 주세요
//- 만약 입력 받은 문자가 'A' 'B' 'C' 라면 전역변수 flag = 1 넣기
//output함수에서는 이렇게 처리 해 주세요
//- 만약 flag == 1 이라면, "ABC를찾았다" 출력
//- 그렇지 않으면 "못찾았다" 출력
//입력 예시
//A B C
//출력 예시
//ABC를찾았다

#include <iostream>
char flag;
char a;
char b;
char c;

void input()
{
	std::cin >> a;
	std::cin >> b;
	std::cin >> c;
}

void process()
{
	if (a == 'A' && b == 'B' && c == 'C')
	{
		std::cout << "ABC를 찾았다.";
	}
	else
	{
		std::cout << "못찾았다.";
	}
}
int main()
{
	input();
	process();
}

//문제 13번
//숫자 a b c세개를 입력 받아 주세요.
//a 와 b 사이에 있는 숫자들을 c번 출력 해 주세요.
//1 4 3을 입력 했다면
//1 2 3 4
//1 2 3 4
//1 2 3 4
//을 출력 해 주시면 됩니다.
//입력 예시
//1 9 2
//출력 예시
//1 2 3 4 5 6 7 8 9
//1 2 3 4 5 6 7 8 9

#include <iostream>

int main()
{
	int a;
	std::cin >> a;
	int b;
	std::cin >> b;
	int c;
	std::cin >> c;
	for (int i = 0; i < c; i++)
	{
		for (int x = a; x <= b; x++)
		{
			std::cout << x << " ";
		}
		std::cout << "\n";
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