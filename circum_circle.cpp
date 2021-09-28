#include<iostream>
using namespace std;
int main(){
	float pi=3.14159265359, c, r;
	cout << "---:Circle Circumference:---" << endl;
	cout << "Enter radius(cm): ";
	cin >> r;
	c = 2*pi*r;
	cout << "Circumference is: ";
	cout << c <<"cm"<< endl;
}
