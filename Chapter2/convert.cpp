#include <iostream>
int stonetolb(int sts);

int main() {
    using std::cout;
    using std::cin;
    using std::endl;
    int stone=0;
    cout << "Enter the weight in stone: ";
    cin >> stone;
    int pounds = stonetolb(stone);
    cout << stone << " stone = ";
    cout << pounds << " pounds." << endl;
    return 0;
}

int stonetolb(int sts) {
    return 14*sts;
}
