#include <iostream>

void isSame(char* _a, char* _b)
{
    int flag = 0;
    int same = 0;
    for (size_t i = 0; i < 256; i++)
    {
        for (size_t j = i; j < 256; j++)
        {
            if (_a[i] == '\0')
            {
                flag = 1;
                break;
            }
            if (_a[i] == _b[j])
            {
                same = 1;
                break;
            }
            else
            {
                same = 0;
                flag = 1;
                break;
            }
        }
        if (flag == 1)
        {
            break;
        }
    }
    if (same == 1)
    {
        std::cout << "동명";
    }
    else
    {
        std::cout << "남남";
    }
}

int main()
{
    char a[256] = {};
    std::cin >> a;
    char b[256] = {};
    std::cin >> b;
    isSame(a, b);
}