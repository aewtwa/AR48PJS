//문제 1번
//3 5 4
//1 1 2
//1 3 9
//위 3x3 배열을 하드코딩 해주세요.
//그리고 좌표 하나를 입력 받아주세요.(y, x)
//입력받은 좌표에서 바로 윗칸, 아랫칸, 왼쪽칸, 오른쪽칸의 합을
//Direct 방식을 이용해서 출력 해주세요.
//ex1) 1 1 입력시(y, x)
//이므로 5 + 1 + 2 + 3 = 11 출력
//ex2) 0 1 입력시(y, x)
//유효한 칸은 세칸이므로 3 + 1 + 4 = 8 출력
//입력 예제
//1 1
//출력 결과
//11

#include <iostream>

int main()
{
	int arr2d[3][3] =
	{
		3,5,4,
		1,1,2,
		1,3,9
	};
	int y = 0;
	std::cin >> y;
	int x = 0;
	std::cin >> x;
	int top = arr2d[y - 1][x];
	int bottom = arr2d[y + 1][x];
	int left = arr2d[y][x - 1];
	int right = arr2d[y][x + 1];
	int sum = top + bottom + left + right;
	std::cout << sum;
}

//문제 2번
//Data 구조체를 만들고 구조체 변수 a, b를 만들어 주세요.
//숫자 6개를 a.x, a.y, a.z, b.x, b.y, b.z 에 각각 입력 받고,
//a.x + b.x
//a.y + b.y
//a.z + b.z      값을 출력 해주세요.
//ex)
//입력:
//1 2 3
//4 5 6
//출력 :
//5
//7
//9
//입력 예제
//1 2 3
//4 5 6
//출력 결과
//5
//7
//9

#include <iostream>

struct data
{
	int x;
	int y;
	int z;
};

int main()
{
	data a = {};
	data b = {};
	std::cin >> a.x;
	std::cin >> a.y;
	std::cin >> a.z;
	std::cin >> b.x;
	std::cin >> b.y;
	std::cin >> b.z;
	std::cout << a.x + b.x << "\n";
	std::cout << a.y + b.y << "\n";
	std::cout << a.z + b.z;
}

//문제 3번

#include <iostream>

struct MC
{
	char burger1[8];
	char burger2[8];
};

int main()
{
	MC bob = {};
	MC tom = {};
	std::cin >> bob.burger1;
	std::cin >> bob.burger2;
	std::cin >> tom.burger1;
	std::cin >> tom.burger2;
	int bobburger1count = 0;
	int bobburger2count = 0;
	int tomburger1count = 0;
	int tomburger2count = 0;
	for (int i = 0; i < 8; i++)
	{
		if (bob.burger1[i] == '\0')
		{
			bobburger1count = i;
			break;
		}
	}
	for (int i = 0; i < 8; i++)
	{
		if (bob.burger2[i] == '\0')
		{
			bobburger2count = i;
			break;
		}
	}
	for (int i = 0; i < 8; i++)
	{
		if (tom.burger1[i] == '\0')
		{
			tomburger1count = i;
			break;
		}
	}
	for (int i = 0; i < 8; i++)
	{
		if (tom.burger2[i] == '\0')
		{
			tomburger2count = i;
			break;
		}
	}
	std::cout << "bob.burger1 = " << bobburger1count << "\n";
	std::cout << "bob.burger2 = " << bobburger2count << "\n";
	std::cout << "tom.burger1 = " << tomburger1count << "\n";
	std::cout << "tom.burger2 = " << tomburger2count;
}

//문제 4번

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