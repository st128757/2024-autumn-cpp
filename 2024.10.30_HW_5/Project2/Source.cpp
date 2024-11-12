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

	int k = 0;
	std::cin >> k;
	int kk = k % n;
	if (k < 0)
	{
		kk += n;
	}

	int* b = new int[n];

	for (int i = 0; i < n; ++i)
	{
		*(b + (i + kk) % n) = *(a + i);
	}

	for (int i = 0; i < n; ++i)
	{
		std::cout << *(b + i) << " ";
	}

	return 0;
}