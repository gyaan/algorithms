#include<iostream>
#include<map>
using namespace std;

int main() {

	int size = 11;
	int range = 12; //1-12
	int arr[size] = {1, 4, 3, 4, 3, 7, 8, 12, 11, 10, 5};
	map<int, int>hmap;

	//create empty count hashmap
	for (int i = 1; i <= range; i++) {
		hmap[i] = 0;
	}

	//count each elements
	for (int i = 0; i <= size - 1; i++) {
		if (hmap.find(arr[i]) != hmap.end()) {
			hmap[arr[i]] = hmap[arr[i]] + 1;
		}
	}

	//how many elements before each elements
	for (int j = 2; j <= range; j++) {
		hmap[j] = hmap[j] + hmap[j - 1];
	}

	int output[size - 1];

	//create output array
	for (int i = 0; i <= size - 1; i++) {
		output[i] = 0;
	}

	//add elements to output array
	for (int i = 0; i <= size - 1; i++) {
		output[hmap[arr[i]] - 1] = arr[i];
		hmap[arr[i]] = hmap[arr[i]] - 1;
	}

	//display sorted array elements

	for (int o = 0; o <= size - 1; o++) {
		cout << output[o] << "-->";
	}


}