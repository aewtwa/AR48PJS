#include <iostream>

// cout 내부 동작 원리 예시
void myCout(char* str)
{
	for (size_t i = 0; i < 256; i++)
	{
		if (str[i] == '\0')
			break;
		printf("%c", str[i]);
	}
}

int main()
{
	// 다 같은 0 이다
	//int num = 0;
	//num = NULL;
	//num = nullptr;
	//num = '\0';

	char ch = 'A';

	// 문자는 글자 한글자
	// 문자열은 두 글자 이상을 뜻함

	std::cout << "Hello World!";

	char vect[5] = { 'H','e','l','l','o' };

	// char 배열의 주소가 들어왔다. -> 문자열
	// std::cout << vect;

	// 문자열로 초기화 할 시에 배열의 끝부분에
	// '\0' 널 문자가 삽입된더.
	
	char str[6] = "Hello";
	std::cout << str;

	char str2D[3][256] =
	{
		"ABCDEF",
		"EFDSFEF",
		"EHDKEL"
	};

	std::cin >> &str2D[0][0]; // str2D[0] 같다
	std::cin >> str2D[1];
	std::cin >> str2D[2];

	char cmpA[256] = "HELLO";
	char cmpB[256] = "HELLT";


	if (cmpA == cmpB)
	{

	}

	int flag = 0;
	for (size_t i = 0; i < 256; i++)
	{
		if (cmpA[i] != cmpB[i])
		{
			flag = 1;
			break;
		}
	}

	char str[256] = "ELLY";


	// 문자열 길이 구하는 함수
	int len = strlen(str);

	char strA[256] = "ELLY";
	char strB[256] = "ELLY";

	//strcmp 같았을때 0을 반환한다.
	if (strcmp(strA, strB) == 0)
	{
		int a = 0;
	}


	// 복사
	char strTemp[256] = "";
	strcpy_s(strTemp, strA);

	//std::string temp = "Hello";
	//temp += " World";



	return 0;
}