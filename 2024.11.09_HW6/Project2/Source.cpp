#include<iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	std::cin >> n;
	std::cout << sizeof(n) << "\n";
	int* res = nullptr;
	std::cout << res << "\n";
	if (n > 0)
	{
		res = (int*)malloc(sizeof(int) * n);
	}
	std::cout << res << "\n";
	std::cout << &n << " " << &res;

	return 0;
}