#include <iostream>
using namespace std;

int main(){

   char ch;
   
   cout << "Enter your charecter : ";
   cin >> ch;
   
   if (ch>='0' && ch<='9'){
   	
	   cout<<"\ncharecter is number";
   }
    
	else{
		
		cout <<"\ncharecter is not number";
	}
    return 0;
}