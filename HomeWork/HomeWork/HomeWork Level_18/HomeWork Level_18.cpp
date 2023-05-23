//문제 1번
//cardList 배열에 여러종류의 카드가 있습니다.
//아래와 같이 카드를 입력받아주세요(한 문장을 입력받아주세요, 최대 15글자)
//DAT(Direct Address Table)을 이용하여 총 몇 종류의 카드가 있는지 count 해서 출력 해주세요.
//ABCDACABCDE
//출력: 5개
//입력 예제
//ABCDACABCDE
//출력 결과
//5개

#include <iostream>

int main()
{
	char cardlist[16] = {};
	std::cin >> cardlist;
	int arr[256] = {};
	for (size_t i = 0; i < 256; i++)
	{
		if (cardlist[i] == arr[i])
		{
			arr[i]++;
		}
	}
}

//문제 2번

#include <iostream>

int main()
{

}

//문제 3번

#include <iostream>

int main()
{

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