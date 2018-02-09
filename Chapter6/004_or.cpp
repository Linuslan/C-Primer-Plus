#include <iostream>
int main() {
	using namespace std;
	cout << "This program may reformat your hard disk" << endl;
	char ch;
	cin >> ch;
	if(ch == 'y' || ch == 'Y') {
		cout << "You were warned!\a\a" << endl;
	} else if(ch == 'n' || ch == 'N') {
		cout << "A wise choice ... bye" << endl;
	} else {
		cout << "That wasn't a y or n! Apparently you "
				"can't follow" << endl << "instructions, so "
				"I'll trash your disk anyway.\a\a\a" << endl;
	}
	return 0;
}