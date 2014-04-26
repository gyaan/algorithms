#include<iostream>
using namespace std;

int main() {

	int i, j, number, temp, reverse;
	cout << "enter No.";
	cin >> number;
	temp = number;
	reverse = 0;
	while (temp != 0) {
		reverse = reverse * 10 + temp % 10;
		temp = temp / 10;
	}

	cout << "Reverse No." << reverse;

	if(number==reverse){
		cout<<"number is palindrome";
	}
	else{
	 cout<<"number is not palindrome";
	}

	return 0;
}
