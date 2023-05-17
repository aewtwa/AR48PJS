//문제 1번
//문장을 입력 받고, 입력 받은 문장을 5번 출력 합니다(for문 이용)
//ex) 만약 "ABC"를 입력하셨다면 ABC를 5번 반복해서 출력하면 됩니다
//입력 예시
//CODING
//출력 예시
//CODING
//CODING
//CODING
//CODING
//CODING

#include <iostream>

int main()
{
	char a[256];
	std::cin >> a;
	for (int i = 0; i < 5; i++)
	{
		std::cout << a << "\n";
	}
}

//문제 2번
//문자열 2개를 char 배열 2개에 입력 받아주세요
//그리고 각 문자열의 길이를 출력 해 주세요
//ex) "ABCD", "BBQ"를 입력하셨다면 4와 3을 출력하시면 됩니다
//(문자열 길이 구할 때 break; 쓰는 것 잊지 마세요)
//[TIP] 문자열 하드코딩 하는 방법1 - 기존 방법
//char vect[5] = { 'A', 'B', 'C', 'D', '\0' };
//이렇게 한 글자씩 넣을 수 있습니다
//맨 마지막에 추가한 '\0' 이라는 문자는 NULL문자(널문자)라고 합니다.
//문장의 끝을 나타내는 문자 입니다
//C언어 규칙에 따라 문자열 마지막에는 NULL문자가 있어야 된 다는 것을 알아두세요
//[TIP] 문장 하드코딩 하는 방법2 - 더 쉬운 방법
//char vect[5] = "ABCD";
//이렇게 하게 되면 문자열 끝에 NULL문자가 자동으로 들어갑니다
//만약 "BBQ" 라는 문자열을 하드코딩하려면 배열 4칸짜리를 만들어야 합니다.
//만약 "ABCDE"라는 문자열을 하드코딩하려면 배열 6칸짜리를 만들어야 합니다.
//char vect[3] = "BBQ";  //버그발생 : NULL문자 넣을 공간이 없음
//char vect[4] = "BBQ";  //정상 소스코드
//입력 예시
//ABCD
//BBQ
//출력 예시
//4 3

#include <iostream>

int main()
{
	char a[256];
	std::cin >> a;
	char b[256];
	std::cin >> b;
	int check = 0;
	for (int i = 0; i < 256; i++)
	{
		if (a[i] == '\0')
		{
			check = i;
			break;
		}
	}
	std::cout << check;
	for (int i = 0; i < 256; i++)
	{
		if (b[i] == '\0')
		{
			check = i;
			break;
		}
	}
	std::cout << check;
}

//문제 3번
//하나의 숫자를 입력 받아 주세요. 2중 for문을 이용하여 아래와 같이 출력 해 주세요.
//* 배열을 사용하지 말아주세요.
//4를 입력받았다면
//4444
//3333
//2222
//1111
//을 출력 해 주세요.
//9를 입력받았다면
//9999
//8888
//7777
//6666
//을 출력 해 주세요.
//입력 예시
//4
//출력 예시
//4444
//3333
//2222
//1111

#include <iostream>

int main()
{
	int a;
	std::cin >> a;
	for (int i = 0; i < 4; i++)
	{
		for (int i = 0; i < 4; i++)
		{
			std::cout << a;
		}
		std::cout << "\n";
		a--;
	}
}

//문제 4번
//한 개의 숫자를 입력받고, 2중 for문을 이용하여 아래와 같이 출력 해 주세요.
//(입력 받은 숫자만큼 라인을 출력 해 주세요)
//4를 입력 했을 경우
//123
//123
//123
//123
//을 출력 해 주세요.
//3을 입력했을 경우
//123
//123
//123
//을 출력 해 주세요.
//* 배열을 사용 안하고, 2중 for문으로 풀어주세요
//입력 예시
//4
//출력 예시
//123
//123
//123
//123

#include <iostream>

int main()
{
	int a;
	std::cin >> a;
	int c = 1;
	for (int i = 0; i < a; i++)
	{
		for (int y = 0; y < 3; y++)
		{
			std::cout << c;
			c++;
		}
		c = 1;
		std::cout << "\n";
	}
}

//문제 5번
//숫자 하나를 입력받으세요
//그리고 2차배열에 아래와 같은 모양으로 값을 채운 후 출력 해 주세요
//ex) 만약 숫자 1을 입력받았다면 숫자 1부터 값을 아래와 같은 모양으로 채워주세요
//    1 2
//  3 4 5
//6 7 8 9
//그리고 이렇게 출력 됩니다
//ex) 만약 숫자 2를 입력받았다면 숫자 2부터 값을 아래와 같은 모양으로 채워주세요
//    2 3
//  4 5 6
//7 8 9 10
//그리고 이렇게 출력 됩니다
//* 빈칸은 띄어쓰기로 바꾸어서 출력 해 주세요
//[힌트]  만약에 출력할 내용이 0이라면 띄어쓰기로 출력하고, 그렇지 않다면 배열 값 출력
//* 주의 : 배열 안에 띄어쓰기를 넣는 것이 아닙니다.
//(int형 2차 배열 안에 문자 ' '를 넣지 말아주세요)
//입력 예시
//1
//출력 예시
//  12
// 345
//6789

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