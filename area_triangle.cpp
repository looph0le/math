#include<iostream>
using namespace std;
int main(){
	float base, height, area;
	cout << "Enter base(cm): ";
	cin >> base;
	cout << "Enter height(cm): ";
	cin >> height;
	area = 0.5*base*height;
	cout << "Area is: ";
	cout << area << "cm" << endl;
}
