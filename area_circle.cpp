#include<iostream>
using namespace std;
int main(){
	float pi=3.141;
	float r, area;
	cout << "Enter radius(cm): ";
	cin >> r;
	area = pi*(r*r);//Calculation
	cout << "area of circle is: ";
	cout << area << "cm" << endl;
}
