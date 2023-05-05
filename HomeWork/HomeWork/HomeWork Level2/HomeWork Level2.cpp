//문제 1번
//1주동안 운동 횟수를 입력받고,
//칭찬의 메세지를 출력 해 주세요.
//입력 예시
//5
//출력 예시
//멋지군요!!칭찬합니다.

#include <iostream>

int main()
{
	int a;
	std::cin >> a;
	if (a == 5)
	{
		std::cout << "멋지군요!! 칭찬합니다.";
	}
}

//문제 2번
//숫자 하나를 입력받고 출력하세요
//입력받은 숫자를 그대로 출력 하고, 뒤에 "입력하셨군요"라는 글씨를 붙여서 출력하시면 됩니다.
//입력 예시
//3
//출력 예시
//3 입력하셨군요

#include <iostream>

int main()
{
	int a;
	std::cin >> a;
	std::cout << a << " 입력하셨군요.";
}

//문제 3번
//숫자를 하나만 입력 받아주세요.
//그 숫자를 세번 출력 해 주시면 됩니다.
// [참고]
//cin과 cout만 이용해서 풀어주세요.
//입력 예시
//3
//출력 예시
//3 3 3

#include <iostream>

int main()
{
	int a;
	std::cin >> a;
	std::cout << a << " " << a << " " << a;
}

//문제 4번
//숫자 3개를 변수 a, b, c에 입력 받으세요.
//그리고
//a를 3번 출력,
//b를 3번 출력,
//c를 3번 출력 해주세요.
//ex)
//[입력]
//3 5 9
//[출력]
//333
//555
//999
//입력 예시
//3 5 9
//출력 예시
//333
//555
//999

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
	for (i = 0; i < 3; i++)
	{
		std::cout << a;
	}
	std::cout << "\n";
	int o;
	for (o = 0; o < 3; o++)
	{
		std::cout << b;
	}
	std::cout << "\n";
	int p;
	for (p = 0; p < 3; p++)
	{
		std::cout << c;
	}
}

//문제 5번
//숫자 2개를 입력받으세요
//그리고 그 차를 구해서 출력 해 주세요
//차이 : [앞 숫자] - [뒷 숫자]
//입력 예시
//30 10
//출력 예시
//두 숫자의 차는 20 입니다.

#include <iostream>

int main()
{
	int a;
	int b;
	std::cin >> a;
	std::cin >> b;
	std::cout << "두 숫자의 차는 " << a - b << "입니다.";
}

//문제 6번
//숫자 2개를 입력받고 덧셈, 곱셈, 나눗셈을 출력 해 주세요
//(int형 변수를 사용하시면 됩니다)
//[주의]
//1 2를 입력했을 때, 출력결과가
//a + b = 3 이 아니라, 1 + 2 = 3로 나와야 합니다.
//입력 예시
//5 2
//출력 예시
//5 + 2 = 7
//5 * 2 = 10
//5 / 2 = 2

#include <iostream>

int main()
{
	int a;
	int b;
	std::cin >> a;
	std::cin >> b;
	int c = a + b;
	int d = a * b;
	int e = a / b;
	std::cout << a << "+" << b << "=" << a + b << "\n";
	std::cout << a << "*" << b << "=" << a * b << "\n";
	std::cout << a << "/" << b << "=" << a / b;
}

//문제 7번
//변수 a, b에 숫자를 입력 받으세요.
//만약 변수 a가 b 보다 크다면
//a가b보다크다
//를 출력 해 주세요.
//만약 그렇지 않다면
//b가a보다같거나크다
//를 출력 해 주세요.
//입력 예시
//4 3
//출력 예시
//a가b보다크다

#include <iostream>

int main()
{
	int a;
	int b;
	std::cin >> a;
	std::cin >> b;
	if (a > b)
	{
		std::cout << "a가 b보다 크다.";
	}
	else
	{
		std::cout << "b가 a랑 같거나, a보다 크다.";
	}
}

//문제 8번
//숫자 2개를 입력 받고, 둘 중 큰수를 4번 출력 해주세요.
//ex)
//[입력]
//3 5
//[출력]
//5555
//입력 예시
//3 5
//출력 예시
//5555

#include <iostream>

int main()
{
	int a;
	int b;
	std::cin >> a;
	std::cin >> b;
	int i;
	if (a > b)
	{
		for (i = 0; i < 4; i++)
		{
			std::cout << a;
		}
	}
	else
	{
		for (i = 0; i < 4; i++)
		{
			std::cout << b;
		}
	}
}

//문제 9번
//숫자 1개를 변수 a에 입력 받고, 다음 규칙에 맞게 출력하세요.
//입력 예시
//5
//출력 예시
//5 입력함
//a++을 수행하면 6이 됩니다

#include <iostream>

int main()
{
	int a;
	std::cin >> a;
	std::cout << a << "입력함\n";
	a++;
	std::cout << "a++을 수행하면 " << a << "이 됩니다.";
}

//문제 10번
//숫자 1개를 변수 input에 입력 받으세요.
//그 숫자가 3보다 크면 1을 더하고 출력 해주세요. (input++; 을 활용하세요)
//그렇지 않으면 1을 빼고 출력 해주세요. (input--; 를 활용 하세요)
//ex) 5 = > 6
//ex) 1 = > 0
//입력 예시
//5
//출력 예시
//6

#include <iostream>

int main()
{
	int input;
	std::cin >> input;
	if (input > 3)
	{
		input++;
		std::cout << input;
	}
	else
	{
		input--;
		std::cout << input;
	}
}

//문제 11번
//숫자 1개를 변수 num에 입력 받습니다.
//숫자가 양수라면
//###          
//###
//###        
//위와 같이 #을 출력하고,
//숫자가 음수라면
//$$$
//$$$
//위와 같이 $를 출력 해주세요.
//숫자가 0이라면 아무것도 출력하지 않습니다.
//입력 예시
//3
//출력 예시
//###
//###
//###

#include <iostream>

int main()
{
	int num;
	std::cin >> num;
	if (num > 0)
	{
		int i;
		for (i = 0; i > 3; i++)
		{
			std::cout << "###";
		}
	}
	else if (num < 0)
	{
		int o;
		for (o = 0; o > 2; o++)
		{
			std::cout << "$$$";
		}
	}
	else
	{
		std::cout << "";
	}
}

//문제 12번
//숫자 3개를 입력 받으세요.
//세 수의 합이 세 수의 곱보다 크거나 같다면 "행운의 수" 출력
//아니면 "소소한 수" 출력
//입력 예시
//1 2 3
//출력 예시
//행운의 수

#include <iostream>

int main()
{
	int a;
	int b;
	int c;
	std::cin >> a;
	std::cin >> b;
	std::cin >> c;
	if (a + b + c >= a * b * c)
	{
		std::cout << "행운의 수";
	}
	else
	{
		std::cout << "소소한 수";
	}
}

//문제 13번
//다음과 같이 출력 해 주세요
//힌트 : 쌍따옴표는 \" 를 사용해서 출력하시면 됩니다.
//출력 예시
//WWW."LJJ"CODING.CO.KR

#include <iostream>

int main()
{
	std::cout << "WWW.\"LJJ\"CODING.CO.KR";
}

//문제 14번
//숫자 두개를 입력 받아주세요.
//만약 두 숫자가 같다면
//같습니다.를 출력 해주세요.
//다르다면
//다릅니다.를 출력 해주세요.
//입력 예시
//5 5
//출력 예시
//같습니다

#include <iostream>

int main()
{
	int a;
	int b;
	std::cin >> a;
	std::cin >> b;
	if (a == b)
	{
		std::cout << "같습니다.";
	}
	else
	{
		std::cout << "다릅니다.";
	}
}

//문제 15번
//숫자 3개를 입력 받으세요
//그리고 아래와 같이 출력 해 주세요
//입력 예시
//3 6 9
//출력 예시
//첫번째 숫자는 3 입니다.
//두번째 숫자는 6 입니다.
//세번째 숫자는 9 입니다.

#include <iostream>

int main()
{
	int a;
	int b;
	int c;
	std::cin >> a;
	std::cin >> b;
	std::cin >> c;
	std::cout << "첫번째 숫자는 " << a << " 입니다.\n";
	std::cout << "두번째 숫자는 " << b << " 입니다.\n";
	std::cout << "세번째 숫자는 " << c << " 입니다.";
}

//문제 16번
//숫자 4개 a, b, c, d를 입력받아주세요
//a + b를 먼저 출력하고
//c + d를 출력 해주세요
//그리고 a + b + c + d의 값을 출력 해 주세요
//입력 예시
//2 4 5 10
//출력 예시
//a + b = 6
//c + d = 15
//ALL SUM = 21

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
	std::cout << "a + b = " << a + b << "\n";
	std::cout << "c + d = " << c + d << "\n";
	std::cout << "ALL SUM = " << a + b + c + d;
}

//문제 17번
//숫자 3개를 변수 a, b, c 에 입력 받으세요.
//세 숫자가 같으면 "만세"를 출력 하고,
//세 숫자가 같지 않으면 아무것도 출력하지 않습니다.
//입력 예시
//1 1 1
//출력 예시
//만세

#include <iostream>

int main()
{
	int a;
	int b;
	int c;
	std::cin >> a;
	std::cin >> b;
	std::cin >> c;
	if (a == b && a == c && b == c)
	{
		std::cout << "만세";
	}
}

//문제 18번
//숫자 4개를 변수 b1, b2, b3, b4 에 입력 받아주세요.
//만약 b1 >= b2 이고, b1 >= b3 이고, b1 >= b4 이면 b1이 가장 크다 라고 출력하세요.
//b1이 가장 크지 않다면 아무것도 출력하지 마세요.

#include <iostream>

int main()
{
	int b1;
	int b2;
	int b3;
	int b4;
	std::cin >> b1;
	std::cin >> b2;
	std::cin >> b3;
	std::cin >> b4;
	if (b1 >= b2 && b1 >= b3 && b1 >= b4)
	{
		std::cout << "b1이 가장 크다.";
	}
}

//문제 19번
//변수 4개를 선언하고 숫자 4개를 입력 받으세요
//평균을 구하고, 입력받은 숫자들이 평균보다 큰지 / 같은지 / 작은지 비교 해 주세요.
//예로들어 10 11 12 13 을 입력 했을 때,
//평균은 11 이므로(소수점은 자동으로 버려집니다) 출력결과는 다음과 같습니다.
//10 < 11
//11 == 11
//12 > 11
//13 > 11
//입력 예시
//3 4 5 6
//출력 예시
//3 < 4
//4 == 4
//5 > 4
//6 > 4

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
	int e = (a + b + c + d) / 4;
	if (a < e)
	{
		std::cout << a << "<" << e << "\n";
	}
	else if (a > e)
	{
		std::cout << a << ">" << e << "\n";
	}
	else
	{
		std::cout << a << "=" << e << "\n";
	}
	if (b < e)
	{
		std::cout << b << "<" << e << "\n";
	}
	else if (b > e)
	{
		std::cout << b << ">" << e << "\n";
	}
	else
	{
		std::cout << b << "=" << e << "\n";
	}
	if (c < e)
	{
		std::cout << c << "<" << e << "\n";
	}
	else if (c > e)
	{
		std::cout << c << ">" << e << "\n";
	}
	else
	{
		std::cout << c << "=" << e << "\n";
	}
	if (d < e)
	{
		std::cout << d << "<" << e << "\n";
	}
	else if (d > e)
	{
		std::cout << d << ">" << e << "\n";
	}
	else
	{
		std::cout << d << "=" << e << "\n";
	}
}

//문제 20번
//숫자 2개를 입력 받습니다.
//그리고 숫자 2개의 값 차이가 5보다 더 차이가 나면 "멀다."를 출력
//아니면 "가깝다"를 출력 해주세요.
//(항상 첫번째 숫자가 두번째 숫자보다 더 큽니다.)
//입력 예시
//7 4
//출력 예시
//가깝다.

#include <iostream>

int main()
{
	int a;
	int b;
	std::cin >> a;
	std::cin >> b;
	if (a > b + 5)
	{
		std::cout << "멀다.";
	}
	else
	{
		std::cout << "가깝다.";
	}
}

//문제 21번
//숫자 2개 입력 받고, 합과 곱을 구하세요.
//그리고 합이 10보다 크면 "합만세" 출력
//그리고 곱이 10보다 크면 "곱만세" 출력
//입력 예시
//3 6
//출력 예시
//곱만세

#include <iostream>

int main()
{
	int a;
	int b;
	std::cin >> a;
	std::cin >> b;
	int c = a + b;
	int d = a * b;
	if (c > 10)
	{
		std::cout << "합만세\n";

	}
	if (d > 10)
	{
		std::cout << "곱만세";
	}
}

//문제 22번
//숫자 7개를 입력받아주세요
//그리고 마지막으로 입력받은 숫자 4개만 출력하는 프로그램을 작성 해주세요.
//[힌트]
//띄어쓰기 출력 방법
//a = 1;
//b = 2;
//c = 3;
//cout << a << " " << b << " " << c;
//입력 예시
//7 6 5 4 3 2 1
//출력 예시
//4 3 2 1

#include <iostream>

int main()
{
	int a;
	int b;
	int c;
	int d;
	int e;
	int f;
	int g;
	std::cin >> a;
	std::cin >> b;
	std::cin >> c;
	std::cin >> d;
	std::cin >> e;
	std::cin >> f;
	std::cin >> g;
	std::cout << d << " " << e << " " << f << " " << g;
}

//문제 23번
//반복 3회
//std::cout << "#";
//위와 같이 코딩하면 #이 3회 출력 됩니다.
//이것을 소스코드로 표현하면 아래와 같이 작성할 수 있습니다.
//for(x=0; x<3; x++)
//{
//	std::cout << "#";
//}
//위를 참고하여
//for문을 이용해 #을 총 10회 출력 하는 소스코드를 작성해주세요.(입력없음)

#include <iostream>

int main()
{
	int x;
	for (x = 0; x < 10; x++)
	{
		std::cout << "#";
	}
}