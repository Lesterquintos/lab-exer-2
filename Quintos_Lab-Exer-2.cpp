//max function
#include <iostream>
using namespace std;

int max(int a, int b){

    cout<<"Enter first number:"; 
    cin>>a;
    cout<<"Enter second number:"; 
    cin>>b;
    
   if (a > b) {
   cout<<"First Number " <<a<<" is the largest ";
	  return a;
	}
	else
	{
	
	cout<<"Second Number " <<b<<" is the largest ";
   return b;
   }
} 

int main() {

    cout << max(7, 4) << endl;
    return 0;
}
