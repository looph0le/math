#include<iostream>
using namespace std;
int main(){
	int value, m, sec_val, thir_val;
	cout<<"Enter First number: ";
	cin >> value;
	m = value/2;
	sec_val = (m*m)-1;
	thir_val = (m*m)+1;
	cout << "Second number is: ";
	cout << sec_val << endl;
	cout << "Third number is: ";
	cout << thir_val << endl;
	cout << "(" << value << ", " << sec_val << ", " << thir_val<<")" << endl; 
}
