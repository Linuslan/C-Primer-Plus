#include <iostream>
int main() {
    using namespace std;
    char ch;
    int count = 0;
    cout << "Enter characters; enter # to quit:" << endl;
    ch = cin.get();
    while(cin.fail() == false) {
        cout << ch;
        ++ count;
        ch = cin.get();
    }
    cout << endl << count << " characters read" << endl;
    return 0;
}
