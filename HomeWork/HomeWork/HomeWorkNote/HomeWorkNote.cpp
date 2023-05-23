#include <iostream>

int main()
{
    char map[5][5] =
    {
        'A','B','C','D','E',
        'F','G','H','I','J',
        'K','L','M','N','O',
        'P','Q','R','S','T',
        'U','V','W','X','Y'
    };
    int y = 0;
    int x = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (map[i][j] == 'M')
            {
                y = i;
                x = j;
            }
        }
    }
    char a = 0;
    std::cin >> a;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (map[i][j] == a)
            {
                std::cout << i - y << "," << j - x;
            }
        }
    }
}