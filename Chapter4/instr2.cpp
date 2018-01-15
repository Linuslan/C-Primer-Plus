#include <iostream>
int main() {
    using namespace std;
    const int SIZE = 20;
    char name[SIZE];
    char dessert[SIZE];
    cout << "Enter your name:" << endl;
    cin.getline(name, SIZE);
    cout << "Enter your favorite dessert:" << endl;
    cin.getline(dessert, SIZE);
    cout << "I have some delicious " << dessert << "for your, " << name << "." << endl;
}
