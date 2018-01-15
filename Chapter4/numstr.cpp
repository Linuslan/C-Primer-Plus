#include <iostream>
int main() {
    using namespace std;
    int year = 0;
    char address[80] {0};
    char ch;
    cout << "What year was your house built?" << endl;
    cin >> year;
    //cin.get();    //or cin.get(ch) will return istream instance
    cout << "What is its street address?" << endl;
    cin.get(ch).getline(address, 80);
    cout << "Year built: " << year << endl;
    cout << "Address: " << address << endl;
    cout << "Done!";
    return 0;
}
