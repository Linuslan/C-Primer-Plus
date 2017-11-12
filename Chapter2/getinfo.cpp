#include <iostream>
int main() {
    using namespace std;
    int carrots=0;
    cout << "How many carrots do you have?" << endl;
    cin >> carrots;
    cout << "Here are tow more.";
    carrots = carrots + 2;
    cout << "Now you have " << carrots << " carrots." << endl;
    return 0;
}
