bool binary_search(int* array, int value, int first, int last) {
	int mid = (first + last) / 2;
	if (array[mid] == value)
	{
		return true;
	}

	if (array[mid] > value)
	{
		last = mid - 1;
	}

	else
	{
		first = mid + 1;
	}

	return binary_search(array, value, first, last);
}


bool check_element(int* array, int size, int value) {
	return binary_search(array, value, 0, size - 1);
}