#include<iostream>
#include<string>
using namespace std;

int main() {

	//define variables
	string s;
	char temp;
	int middle, start, end, stringLength;

	//get the input from user
	cout << "enter string which you want to test for palindrome"<<endl;
	cin >> s;

	//initialize variables
	stringLength = s.length();
	start = 0;
	end = stringLength - 1;
	middle = stringLength / 2;

	//lets start checking
	while (start < end) {
		if (s[start] != s[end])
			break;
		start++;
		end--;
	}

	if (start == middle)
		cout << "given string is palindrome" << endl;
	else
		cout << "given string is not palindrome" << endl;
return 0;
}
