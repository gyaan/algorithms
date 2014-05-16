#include<iostream>
using namespace std;
int * bubbleSort(int arr[], int nElems);

int main() {

	int arr[100];
	int nElems;
	int searchKey;
	int * what;
	nElems = 30;
	//initialize array elements
	for (int j = 0; j < 20; j++) {
		arr[j] = 1 + j;
	}
	arr[20] = 45;
	arr[21] = 40;
	arr[22] = 45;
	arr[23] = 54;
	arr[24] = 50;
	arr[25] = 90;
	arr[26] = 78;
	cout << "after sorting:";
	what = bubbleSort(arr, 27);
	for (int j = 0; j <25 ; j++) {
		cout << *(what+j) << " ";
	}
	return 0;

}

int * bubbleSort(int arr[], int nElems) {

	for (int i = nElems - 1; i > 1; i--) {
		for (int k = 0; k < i; k++) {
			if (arr[k] > arr[k + 1]) {
				int temp = arr[k];
				arr[k + 1] = arr[k];
				arr[k] = temp;
			}
		}
	}

	return arr;

}
