#include <iostream>
using namespace std;
int simon(int);

int main() {
    simon(3);
    cout << "Pick an integer: ";
    int count=0;
    cin >> count;
    simon(count);
    cout << "Done!" << endl;
    return 0;
}

int simon(int n) {
    cout << "Simon says touch your toes " << n << " times. " << endl;
}
