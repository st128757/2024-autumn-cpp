#include<iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	std::cin >> n;
	int* a = (int*)malloc(n * sizeof(int));

	for (int i = 0; i < n; ++i)
	{
		std::cin >> *(a + i);
	}

	int mini = 0;
	for (int i = 0; i < n; ++i)
	{
		if (*(a + i) < *(a + mini))
		{
			mini = i;
		}
	}

	for (int i = mini; i < n; ++i)
	{
		std::cout << *(a + i) << " ";
	}
	for (int i = 0; i < mini; ++i)
	{
		std::cout << *(a + i) << " ";
	}

	return 0;
}