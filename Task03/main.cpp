#include <iostream>

using namespace std;

int sum_all_elements(int* array, int size);


int main() {

	int array1[]{ 1,2,3,4,5,6,7,8,9 };
	int array2[]{ 1,2,3,4,5,6,7,8 };
	int array3[]{ 1 };

	cout << (sum_all_elements(array1, 9) == 45 ? "Pass" : "Fail") << endl;
	cout << (sum_all_elements(array2, 8) == 38 ? "Pass" : "Fail") << endl;
	cout << (sum_all_elements(array3, 1) == 1 ? "Pass" : "Fail") << endl;

	return 0;
}
