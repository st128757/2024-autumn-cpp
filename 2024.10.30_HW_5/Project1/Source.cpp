#include<iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	std::cin >> n;
	int* a = new int[n];

	for (int i = 0; i < n; ++i)
	{
		std::cin >> *(a + i);
	}

	int mem1 = 0;
	for (int i = 0; i < n; ++i)
	{
		if (*(a + i) % 2 == 1)
		{
			std::cout << *(a + i) << " ";
			++mem1;
		}
	}
	std::cout << "\n";

	int mem2 = 0;
	for (int i = 0; i < n; ++i)
	{
		if (*(a + i) % 2 == 0)
		{
			std::cout << *(a + i) << " ";
			++mem2;
		}
	}
	std::cout << "\n";

	if (mem2 >= mem1)
	{
		std::cout << "YES";
	}
	else
	{
		std::cout << "NO";
	}

	return 0;
}