#include <iostream>
using namespace std;

void DtoH(int n)
{
	char c[100];
	int i = 0;
	while (n != 0) {
		int temp = 0;
		temp = n % 16;

		if (temp < 10) {
			c[i] = temp + 48;
			i++;
		}
		else {
			c[i] = temp + 55;
			i++;
		}

		n = n / 16;
	}

	for (int j = i - 1; j >= 0; j--)
		cout << c[j];
}

int main()
{
	int n;
    cin >> n;

	DtoH(n);

	return 0;
}