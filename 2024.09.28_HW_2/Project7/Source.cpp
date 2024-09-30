#include <cstdio>

int main(int argc, char* argv[]) {
	int k = 0;
	int m = 0;
	int n = 0;

	scanf_s("%d", &k);
	scanf_s("%d", &m);
	scanf_s("%d", &n);

	if (n / k == 0) {
		printf("%d", 2 * m);
	}
	else if (n % k != 0) {
		printf("%d", m * ((2 * n - 1) / k + 1));
	}
	else {
		printf("%d", 2 * m * (n / k));
	}

	return 0;
}