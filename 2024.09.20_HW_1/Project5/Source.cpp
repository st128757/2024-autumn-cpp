#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int n = 0;
	scanf_s("%d", &n);
	cout << "The next number for the number ";
	printf("%d", n);
	cout << " is ";
	printf("%d", n+1);
	cout << ".";
	cout << "\n";

	cout << "The previous number for the number ";
	printf("%d", n);
	cout << " is ";
	printf("%d", n - 1);
	cout << ".";

	return EXIT_SUCCESS;
}