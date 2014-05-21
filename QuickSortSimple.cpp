//simple quick sort
#include<iostream>
#include<vector>
#include<cstdlib>
#include<ctime>
using namespace std;

class ArrayIns {

private:
	vector<double> (theVect);
	int nElems;
public:
	ArrayIns(int max) :
			nElems(0) {
		theVect.resize(max);
	}

	void insert(double value) {
		theVect[nElems++] = value;
	}

	void display() {
		cout << "A = ";
		for (int j = 0; j < nElems; j++) {
			cout << theVect[j] << " ";
			}
		cout << endl;

	}

	void quickSort() {
		recQuickSort(0, nElems - 1);
	}
	void recQuickSort(int left, int right) {
		if (right - left <= 0)
			return;
		else {
			double pivot = theVect[right];
			int partition = partitionIt(left, right, pivot);
			recQuickSort(left, partition - 1);
			recQuickSort(partition + 1, right);
		}
	}

	int partitionIt(int left, int right, double pivot) {
		int leftMark = left - 1;
		int rightMark = right;
		while (true) {
			while (theVect[++leftMark] < pivot)
				;
			while (rightMark > 0 && theVect[--rightMark] > pivot)
				;
			if (leftMark >= rightMark)
				break;
			else
				swap(leftMark, rightMark);
		}
		swap(leftMark, right);
		return leftMark;
	}
	void swap(int dex1, int dex2) {
		double temp = theVect[dex1];
		theVect[dex1] = theVect[dex2];
		theVect[dex2] = temp;
	}
};

int main() {
	time_t aTime;
	int maxSize = 16;
	ArrayIns arr(maxSize);
	srand(static_cast<unsigned>(time(&aTime)));

	for (int j = 0; j < maxSize; j++) {
		double n = rand() % 99;
		arr.insert(n);
	}
	arr.display();
	arr.quickSort();
	arr.display();
	return 0;
}
