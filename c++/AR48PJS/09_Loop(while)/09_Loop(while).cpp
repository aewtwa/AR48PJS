#include <iostream>



int main()
{
	//for (int i = 0; i < length; i++)
	//{
	//
	//}

	//while (조건)
	int x = 0;
	while (x < 10)
	{


		x++;
	}

	// while 문은 무한적으로 언제 끝날지 모르는
	// 작업을 반복할떄 사용한다.

	// for문은 횟수가 정해진 반복을 할때 사용한다.
	// while 문은 구조가 단수하며, while문 안/밖 에다가 조건들을
	// 적어줘야 문제없이 반복이 실행된다.
	int a = 1;
	while (a < 10)
	{
		if (a == 5)
		{
			break;
			// break 가장 가까운 반복문 빠져나간다.
		}
		a++;
	}

	return 0;
}