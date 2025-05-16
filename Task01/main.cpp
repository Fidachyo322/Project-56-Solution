#include <iostream>

using namespace std;

long long power(int, int);

int main() {

	int x;
	int n;

	cout << "Imput your number: ";
	cin >> x;

	do
	{
		cout << "Imput your n: ";
		cin >> n;
	} while (n < 0);

	cout << x << "^" << " = " << power(x, n) << endl;

	return 0;
}
