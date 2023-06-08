#include <iostream>
#include <queue>

struct Node
{
	int num;
	int level;
};

int n = 0;

int main()
{
	std::cin >> n;
	std::queue<Node> queue;

	int a = 1;
	int sum = 0;

	queue.push(Node{ 1, 0 });

	while (!queue.empty())
	{
		Node p = queue.front();
		sum = sum + p.num;
		if (p.level < n)
		{
			a = a * 3;
			queue.push(Node{a ,p.level+1});
		}

		queue.pop();
	}
	std::cout << sum;
}