#include <iostream>
#include <climits>
bool is_int(double);
int main() {
	using namespace std;
	double num;
	cout << "yo, dude! Enter an integer value: ";
	cin >> num;
	while(!is_int(num)) {
		cout << "Out of range -- please try again: ";
		cin >> num;
	}
	int val = int(num);
	cout << "You've entered the integer " << val << endl << "Bye!" << endl;
	return 0;
}

bool is_int(double a) {
	if(a<=INT_MAX && a >= INT_MIN) {
		return true;
	} else {
		return false;
	}
}