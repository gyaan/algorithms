/*#include <stdio.h>
 #include <string.h>

 int main()
 {
 char text[100];
 int begin, middle, end, length = 0;
 printf("enter string");
 gets(text);

 while ( text[length] != '\0' )
 length++;

 end = length - 1;
 middle = length/2;

 for( begin = 0 ; begin < middle ; begin++ )
 {
 if ( text[begin] != text[end] )
 {
 printf("Not a palindrome.\n");
 break;
 }
 end--;
 }
 if( begin == middle )
 printf("Palindrome.\n");

 return 0;
 }

 */

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
