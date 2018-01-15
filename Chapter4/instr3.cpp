#include <iostream>

int main() {
    using namespace std;
    const int SIZE = 20;
    char name[SIZE];
    char dessert[SIZE];
    cout << "Enter your name:\n";
    cin.get(name, SIZE).get();
    cout << "Enter your favorite dessert:\n";
    cin.get(dessert, SIZE).get();
    cout << "I have some delicious " << dessert;
    cout << " for you, " << name << ".\n";
    return 0;
}
