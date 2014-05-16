#include<iostream>
using namespace std;
bool binarySearch(int arr[], int key, int nElems);
int main() {

	int arr[100];
	int nElems;
	int searchKey;
	bool what;
	//initialize array elements
	for (int j = 0; j < 20; j++) {
		arr[j] = 10 + j;
	}
	searchKey = 23;
	nElems = 17;
	what = binarySearch(arr, searchKey, nElems);
	if (what)
		cout << "found";
	else
		cout << "not found";
	return 0;
}

bool binarySearch(int arr[], int key, int nElems) {
	int lowerBound;
	int upperBound;
	int currentIndex;
	lowerBound = 0;
	upperBound = nElems - 1;
	while (true) {
		currentIndex = (lowerBound + upperBound) / 2;
		if (arr[currentIndex] == key) {
			return 1;
		} else if (lowerBound > upperBound) {
			return 0;
		} else {
			if (arr[currentIndex] > key) {
				upperBound = currentIndex - 1;
			} else {
				lowerBound = currentIndex + 1;
			}
		}

	}
}
