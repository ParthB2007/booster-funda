#include <iostream>
 
using namespace std;


int main (){
	
char ch;
cout << "Enter your single character : \n";
cin >> ch;

if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U'){
	
	 cout << ch <<" (character) is vowel";
}

else {
	cout << ch << " (character) is not consonant";
}
}