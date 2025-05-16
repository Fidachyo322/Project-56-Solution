#include <iostream>

using namespace std;

long long equals(int, int);

int main() {

	int first, second;

	cout << "Imput your first number: ";
	cin >> first >> second;

	do
	{
		cout << "Imput your second number: ";
		cin >> second;
	} while (second < 0);

	cout <<"Result: "<<(equals(first,second) ? "Yes" : "No") << endl;

	return 0;
}
