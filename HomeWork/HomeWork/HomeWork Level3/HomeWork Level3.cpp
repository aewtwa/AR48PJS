//문제 1번
//숫자 1개를 입력 받으세요
//만약 그 숫자가 10보다 같거나 크면
//"WOW"
//그렇지않으면
//"OMG"
//을 출력 해 주세요
//입력 예시
//10
//출력 예시
//WOW

#include <iostream>

int main()
{
	int a;
	std::cin >> a;
	if (a >= 10)
	{
		std::cout << "WOW";
	}
	else
	{
		std::cout << "OMG";
	}
}

//문제 2번
//숫자 2개를 입력 받고 큰 숫자가 어떤 숫자 인지 알려주는
//프로그램을 만들어주세요
//만약 3과 5를 입력하면 "큰수는 5"  출력
//만약에 둘 다 같은수가 입력되면 "같은숫자" 출력
//입력 예시
//- 55 100
//출력 예시
//큰수는 100

#include <iostream>

int main()
{
	int a;
	int b;
	std::cin >> a;
	std::cin >> b;
	if (a > b)
	{
		std::cout << "큰 수는 " << a;
	}
	else if (a < b)
	{
		std::cout << "큰 수는 " << b;
	}
	else
	{
		std::cout << "같은 숫자";
	}
}

//문제 3번
//숫자 하나를 입력 받으세요
//만약 그 숫자가 5 이거나 10이면 "만세" 출력
//그렇지 않으면 "재도전" 출력
//입력 예시
//10
//출력 예시
//만세

#include <iostream>

int main()
{
	int a;
	std::cin >> a;
	if (a == 5 || a == 10)
	{
		std::cout << "만세";
	}
	else
	{
		std::cout << "재도전";
	}
}

//문제 4번
//숫자 2개를 입력 받으세요
//첫번째 숫자가 7이고 두번째 숫자가 9이면 "인증됨" 출력
//그렇지 않으면 "재시도"를 출력 해 주세요
//입력 예시
//7 9
//출력 예시
//인증됨

#include <iostream>

int main()
{
	int a;
	int b;
	std::cin >> a;
	std::cin >> b;
	if (a == 7 && b == 9)
	{
		std::cout << "인증됨";
	}
	else
	{
		std::cout << "재시도";
	}
}

//문제 5번
//숫자를 3부터 10까지 For문을 이용해서 출력 해주세요.
//출력 예시
//3
//4
//5
//6
//7
//8
//9
//10

#include <iostream>

int main()
{
	int x;
	for (x = 3; x <= 10; x++)
	{
		std::cout << x << "\n";
	}
}

//문제 6번
//숫자 2개를 입력 받으세요(두번째 숫자는 첫번째 숫자보다 큽니다)
//첫번째 숫자부터 두번째 숫자 값 까지 출력 해 주세요
//만약 2 4를 입력하셨으면
//2 3 4 를 출력하시면 됩니다.
//입력 예시
//1 5
//출력 예시
//1
//2
//3
//4
//5

#include <iostream>

int main()
{
	int a;
	int b;
	std::cin >> a;
	std::cin >> b;
	int i;
	for (i = a; i <= b; i++)
	{
		std::cout << i << "\n";
	}
}

//문제 7번
//"PIZZAHOT" 이라는 문장을 25번 출력 하세요.
//출력 예시
//PIZZAHOT
//PIZZAHOT
//PIZZAHOT
//PIZZAHOT
//PIZZAHOT
//PIZZAHOT
//PIZZAHOT
//PIZZAHOT
//PIZZAHOT
//PIZZAHOT
//PIZZAHOT
//PIZZAHOT
//PIZZAHOT
//PIZZAHOT
//PIZZAHOT
//PIZZAHOT
//PIZZAHOT
//PIZZAHOT
//PIZZAHOT
//PIZZAHOT
//PIZZAHOT
//PIZZAHOT
//PIZZAHOT
//PIZZAHOT
//PIZZAHOT

#include <iostream>

int main()
{
	int i;
	for (i = 0; i < 25; i++)
	{
		std::cout << "PIZZAHOT\n";
	}
}

//문제 8번
//숫자 하나를 입력 받고 "##" 을 입력받은 숫자만큼 출력 해주세요.
//ex)
//입력: 3
//출력: ##
//      ##
//      ##
//입력 예시
//3
//출력 예시
//##
//##
//##

#include <iostream>

int main()
{
	int a;
	std::cin >> a;
	int i;
	for (i = 0; i < a; i++)
	{
		std::cout << "##\n";
	}
}

//문제 9 번
//10 ~1까지 for문을 돌려 출력 해주세요
//출력 예시
//10 9 8 7 6 5 4 3 2 1

#include <iostream>

int main()
{
	int i;
	for (i = 10; i > 0; i--)
	{
		std::cout << i << " ";
	}
}

//문제 10번
//숫자 1개를 입력 받으세요
//그 숫자에 2를 곱하고, 20을 더하고, 다시 5로 나눈 값이 100과 같지 않으면(!= )
//"Magic"이라는 글씨를 출력 하세요.
//입력 예시
//100
//출력 예시
//Magic

#include <iostream>

int main()
{
	int a;
	std::cin >> a;
	int b = (a * 2 + 20) / 5;
	if (b != 100)
	{
		std::cout << "Magic";
	}
}

//문제 11번
//변수 a, b를 만들고 숫자를 각각 입력 받아주세요.
//그리고 a부터 b까지의 숫자를 출력 해주세요.
//ex1)
//입력: 3 5
//출력 : 345
//ex2)
//입력: 2 6
//출력 : 23456
//입력 예시
//3 5
//출력 예시
//345

#include <iostream>

int main()
{
	int a;
	int b;
	std::cin >> a;
	std::cin >> b;
	int i;
	for (i = a; i <= b; i++)
	{
		std::cout << i;
	}
}

//문제 12번
//숫자 1개를 입력받으세요
//0부터 입력받은 숫자까지 출력 해 주세요
//만약 3을 입력하셨으면
//0 1 2 3을 출력 하시면 됩니다.
//입력 예시
//5
//출력 예시
//0
//1
//2
//3
//4
//5

#include <iostream>

int main()
{
	int a;
	std::cin >> a;
	int i;
	for (i = 0; i <= a; i++)
	{
		std::cout << i << "\n";
	}
}

//문제 13번
//숫자 3개를 입력 받아주세요
//만약 숫자 3개의 합이 10보다 크면, 숫자 3개를 곱한 숫자를 출력 해 주세요
//그렇지 않으면 0을 출력 해 주세요
//ex)
//1 2 10 을 입력받으면 숫자 합은 13이니까, 3개 숫자의 곱인 20을 출력하시면 됩니다.
//입력 예시
//1 2 10
//출력 예시
//20

#include <iostream>

int main()
{
	int a;
	int b;
	int c;
	std::cin >> a;
	std::cin >> b;
	std::cin >> c;
	if (a + b + c > 10)
	{
		std::cout << a * b * c;
	}
	else
	{
		std::cout << "0";
	}
}

//문제 14번
//숫자 한 개 를 입력받으세요
//입력받은 숫자 부터 Count Down이 되는 과정을 출력 해 주세요.
//그리고 마지막에는 "발사"를 출력해주시면 됩니다.
//입력 예시
//4
//출력 예시
//4
//3
//2
//1
//0
//발사

#include <iostream>

int main()
{
	int a;
	std::cin >> a;
	int i;
	for (i = a; i >= 0; i--)
	{
		std::cout << i << "\n";
	}
	std::cout << "발사";
}

//문제 15번
//- 5 ~5 까지 출력 해주세요.
//출력 예시
//- 5 - 4 - 3 - 2 - 1 0 1 2 3 4 5

#include <iostream>

int main()
{
	int i;
	for (i = -5; i <= 5; i++)
	{
		std::cout << i << " ";
	}
}

//문제 16번
//3~8까지 출력해주세요.(for문 이용)
//출력 예시
//3 4 5 6 7 8

#include <iostream>

int main()
{
	int i;
	for (i = 3; i <= 8; i++)
	{
		std::cout << i << " ";
	}
}

//문제 17번
//문제의 규칙을 찾아 아래와 같이 작동하는 프로그램을 만들어 주세요.
//ex1)
//숫자 입력 : 3
//출력 : 333
//       444
//       555
//ex2)
//숫자 입력 : 7
//출력 : 777
//       888
//       999
//입력 예시
//3
//출력 예시
//333
//444
//555

#include <iostream>

int main()
{
	int a;
	std::cin >> a;
	int i;
	int o;
	for (i = 0; i < 3; i++)
	{
		std::cout << a;
	}
	std::cout << "\n";
	for (i = 0; i < 3; i++)
	{
		std::cout << a + 1;
	}
	std::cout << "\n";
	for (i = 0; i < 3; i++)
	{
		std::cout << a + 2;
	}
}

//문제 18번
//숫자 4개를 입력 받으세요
//비밀번호는 1 2 3 4  입니다.
//이 비밀번호가 맞다 면 "로그인성공" 출력
//그렇지 않으면 "로그인실패" 출력
//입력 예시
//1 2 3 4
//출력 예시
//로그인성공

#include <iostream>

int main()
{
	int a;
	int b;
	int c;
	int d;
	std::cin >> a;
	std::cin >> b;
	std::cin >> c;
	std::cin >> d;
	if (a == 1 && b == 2 && c == 3 && d == 4)
	{
		std::cout << "로그인성공";
	}
	else
	{
		std::cout << "로그인실패";
	}
}

//문제 19번
//숫자 하나를 입력 받아주세요.
//아래의 규칙을 보고 for문을 사용해 값을 출력 해주세요.
//ex1)
//입력: 3
//출력 : 5 6 7
//ex2)
//입력: 5
//출력 : 7 8 9
//ex3)
//입력: 9
//출력 : 11 12 13
//입력 예시
//3
//출력 예시
//5 6 7

#include <iostream>

int main()
{
	int a;
	std::cin >> a;
	int i;
	for (i = a + 2; i <= a + 4; i++)
	{
		std::cout << i << " ";
	}
}

//문제 20번
//숫자 3개를 입력 받으세요
//이중 첫 번째로 입력 받은 숫자가 나머지 숫자 2개 보다 큰 숫자인지
//알려주는 프로그램을 작성 해 주세요
//만약 3 5 1이 입력되면
//"MAX아님" 출력
//만약 5 1 2가 입력되면
//"MAX발견" 출력
//입력 예시
//3 5 1
//출력 예시
//MAX아님

#include <iostream>

int main()
{
	int a;
	int b;
	int c;
	std::cin >> a;
	std::cin >> b;
	std::cin >> c;
	if (a > b && a > c)
	{
		std::cout << "MAX발견";
	}
	else
	{
		std::cout << "MAX아님";
	}
}

//문제 21번
//숫자 두 개를 입력 받으세요
//그 숫자의 곱이 30 ~50 사이라면(30 < x < 50)
//"적당한 사이즈" 출력
//그 숫자의 곱이 50보다 같거나 크면
//"큰 사이즈" 출력
//그 숫자의 곱이 30보다 같거나 작으면
//"작은 사이즈" 출력
//입력 예시
//6 6
//출력 예시
//적당한 사이즈

#include <iostream>

int main()
{
	int a;
	int b;
	std::cin >> a;
	std::cin >> b;
	int c = a * b;
	if (30 < c && c < 50)
	{
		std::cout << "적당한 사이즈";
	}
	else if (50 <= c)
	{
		std::cout << "큰 사이즈";
	}
	else
	{
		std::cout << "작은 사이즈";
	}
}

//문제 22번
//변수 a, x를 만들고, 각 변수에 숫자를 입력 받아주세요. (숫자 2개 입력)
//a보다 작은 수를 x개 만큼 출력 해주세요.
//ex)
//a 입력 : 17
//x 입력 : 3
//17보다 작은 수 3개를 출력하면 됩니다.
//출력결과 : 16 15 14
//입력 예시
//17 3
//출력 예시
//16 15 14

#include <iostream>

int main()
{
	int a;
	int x;
	std::cin >> a;
	std::cin >> x;
	int i;
	for (i = a - 1; i >= a - x; i--)
	{
		std::cout << i << " ";
	}
}
//문제 23번
//변수 a, b, c 에다가 숫자를 각각 1개씩 입력 받으세요.
//a ~b 까지
//a ~c 까지
//출력하는 소스코드를 작성 해주세요.
//ex)
//3개의 숫자 입력 : 3 5 9
//a ~b 출력 : 3 4 5
//a ~c 출력 : 3 4 5 6 7 8 9
//입력 예시
//3 5 9
//출력 예시
//3 4 5
//3 4 5 6 7 8 9

#include <iostream>

int main()
{
	int a;
	int b;
	int c;
	std::cin >> a;
	std::cin >> b;
	std::cin >> c;
	int i;
	for (i = a; i <= b; i++)
	{
		std::cout << i << " ";
	}
	std::cout << "\n";
	int o;
	for (o = a; o <= c; o++)
	{
		std::cout << o << " ";
	}
}
//문제 24번
//1중 for문으로 아래와 같이 출력 하세요
//출력 예시
//9 6
//8 5
//7 4
//6 3

#include <iostream>

int main()
{
	int i;
	for (i = 9; i >= 6; i--)
	{
		std::cout << i << " " << i - 3 << "\n";
	}
}
//문제 25번
//숫자 하나를 입력 받아주세요.
//아래의 규칙을 보고 소스코드를 작성해주세요.
//ex1)
//입력: 5
//출력 : 1 3 5 7 9
//입력 : 3
//1 3 5
//입력 예시
//5
//출력 예시
//1 3 5 7 9

#include <iostream>

int main()
{
	int a;
	std::cin >> a;
	int b = a * 2 - 1;
	int i;
	for (i = 1; i <= b; i = i + 2)
	{
		std::cout << i << " ";
	}
}
//문제 26번
//for문을 사용해 아래와 같이 출력되도록 소스코드를 작성해 주세요
//출력 예시
//시작
//12345
//종료

#include <iostream>

int main()
{
	int i;
	std::cout << "시작\n";
	for (i = 1; i <= 5; i++)
	{
		std::cout << i;
	}
	std::cout << "\n종료";
}
//문제 27번
//숫자 하나를 입력 받고
//##
//@@
//을 입력받은 숫자만큼 출력 해 주세요.
//ex)
//입력: 2
//출력 : ##
//       @@
//       ##
//       @@
//입력 예시
//2
//출력 예시
//##
//@@
//##
//@@

#include <iostream>

int main()
{
	int a;
	std::cin >> a;
	int i;
	for (i = 0; i < a; i++)
	{
		std::cout << "##\n@@\n";
	}
}
//문제 28번
//for문을 이용해 아래와 같이 출력 해주세요
//출력 예시
//1번go!!
//2번go!!
//3번go!!
//4번go!!
//5번go!!

#include <iostream>

int main()
{
	int i;
	for (i = 1; i <= 5; i++)
	{
		std::cout << i << "번go!!\n";
	}
}
//문제 29번
//숫자 2개(아이디, 비밀번호)를 입력 받아주세요
//아이디는 1111, 비밀번호는 2222를 입력해야 로그인 처리가 완료됩니다.
//만약 아이디가 틀렸으면 "아이디가 틀렸습니다" 출력
//만약 아이디는 맞지만, 비밀번호가 틀렸으면 "비밀번호가 틀렸습니다" 출력
//만약 아이디와 비밀번호가 모두 맞으면 "로그인성공" 출력
//입력 예시
//1111 2222
//출력 예시
//로그인성공

#include <iostream>

int main()
{
	int 아이디;
	int 비밀번호;
	std::cin >> 아이디;
	std::cin >> 비밀번호;
	if (아이디 != 1111)
	{
		std::cout << "아이디가 틀렸습니다.";
	}
	else if (아이디 == 1111 && 비밀번호 != 2222)
	{
		std::cout << "아이디는 맞지만, 비밀번호가 틀렸습니다.";
	}
	else
	{
		std::cout << "로그인성공";
	}
}
//문제 30번
//숫자 하나를 입력 받고, 입력받은 값부터 0까지 출력 해주세요.
//ex1)
//입력 : 5
//출력 : 543210
//ex2)
//입력 : 3
//출력 : 3210
//입력 예시
//5
//출력 예시
//543210

#include <iostream>

int main()
{
	int a;
	std::cin >> a;
	int i;
	for (i = a; i >= 0; i--)
	{
		std::cout << i;
	}
}