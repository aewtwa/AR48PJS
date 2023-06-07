// 26_Tree.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>


// Tree
// 단방향 그래프
// Cycle이 없어야한다.
// 부모자식 구조를 뛰게된다.


// 배열을 이용한 트리 표현(인접행렬)
int matrix[5][5] =
{
    0,1,1,0,0,
    0,0,0,1,1,
    0,0,0,0,0,
    0,0,0,0,0,
    0,0,0,0,0,
};

int matrixGraph[5][5] =
{
    0,1,0,0,0,
    0,0,1,1,0,
    0,0,0,0,0,
    1,0,0,0,1,
    0,0,0,0,0,
};

char valueGr[10] = "TEQWA";
char value[10] = "TBECD";
char path[10] = "";
int visited[10] = {};

void dfs(int now)
{
    std::cout << valueGr[now];

    for (size_t i = 0; i < 5; i++)
    {
        if (matrixGraph[now][i] == 1
            && visited[i] == 0)
        {
            visited[i] = 1;
            dfs(i);
        }
    }
}


void dfs(int level, int now)
{
    std::cout << value[now];

    for (size_t i = 0; i < 5; i++)
    {
        if (matrix[now][i] == 1)
        {
            path[level + 1] = value[i];
            dfs(level + 1, i);
            path[level + 1] = 0;
        }
    }
}



int main()
{
    dfs(0, 0);

    std::cout << std::endl;

    visited[0] = 1;
    dfs(0);

    return 0;
}