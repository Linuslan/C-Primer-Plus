#include <iostream>
#include <string>
#include <cstring>
int main() {
    using namespace std;
    char charr[20];
    string str1;
    cout << "Length of string in charr before input: "
         << strlen(charr) << endl;
    cout << "Length of string in str1 before input: "
         << str1.size() << endl;
    cout << "Enter a line of text: " << endl;
    cin.getline(charr, 20);
    cout << "You entered: " << charr << endl;
    cout << "Enter another line of text: " << endl;
    getline(cin, str1);
    cout << "You entered: " << str1 << endl;
    cout << "Length of string in charr after input: "
         << strlen(charr) << endl;
    cout << "Length of string in str1 after input: "
         << str1.size() << endl;
    return 0;
}
