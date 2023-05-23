// 20_DynamicAllocate.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

int main()
{
	// 프로그램 실행시 크기가 정해져 있다. -> 정적 할당
	//char arr[256] = {};

	int* p = new int;
	*p = 99;
	
	delete p;

	// 그러면 해결책으로 우리가 원할때 크기를 정해서
	// 메모리에 할당하는 방법이 없을까? -> 동적할당

	int num = 10;
	//std::cin >> num;

	//char dynamicArr[num];
	{
		int* dynamicArr = (int*)malloc(sizeof(int) * num);

		//*dynamicArr
		for (size_t i = 0; i < 10; i++)
		{
			dynamicArr[i] = i + 1;
			//*(dynamicArr + i) = i + 1;
			std::cout << dynamicArr[i];
		}
		//new 뒤에 자료형의 크기
		/*while (true)
		{
			char* ppDynmaicArr = new char[num];

		}*/

		//free(dynamicArr);
		delete dynamicArr;


	}
	// int* 자동으로 형변환

	// 동적할당의 단점
	// 메모리를 직접 원하는 크기만큰 할당했죠?
	// 그러면 메모리를 프로그램이 종료되기전에 
	// 수동으로 직접 해제 해줘야한다.

	// 해제 해주지 않으면 memory leak 이 발생한다.


	return 0;
}

