#include <iostream>
int main() {
    using std::cout;
    using std::cin;
    using std::endl;
    using std::ios_base;
    cout.setf(ios_base::fixed, ios_base::floatfield);
    float tub = 10.0/3.0;
    double mint = 10.0/3.0;
    const float million = 1.0e6;
    cout << "tub=" << tub;
    cout << ", a million tubs = " << million*tub;
    cout << endl << ", ten million tubs = " << 10 * million * tub << endl;

    cout << "mint=" << mint;
    cout << " and a million mints = " << million*mint << endl;
    return 0;
}
