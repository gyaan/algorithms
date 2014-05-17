//binaryseach.cpp
#include<iostream>
#include<vector>
using namespace std;

class ordArray {

private:
	vector<double> v;
	int nElems;
public:

	ordArray(int max) {
		v.resize(max);
		nElems = 0;
	}

	int getSize() {
		return nElems;
	}

	int find(double searchKey) {
		return recFind(searchKey, 0, nElems - 1);
	}

	int recFind(double searchKey, int lowerBound, int upperBound) {
		int curIn;

		curIn = (lowerBound + upperBound) / 2;

		if (v[curIn] == searchKey) {
			return curIn;
		} else if (lowerBound > upperBound) {
			return nElems;
		} else {
			if (v[curIn] > searchKey) {
				upperBound = curIn - 1;
				return recFind(searchKey, lowerBound, upperBound);
			} else {
				lowerBound = curIn + 1;
				return recFind(searchKey, lowerBound, upperBound);
			}

		}

	}

	void insert(double value){
		int j;
		for(j=0;j<nElems;j++){
			if(v[j]>value){
				break;
			}
		}

		for(int k= nElems;k>j;k--)
			v[k]=v[k-1];
		v[j]=value;
		nElems++;
	}

	void display(){
		for(int j=0;j<nElems;j++)
			cout<<v[j]<<" ";
		    cout<<endl;

	}


};

int main(){

	int maxSize = 100;
	ordArray arr(maxSize);
	arr.insert(72);
	arr.insert(90);
	arr.insert(45);
	arr.insert(123);
	arr.insert(54);
	arr.insert(99);
	arr.insert(144);
	arr.insert(27);
	arr.insert(135);
	arr.insert(81);
	arr.insert(18);
	arr.insert(108);
	arr.insert(9);
	arr.insert(117);
	arr.insert(63);
	arr.insert(36);

	int searchKey = 207;

	if(arr.find(searchKey)!=arr.getSize())
		cout<<"found"<<endl;
	else
		cout<<"can'f found"<<endl;
	return 0;

}
