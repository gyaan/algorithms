#include<iostream>
#include<vector>
using namespace std;

class DArray {
private:
	vector<double> (theVect);
	int nElems;
	void recMergeSort(vector<double>, int, int);
	void merge(vector<double>, int, int, int);
public:
	DArray(int max) :
			nElems(0) {
		theVect.resize(max);
	}
	void insert(double value) {
		theVect[nElems] = value;
		nElems++;
	}

	void display() {
		for (int j = 0; j < nElems; j++)
			cout << theVect[j] << " ";
		cout << endl;
	}

	void mergeSort() {
		vector<double> (workSpace);
		workSpace.resize(nElems);
		recMergeSort(workSpace, 0, nElems - 1);
	}
};

void DArray::recMergeSort(vector<double> workSpace, int lowerBound,
		int upperBound) {

	if (lowerBound == upperBound) {
		return;
	} else {
		int mid = (lowerBound + upperBound) / 2;
		recMergeSort(workSpace, lowerBound, mid);
		recMergeSort(workSpace, mid + 1, upperBound);
		merge(workSpace, lowerBound, mid + 1, upperBound);
	}

}

void DArray::merge(vector<double> workSpace, int lowPtr, int highPtr,
		int upperBound) {
	int j = 0;
	int lowerBound = lowPtr;
	int mid = highPtr - 1;
	int n = upperBound - lowerBound + 1;
	while (lowPtr <= mid && highPtr <= upperBound) {
		if (theVect[lowPtr] < theVect[highPtr])
			workSpace[j++] = theVect[lowPtr++];
		else
			workSpace[j++] = theVect[highPtr++];
	}
	while (lowPtr <= mid)
		workSpace[j++] = theVect[lowPtr++];
	while (highPtr <= upperBound)
		workSpace[j++] = theVect[highPtr++];
	for (j = 0; j < n; j++) {
		theVect[lowerBound + j] = workSpace[j];
	}

}

int main() {
	const int maxSize = 100;
//array sizes
	DArray arr(maxSize);
//create “array”
	arr.insert(64); //insert items
	arr.insert(21);
	arr.insert(33);
	arr.insert(70);
	arr.insert(12);
	arr.insert(85);
	arr.insert(44);
	arr.insert(3);
	arr.insert(99);
	arr.insert(0);
	arr.insert(108);
	arr.insert(36);
	arr.display();
	arr.mergeSort();
	arr.display();
	return 0;
} //end main()

