//문제 1번
//
//출력 예시
//HELLO WORLD

#include <iostream>
using namespace std;

int main()
{
	std::cout << "HELLO WORLD";

	return 0;
}

//문제 2번
//다음과 같이 출력 해주세요.
//출력 예시
//@@@@

#include <iostream>
using namespace std;

int main()
{
	std::cout << "@@@@";

	return 0;
}

//문제 3번
//다음과 같이 출력 해주세요.
//출력 예시
//123###456

#include <iostream>
using namespace std;

int main()
{
	std::cout << "123###456";

	return 0;
}

//문제 4번
//다음과 같이 출력 해주세요.
//출력 예시
//CODING
//##   ##

#include <iostream>
using namespace std;

int main()
{
	std::cout << "CODING\n";
	std::cout << "##   ##";

	return 0;
}

//문제 5번
//아래와 같이 출력 해주세요.
//출력 예시
//5 4 3 2 1 GO!

#include <iostream>
using namespace std;

int main()
{
	std::cout << "5 4 3 2 1 GO!";

	return 0;
}

//문제 6번
//변수를 하나 만들고, 변수에 값으로 5를 넣어주세요.
//그리고 그 변수값을 출력 해주세요.
//출력예시
//5

#include <iostream>
using namespace std;

int main()
{
	int a = 5;
	std::cout << a;

	return 0;
}

//문제 7번
//변수 t를 만들고, 변수값 5를 넣어주세요
// 그리고 아래와 같이 출력 해주세요.
//출력 예시
//t에서 1씩 증가=5 6 7
//t에서 2씩 감소=5 3 1

#include <iostream>
using namespace std;

int main()
{
	int t = 5;
	std::cout << "t에서 1씩 증가=";
	std::cout << t << " " << t + 1 << " " << t + 2;
	std::cout << "\n";;
	std::cout << "t에서 2씩 감소=";
	std::cout << t << " " << t - 2 << " " << t - 4;
}

//문제 8번
//a, b, c 변수 3개를 만들어 주세요.
//그리고 아래 그림처럼 변수에 값을 채우고 출력 해주세요.
//출력 예시
//a, b, c 값은 각각 a는 5, b는 -1, c는 2 입니다.

#include <iostream>
using namespace std;

int main()
{
	int a = 5;
	int b = -1;
	int c = 2;
	std::cout << "a, b, c 값은 각각 a는 ";
	std::cout << a;
	std::cout << ", b는 ";
	std::cout << b;
	std::cout << ", c는 ";
	std::cout << c;
	std::cout << " 입니다.";
}

//문제 9번
//변수 a와 b를 만들고, 각각 a에는 7을 b에는 2를 넣어주세요.
//그리고 a와 b의 합과 차를 출력 해주세요.
//출력 예시
//a+b=9
//a-b=5

#include <iostream>
using namespace std;

int main()
{
	int a = 7;
	int b = 2;

	std::cout << "a+b=" << a + b << "\n";
	std::cout << "a-b=" << a - b;
}

//문제 10번
//변수 k와 g를 선언하고, k에는 8을 g에는 4를 채워주세요.
//그리고 두 변수를 곱한 값과 나눈 값을 아래와 같이 출력 해주세요.
//출력 예시
//8*4=32
//8/4=2

#include <iostream>
using namespace std;

int main()
{
	int k = 8;
	int g = 4;

	std::cout << "8*4=" << k * g << "\n";
	std::cout << "8/4=" << k / g;
}

//문제 11번
//변수 a, b, c, d 를 선언해 주세요.
//변수값 3, 5, 3, 4를 순서대로 아래와 같이 넣어주세요.
//수식 ((a+b)*c)/d 의 값을 출력해 주세요.
//출력 예시
//6

#include <iostream>
using namespace std;

int main()
{
	int a = 3;
	int b = 5;
	int c = 3;
	int d = 4;

	std::cout << ((a + b) * c) / d;
}

//문제 12번
//변수 a를 선언해주세요.
//변수 a에 8을 넣어주세요.
//a를 5번 곱한 값, a의 5승의 값을 출력해 주세요.
//출력 예시
//32768

#include <iostream>
using namespace std;

int main()
{
	int a = 8;

	std::cout << a * a * a * a * a;
}

//문제 13번
//아래의 소스코드를 Visual Studio에 복사 해 주세요.
//그리고 F10을 눌러 트레이스 연습을 해 주시면 됩니다.
//특히 조사식에는 변수 a를 등록해서 a값이 어떻게 변하는지 확인 해 보셔야 합니다.
//트레이스의 단축키 : F10
//트레이스 종료 단축키 : Shift + F5

#include <iostream>
using namespace std;

int main()
{
	int a;

	a = 8; //이 줄이 끝나면 a는 8

	std::cout << a; //a의 값 출력

	a = a + 1; //9
	a++; //10

	a = 3; //3

	a = a + 1; //4
	a++; //5

	std::cout << "a값은 : " << a << endl;

	a = a + 1; //6
	a++; //7

	std::cout << "마지막 a값은 : " << a << endl;

	return 0;
}

//문제 14번
//변수 a를 선언해 주세요.
//변수값 8을 a에 넣어주세요.
//a = a + 1, a++ 를 적절히 이용하여
//a를 12로 만들어 주시면 됩니다.
//출력 예시
//12

#include <iostream>
using namespace std;

int main()
{
	int a = 8;
	a++;
	a++;
	a++;
	a++;
	std::cout << a;
}

//문제 15번
//40초 안에 아래 소스코드를 작성해주세요!(타자연습)
//*비주얼 스튜디오에서 연습하시면 됩니다.

#include <iostream>
using namespace std;

int main()
{
	int x = 10;

	cout << x << endl;

	return 0;
}

//문제 16번
//아래의 그림과 같이 출력 해 주세요
//5앞에는 띄어쓰기 한칸
//8앞에는 띄어쓰기 두칸
//0앞에는 띄어쓰기 세칸이 있습니다.
//1234
// 567
//  89
//   0

#include <iostream>
using namespace std;

int main()
{
	std::cout << "1234" << endl;
	std::cout << " 567" << endl;
	std::cout << "  89" << endl;
	std::cout << "   0";
}

//문제 17번
//다음과 같이 출력 해 주세요
//출력 예시
//158% 입니다.

#include <iostream>
using namespace std;

int main()
{
	std::cout << "158% 입니다.";
}

//문제 18번
//변수 q, w, e를 선언하고 아래와 같이 값을 채워주세요.
//값을 채운 후 아래와 같이 화면에 보이도록 출력 해주세요.
//출력 예시
//#q=1, 1, 1
//#w=2, 2, 2
//#e=3, 3, 3

#include <iostream>
using namespace std;

int main()
{
	int q = 1;
	int w = 2;
	int e = 3;
	std::cout << "#q=" << q << ", " << q << ", " << q << endl;
	std::cout << "#w=" << w << ", " << w << ", " << w << endl;
	std::cout << "#e=" << e << ", " << e << ", " << e << endl;
}

//문제 19번
//변수 a를 만들고, 변수값 10을 넣어주세요.
//그리고 아래와 같이 출력 해주세요.
//출력 예시
//a의 값은 10입니다.

#include <iostream>
using namespace std;

int main()
{
	int a = 10;
	std::cout << "a의 값은 " << a << "입니다.";
}

//문제 20번
//bbq라는 변수에 숫자 5를 넣어주세요.
//그리고 아래와 같이 출력 해 주세요.
//<주의>
//띄어쓰기가 한글자라도 틀리면 오답으로 처리 됩니다!
//출력 예시
//bbq의 값은 5입니다.

#include <iostream>
using namespace std;

int main()
{
	int bbq = 5;
	std::cout << "bbq의 값은 " << bbq << "입니다.";
}

//문제 21번
//a, b, c, g, h 변수를 만들어주세요.
//그리고 a에는 40, b에는 60, c에는 10을 채워 줍니다.
//g에는 a와 c를 더한 값을
//h에는 b에서 c를 뺀 값을 넣어주세요.
//그리고 변수 g와 h를 출력 합니다.
//출력 예시
//50
//50

#include <iostream>
using namespace std;

int main()
{
	int a = 40;
	int b = 60;
	int c = 10;
	int g = a + c;
	int h = b - c;
	std::cout << g << endl;
	std::cout << h;
}

//문제 22번
//변수 a, b를 만들어 주세요.
//변수값 10과 3을 아래와 같이 넣어 주세요.
//두 수를 곱한 값과 나눈 값을 출력해 주시면 됩니다.
//<주의>
//띄어쓰기를 꼭 확인해 주세요!
//출력 예시
//10 * 3 = 30
//10 / 3 = 3

#include <iostream>
using namespace std;

int main()
{
	int a = 10;
	int b = 3;

	std::cout << "10 * 3 = " << a * b << endl;
	std::cout << "10 / 3 = " << a / b;
}

//문제 23번
//변수 a, b, c, d 를 선언해 주세요.
//변수값 3, 2, 6, 2를 순서대로 아래와 같이 넣어주세요.
//수식(a + b) * (c / d) 의 값을 출력해 주세요.
//출력 예시
//15

#include <iostream>
using namespace std;

int main()
{
	int a = 3;
	int b = 2;
	int c = 6;
	int d = 2;
	std::cout << (a + b) * (c / d);
}

//문제 24번
//변수 a, b, c, d 를 선언해 주세요.
//변수값 3, 3, 8, 3을 순서대로 아래와 같이 넣어주세요.
//수식(a * b) + (c * d) 의 값을 출력해 주세요.
//출력 예시
//33

#include <iostream>
using namespace std;

int main()
{
	int a = 3;
	int b = 3;
	int c = 8;
	int d = 3;
	std::cout << (a * b) + (c * d);
}