#include<iostream>

using namespace std;

int main(int argc, char* argv[])
{
	int n = 0;
	scanf_s("%d", &n);
	printf("The next number for the number %d is %d.", n, n + 1);
	cout << "\n";
	printf("The previous number for the number %d is %d.", n, n - 1);

	return EXIT_SUCCESS;
}