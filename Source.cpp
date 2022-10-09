#include <iostream>
using namespace std;
int main() {
	/*1
	int hp;
	cin >> hp;
	bool a = hp > 0;
	cout << boolalpha << a;*/

	/*2
	int temp;
	cin >> temp;
	if (temp > 20) {
		cout << "on";
	}
	else {
		cout << "off";
	}*/

	/*3
	int T, temp, vl;
	cin >> T >> temp >> vl;
	if (temp > T && vl <= 80) {
		cout << "on";
	}
	else {
		cout << "off";
	}*/

	/*4
	float x, y;
	cin >> x;
	if (x > 0) {
		 y = sqrt(x - 2);
	}
	if (x == 0) {
		y = 0;
	}
	if (x < 0) {
		y = abs(x);
	}
	cout << y;*/

	/*5
	int finger;
	cin >> finger;
	switch (finger) {
	case 1: cout << "bolshoy"; break;
	case 2: cout << "ukazatelniy"; break;
	case 3: cout << "sredniy"; break;
	case 4: cout << "bezimyanniy"; break;
	case 5: cout << "mizinec"; break;
	default: cout << "error";
	}*/
	
	int temp_k, temp_ul;
	cin >> temp_k >> temp_ul;
	if (temp_k > 20) {
		cout << "ac on";
	}
	else if (temp_ul < temp_k) {
		cout << "open window";
	}
	else {
		cout << "ac off";
	}
	
	
}








