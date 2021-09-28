#include<iostream>
using namespace std;
int main(){
	int a, b, c, angle;
	cout << "---:Angle of triangle:---" << endl;
	cout << "NOTE: Enter 0 for the angle you want to find" << endl;
	cout << "Enter value of angle A: ";
	cin >> a;
	cout << "Enter value of angle B: ";
	cin >> b;
	cout << "Enter value of angle C: ";
	cin >> c;
	angle = (a+b+c)-180;
	angle = abs(angle);
	cout << "Angle: ";
	cout << angle <<"°"<<endl;
}