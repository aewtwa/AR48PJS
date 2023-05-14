//문제 1번
//4	3 6	1 3	1 5	3
//위와 같이 8칸짜리 배열을 하드코딩 해 주세요
//숫자 하나를 입력 받으세요
//그리고 입력받은 숫자가 몇개 존재하는지 출력 해 주세요
//입력 예시
//1
//출력 예시
//숫자1개수는2개

#include <iostream>

int main()
{
	int arr[8] = { 4,3,6,1,3,1,5,3 };
	int a;
	std::cin >> a;
	int count = 0;
	for (int i = 0; i < 8; i++)
	{
		if (arr[i] == a)
		{
			count++;
		}
	}
	std::cout << "숫자" << a << "의 개수는 " << count << "개";
}

//문제 2번
//아래 문자배열을 하드코딩 해 주세요
//A	B C	D E
//E	A B	A B
//A	C D	E R
//문자 하나를 입력받으세요
//입력받은 문자가 2차 배열에 3개이상(>= 3) 존재할 경우에는 "대발견" 출력
//입력받은 문자가 2차 배열에 1~2개 존재하는 경우 "발견" 출력
//0개라면 "미발견" 출력 해 주세요
//ex) 만약 B를 입력받았다면, B가 3개 존재하므로 "대발견"을 출력하시면 됩니다.
//입력 예시
//A
//출력 예시
//대발견

#include <iostream>

int main()
{
	char arr[3][5] =
	{
		{'A','B','C','D','E'},
		{'E','A','B','A','B'},
		{'A','C','D','E','R'}
	};
	char a;
	std::cin >> a;
	int count = 0;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			if (arr[i][j] == a)
			{
				count++;
			}
		}
	}
	if (count >= 3)
	{
		std::cout << "대발견";
	}
	else if (1 <= count && count <= 2)
	{
		std::cout << "발견";
	}
	else if (count == 0)
	{
		std::cout << "미발견";
	}
}

//문제 3번
//다음 6칸짜리 배열을 하드코딩 해 주세요
//A	F G	A B	C
//문자 2개를 입력 받으세요.
//입력받은 문자 2개 모두 존재하면 "와2개" 출력
//입력받은 문자 중 1개만 존재하면 "오1개" 출력
//입력받은 문자가 하나도 없으면 "우0개" 출력
//[HINT1] count1, count2 변수를 2개 만드세요
//그리고 for문을 돌려 찾는 숫자가 발견될 때 마다 counting을 해 주세요.
//count에 1 이상 값이 들어있으면, 그 숫자가 배열에 존재한다는 뜻 입니다.
//입력 예시
//Z A
//출력 예시
//오1개

#include <iostream>

int main()
{
	char arr[6] = { 'A','F','G','A','B','C' };
	char a;
	std::cin >> a;
	char b;
	std::cin >> b;
	int count1 = 0;
	int count2 = 0;
	for (int i = 0; i < 6; i++)
	{
		if (arr[i] == a)
		{
			count1++;
		}
		if (arr[i] == b)
		{
			count2++;
		}
	}
	if (count1 != 0 && count2 != 0)
	{
		std::cout << "와2개";
	}
	else if (count1 != 0 || count2 != 0)
	{
		std::cout << "오1개";
	}
	else if (count1 == 0 && count2 == 0)
	{
		std::cout << "우0개";
	}
}

//문제 4번
//6칸짜리 배열을 하드코딩 해 주세요
//3	4 2	5 7	9
//그리고 index 2개를 변수 a, b에 입력받아주세요(숫자 2개를 입력받으세요)
//a와 b index에 있는 배열값을 SWAP 하신 후
//배열을 전체 출력하시면 됩니다.
//ex)만약 0 1을 입력받았다면 0번 index값과 1번 index값을 SWAP(교체) 하여
//4 3 2 5 7 9 를 출력하시면 됩니다.
//[HINT] 변수 a와 변수 b를 SWAP 하는 방법
//temp라는 변수를 하나 더 만든 후
//temp = a;
//a = b;
//b = temp;
//입력 예시
//0 4
//출력 예시
//7 4 2 5 3 9

#include <iostream>

int main()
{
	int arr[6] = { 3,4,2,5,7,9 };
	int a = 0;
	std::cin >> a;
	int b = 0;
	std::cin >> b;
	int c = 0;
	c = arr[a];
	arr[a] = arr[b];
	arr[b] = c;
	for (int i = 0; i < 6; i++)
	{
		std::cout << arr[i] << " ";
	}
}

//문제 5번
//int x, int y가 들어가 있는 구조체 ABC를 정의하고,
//ABC 구조체 변수 t를 선언 해 주세요
//t.x와 t.y에 두 수를 입력받고 합을 출력 해 주세요
//[HINT] 구조체란 여러 변수들을 묶은 새로운 Type을 만드는 것입니다.
//우리가 흔히 쓰는 Type은 int type / char type이 있습니다.
//이런 변수 Type들을 한 덩어리로 묶어버리는 새로운 Type을 구조체라고 합니다.
//구조체를 쓰기 위해서는
//1. 구조체를 정의한다
//2. 구조체 변수를 선언한다
//이렇게 두 단계로 이루어집니다.
//먼저 ABC라는 구조체를 정의하는 방법
//struct ABC
//{
//	int x;
//	int y;
//};
//이제 ABC라는 새로운 Type을 만들었습니다.
//이 새로운 Type으로 된 변수를 만들어야 합니다.
//ABC t;   //이제 t라는 구조체 변수가 만들어 졌습니다.
//ex) 사용방법
//t.x = 1;
//t.y = 2;
//입력 예시
//3 5
//출력 예시
//8

#include <iostream>

struct ABC
{
	int x = 0;
	int y = 0;
};

int main()
{
	ABC t = {};
	std::cin >> t.x;
	std::cin >> t.y;
	std::cout << t.x + t.y;
}

//문제 6번
//3 x 3 배열에 A ~I까지 값을 2중 for문을 돌려 채워주세요
//(하드코딩이 아닙니다!2중 for문을 돌려야 합니다.)
//A	B C
//D	E F
//G	H I
//그리고 y, x좌표 2 쌍을 입력받아주세요(숫자4개 입력)
//그리고 2개의 좌표의 값을 서로 SWAP해주시면 됩니다.
//입력 예시
//0 0
//1 1
//출력 예시
//EBC
//DAF
//GHI

#include <iostream>

int main()
{
	char arr[3][3] = {};
	char a = 'A';
	int y1;
	std::cin >> y1;
	int x1;
	std::cin >> x1;
	int y2;
	std::cin >> y2;
	int x2;
	std::cin >> x2;

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			arr[i][j] = a;
			a++;
		}
	}
	char c = arr[y1][x1];
	arr[y1][x1] = arr[y2][x2];
	arr[y2][x2] = c;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{

			std::cout << arr[i][j] << " ";
		}
		std::cout << "\n";
	}
}

//문제 7번
//3	4
//2	6
//7	1
//2	8
//1	9
//1	2
//학생들이 6x2 배열에 두명씩 짝을 지어서 6줄로 앉아있습니다. (학생의 상태를 입력 받으면 됩니다)
//선생님은 짝꿍 끼리 숫자를 비교했을 때, 숫자가 더 큰 사람이 왼쪽에 앉히려고 합니다.
//1. 선생님의 지시에 따라 SWAP을 한 후 배열을 출력해주세요
//2. 그리고 자리를 교체한 사람이 총 몇사람인지 출력 해 주세요
//[TIP]
//1중 for문으로 풀면 됩니다!(6번 반복)
//그리고 table[x][0] 과 table[x][1]을 비교하여 SWAP한 후
//SWAP할때마다 Counting 해보시면 됩니다.
//입력 예시
//3 4
//2 6
//7 1
//2 8
//1 9
//1 2
//출력 예시
//4 3
//6 2
//7 1
//8 2
//9 1
//2 1
//5명

#include <iostream>

void swap(int* _A, int* _B)
{
	int c = *_A;
	*_A = *_B;
	*_B = c;
}

int main()
{
	int arr[6][2] = {};
	int count = 0;
	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			std::cin >> arr[i][j];
		}
	}
	for (int i = 0; i < 6; i++)
	{
		if (arr[i][0] < arr[i][1])
		{
			swap(&arr[i][0], &arr[i][1]);
			count++;
		}
	}
	for (int i = 0; i < 6; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			std::cout << arr[i][j] << " ";
		}
		std::cout << "\n";
	}
	std::cout << count << "명";
}

//문제 8번
//main함수 에서 2개의 숫자를 입력 받아 주세요.
//입력 받은 두 숫자를 BBQ 함수로 보내 주세요.
//BBQ 함수 안에서 두 개의 숫자의  합, 차, 곱, 몫의 값을 구하여 출력 해 주세요.
//입력 예시
//6 3
//출력 예시
//합 : 9
//차 : 3
//곱 : 18
//몫 : 2

#include <iostream>

void BBQ(int _A, int  _B)
{
	std::cout << "합:" << _A + _B << "\n";
	std::cout << "차:" << _A - _B << "\n";
	std::cout << "곱:" << _A * _B << "\n";
	std::cout << "몫:" << _A / _B;
}

int main()
{
	int a;
	std::cin >> a;
	int b;
	std::cin >> b;
	BBQ(a, b);
}

//문제 9번
//아래의 2x3배열을 전역으로 선언 해 주고, 하드 코딩 해 주세요.
//F E W
//D C A
//main 함수에서 문자 하나를 입력 받고,
//findCh 함수로 입력 받은 문자를 보내주세요.
//findCh 함수에서는 전달받은 문자가 전역 배열에 존재하는지
//counting을 이용해서 알아낸 뒤, 존재 여부를 출력 해 주세요.
//발견 또는 미발견을 출력하면 됩니다.
//입력 예시
//W
//출력 예시
//발견

#include <iostream>

char arr[2][3] =
{
	{'F','E','W'},
	{'D','C','A'}
};
int count = 0;

void findCh(char _A)
{
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (arr[i][j] == _A)
			{
				count++;
			}
		}
	}
	if (count == 1)
	{
		std::cout << "발견";
	}
	else
	{
		std::cout << "미발견";
	}
}

int main()
{
	char a;
	std::cin >> a;
	findCh(a);
}

//문제 10번
//5개 문자를 배열에 입력 받아주세요.
//for문으로 배열을 탐색을 하며
//한 글자씩 checkChar함수로 보내주세요
//(for문 안에 checkChar 함수호출 소스코드를 넣으면 됩니다)
//checkChar() 함수는 한 글자를 받아서
//대문자인지, 소문자인지 구분해 주는 함수입니다.
//전달 받은 글자가 대문자라면 "대"
//전달 받은 글자가 소문자라면 "소"
//를 출력하면 됩니다.
//입력 예시
//A y Q G r
//출력 예시
//대소대대소

#include <iostream>

void checkChar(char _A)
{
	if ('a' <= _A && _A <= 'z')
	{
		std::cout << "소";
	}
	else if ('A' <= _A && _A <= 'Z')
	{
		std::cout << "대";
	}
}

int main()
{
	char arr[5] = {};
	for (int i = 0; i < 5; i++)
	{
		std::cin >> arr[i];
		checkChar(arr[i]);
	}
}

//문제 11번
//Person이라는 구조체를 정의 해 주세요.
//이 구조체는 int age, int height 이렇게 두 변수값을 가지고 있습니다.
//그리고 Person 구조체 변수 a, b를 선언 해 주세요
//Input함수에서
//숫자 4개를 순서대로, 구조체변수 a.age, a.height, b.age, b.height에다가 입력 받아주세요.
//Output함수에서
//구조체변수 a와 b가 가지고 있는 age, height의 평균을 구해서 출력 해세요.
//(소수점은 버립니다)
//ex) 만약 50 60 70 80 을 입력받았다면
//두 사람 a와 b의 age 평균은(50 + 70) / 2 = 60
//두 사람 a와 b의 height 평균은(60 + 80) / 2 = 70
//따라서 정답은 60 70 입니다
//입력 예시
//70 80 50 60
//출력 예시
//60 70

#include <iostream>

struct Person
{
	int age;
	int height;
};

Person a = {};
Person b = {};

void input()
{
	std::cin >> a.age;
	std::cin >> a.height;
	std::cin >> b.age;
	std::cin >> b.height;
}

void output()
{
	std::cout << (a.age + b.age) / 2;
	std::cout << " ";
	std::cout << (a.height + b.height) / 2;
}

int main()
{
	input();
	output();
}

//문제 12번
//아래와같이 배열A와 배열B를 하드코딩 해 주세요
//배열A
//2	1 2	4 5
//배열B
//2	5 3
//4	5 7
//8	7 2
//숫자를 하나 입력받고
//배열 A와 배열 B를 뒤져서, 입력받은 숫자가 몇개 있는지 출력 해 주세요
//ex) 만약 숫자2를 입력받았다면,
//배열A에서는 2개를 발견할 수 있고, 배열B에서도 2개를 발견할 수 있으니 더해서
//4를 출력하시면 됩니다.
//입력 예시
//5
//출력 예시
//3

#include <iostream>

int main()
{
	int arr[5] = { 2,1,2,4,5 };
	int arr2d[3][3] =
	{
		{2,5,3},
		{4,5,7},
		{8,7,2}
	};
	int a;
	std::cin >> a;
	int count = 0;
	for (int i = 0; i < 5; i++)
	{
		if (arr[i] == a)
		{
			count++;
		}
	}
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (arr2d[i][j] == a)
			{
				count++;
			}
		}
	}
	std::cout << count;
}

//문제 13번
//문자 5개를 1차배열에 입력 받아주세요
//그리고 입력받은 문자 중, 문자 'A'가 몇개 존재하는지 counting해서 출력해주세요
//그런 후 문자 A의 index도 출력 해 주세요.
//ex) 만약 A b c d A 를 입력받았다면 이렇게 출력하시면 됩니다
//문자A는 2개발견
//0번
//4번
//입력 예시
//A b c d A
//출력 예시
//문자A는 2개발견
//0번
//4번

#include <iostream>

int main()
{
	char arr[5] = {};
	int count = 0;
	for (int i = 0; i < 5; i++)
	{
		std::cin >> arr[i];
		if (arr[i] == 'A')
		{
			count++;
		}
	}
	std::cout << "문자A는 " << count << "개 발견" << "\n";
	for (int i = 0; i < 5; i++)
	{
		if (arr[i] == 'A')
		{
			std::cout << i << "번" << "\n";
		}
	}
}


//문제 14번
//D	A A
//B	C D
//E	F A
//A	A D
//F	G E
//위 배열을 하드코딩 해 주세요
//그리고 문자 하나를 입력받아주세요.
//그 문자가 있는 곳의 좌표를 모두 출력하면 됩니다.
//입력 예시
//A
//출력 예시
//(0, 1)
//(0, 2)
//(2, 2)
//(3, 0)
//(3, 1)

#include <iostream>

int main()
{
	char arr2d[5][3] =
	{
		{'D','A','A'},
		{'B','C','D'},
		{'E','F','A'},
		{'A','A','D'},
		{'F','G','E'}
	};
	char a;
	std::cin >> a;
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (arr2d[i][j] == a)
			{
				std::cout << "(" << i << "," << j << ")";
				std::cout << "\n";
			}
		}
	}
}

//문제 15번
//10 3	20
//60 30	40
//20 30	40
//3x3 배열이 있습니다.
//이 배열을 하드코딩 해 주고, 숫자를 2개 입력받아주세요
//만약 변수 a와 b에다가 숫자를 입력받았다고 하면
//a 보다 같거나 크고
//b보다 같거나 작은
//값이 총 몇개인지 출력 해 주세요
//ex) 30 40을 입력했다면, 30 ~40 의 값이 몇개인지 세서 출력하면 됩니다.
//입력 예시
//30 40
//출력 예시
//4

#include <iostream>

int main()
{
	int arr2d[3][3] =
	{
		{10,3,20},
		{60,30,40},
		{20,30,40}
	};
	int a;
	std::cin >> a;
	int b;
	std::cin >> b;
	int count = 0;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (a <= arr2d[i][j] && arr2d[i][j] <= b)
			{
				count++;
			}
		}
	}
	std::cout << count;
}

//문제 16번
//input함수에서 문자 6개를 2 x 3 배열에 입력받아주세요(2중 for문 이용)
//findUpper함수에서 대문자가 몇개인지 세고 출력 해 주세요
//findLower함수에서 소문자가 몇개인지 세고 출력 해 주세요
//main함수에서는 input함수, findUpper함수, findLower함수를 각각 한번씩 호출하면 됩니다.
//입력 예시
//D F A B C e
//출력 예시
//대문자5개
//소문자1개

#include <iostream>

char arr2d[2][3];
void input()
{
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			std::cin >> arr2d[i][j];
		}
	}
}

void findUpper()
{
	int count = 0;
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if ('A' <= arr2d[i][j] && arr2d[i][j] <= 'Z')
			{
				count++;
			}
		}
	}
	std::cout << "대문자 " << count << "개" << "\n";
}

void findLower()
{
	int count = 0;
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if ('a' <= arr2d[i][j] && arr2d[i][j] <= 'z')
			{
				count++;
			}
		}
	}
	std::cout << "소문자 " << count << "개";
}

int main()
{
	input();
	findUpper();
	findLower();
}

//문제 17번
//3	5 14
//2	3 9
//6 2 7
//3x3 배열을 하드코딩 해 주세요
//그리고 숫자 1개를 입력받아주세요
//그 숫자의 배수가 몇개있는지 출력 해 주세요
//ex) 만약 7을 입력받았다면 7의 배수가 2개 있으므로 답은 2 입니다
//[TIP]
//몇 배수 인지 판단하는 방법은
//MOD 연산자(%)를 사용하면 됩니다.
//입력 예시
//3
//출력 예시
//4

#include <iostream>

int main()
{
	int arr2d[3][3] =
	{
		{3,5,14},
		{2,3,9},
		{6,2,7}
	};
	int a;
	std::cin >> a;
	int count = 0;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			int mod = arr2d[i][j] % a;
			if (mod == 0)
			{
				count++;
			}
		}
	}
	std::cout << count;
}

//문제 18번
//PROJECT 라는 구조체를 정의 해 주세요
//PROJECT 안에는 다음과 같은 변수들을 묶습니다.
//- int num;
//-char id;
//-int vect[4];
//그리고 PROJECT 타입의 구조체 변수 z를 하나 만들어주세요.
//이제 0보다 큰 숫자 하나를 입력받아주세요.
//만약 한자리 수를 입력 받았다면 z에 다음 값을 채워주세요
//num : 5 / id : 'G' / vect : {1, 2, 3, 4}
//만약 두자리 수를 입력 받았다면 z에 다음 값을 채워주세요
//num : 8 / id : 'T' / vect : {5, 1, 2, 3}
//만약 세자리 수 '이상'이면 z에 다음 값을 채워주세요
//num : 10 / id : 'Q' / vect : {9, 1, 6, 2}
//이제 z.num과 z.id값과 z.vect값을 모두 출력해주세요
//[힌트]
//배열에 다음과 같이 숫자를 넣는 것은 불가능합니다.
//int vect[5];
//vect[5] = { 1, 2, 3, 4 };   Runtime Error
//한꺼번에 숫자를 넣는 것은 배열 만들때만 가능합니다.
//int vect[5] = { 1, 2, 3, 4 };   가능
//배열을 만들고 난 뒤에는 숫자를 하나씩 넣어줘야 합니다.
//int vect[5];
//vect[0] = 1;
//vect[1] = 2;
//vect[2] = 3;
//vect[4] = 4;
//입력 예시
//10
//출력 예시
//8
//T
//5 1 2 3

#include <iostream>

struct PROJECT
{
	int num;
	char id;
	int vect[4];
};

int main()
{
	PROJECT z = {};
	int a;
	std::cin >> a;
	if (1 <= a && a <= 9)
	{
		z.num = 5;
		z.id = 'G';
		z.vect[0] = 1;
		z.vect[1] = 2;
		z.vect[2] = 3;
		z.vect[3] = 4;
	}
	else if (10 <= a && a <= 99)
	{
		z.num = 8;
		z.id = 'T';
		z.vect[0] = 5;
		z.vect[1] = 1;
		z.vect[2] = 2;
		z.vect[3] = 3;
	}
	else if (100 <= a)
	{
		z.num = 10;
		z.id = 'Q';
		z.vect[0] = 9;
		z.vect[1] = 1;
		z.vect[2] = 6;
		z.vect[3] = 2;
	}
	std::cout << z.num << "\n"
		<< z.id << "\n" << z.vect[0] << z.vect[1] << z.vect[2] << z.vect[3];
}

//문제 19번
//먼저 숫자를 하나 입력 받아 주세요.
//입력 받은 숫자가 홀수라면
//숫자 하나 더 입력을 받은 후, 그 숫자를 BBQ에 보내주세요.
//입력 받은 숫자가 짝수라면
//문자 하나 더 입력을 받은 후, 그 문자를 KFC에 보내주세요.
//BBQ함수는
//1 ~전달받은 숫자 까지 출력하는 함수입니다.
//KFC함수는
//전달받은 문자를 7회 반복해서 출력하는 함수입니다.
//ex)
//[입력]
//7 // 홀수
//[출력결과]
//1234567
//입력 예시
//4
//A
//출력 예시
//AAAAAAA

#include <iostream>

void BBQ(int _a)
{
	for (int i = 1; i <= _a; i++)
	{
		std::cout << i;
	}
}

void KFC(int _a)
{
	for (int i = 0; i < 7; i++)
	{
		std::cout << _a;
	}
}

int main()
{
	int a;
	std::cin >> a;
	int mod = a % 2;
	if (mod == 1)
	{
		BBQ(a);
	}
	if (mod == 0)
	{
		KFC(a);
	}
}