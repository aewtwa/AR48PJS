//문제 1번
//숫자 1개를 변수 n에 입력 받아 주세요.
//그리고 1부터 n까지
//while을 이용해서 출력 해 주세요.
//입력 예시
//10
//출력 예시
//1 2 3 4 5 6 7 8 9 10

#include <iostream>

int main()
{
	int n;
	std::cin >> n;
	int i = 1;
	while (i <= n)
	{
		std::cout << i;
		i++;
	}
}

//문제 2번
//숫자 6개를 배열에 입력 받으세요.
//그리고 for문을 이용하여 0번 index 부터 5번 index까지
//배열 안에 있는 값을 하나씩 출력합니다.
//그러다가 만약 출력할 값이 7이 나온다면 중단(break)를 시킵니다.
//만약 3 4 1 6 7 1 을 입력 받았다면
//숫자 7 전 까지 출력해야 하기 때문에 3 4 1 6을 출력하면 됩니다.
//(주의 : 숫자 7은 출력 되지 않습니다, for문으로 풀어주세요)
//입력 예시
//3 4 1 6 7 1
//출력 예시
//3 4 1 6

#include <iostream>

int main()
{
	int arr[6] = {};
	for (int i = 0; i < 6; i++)
	{
		std::cin >> arr[i];
	}
	for (int i = 0; i < 6; i++)
	{
		if (arr[i] == 7)
		{
			break;
		}
		std::cout << arr[i] << " ";
	}
}

//문제 3번
//input 함수와 output함수를 만들어 주세요.
//input 함수에서는 숫자 2개를 전역 변수에 입력 받습니다.
//output 함수에서는 5 부터, 입력받은 두 수의 합까지 while을 돌려 출력 해 주세요.
//입력 예시
//3 4
//출력 예시
//5 6 7

#include <iostream>

int a;
int b;
void input()
{
	std::cin >> a;
	std::cin >> b;
}

void output()
{
	int i = 5;
	while (i <= a + b)
	{
		std::cout << i << " ";
		i++;
	}
}

int main()
{
	input();
	output();
}

//문제 4번
//숫자 6개를 배열에 입력 받습니다.
//맨 마지막 칸부터 숫자 7이 나올 때 까지 출력 하면 됩니다.
//(주의 : for문을 돌려 숫자 7을 포함해서 출력 해 주세요)
//만약 1 2 7 4 9 6을 입력 받았다면
//6 9 4 7 을 출력 해 주셔야 합니다.
//입력 예시
//1 2 7 4 9 6
//출력 예시
//6 9 4 7

#include <iostream>

int main()
{
	int arr[6] = {};
	for (int i = 0; i < 6; i++)
	{
		std::cin >> arr[i];
	}
	for (int j = 0; j < 6; j++)
	{
		std::cout << arr[j] << " ";
		if (arr[j] == 7)
		{
			 
		}
	}
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