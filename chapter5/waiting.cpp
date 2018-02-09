#include <iostream>
#include <ctime>
int main() {
    using namespace std;
    float secs;
    cout << "Enter the delay time, in seconds: ";
    cin >> secs;
    clock_t delay = secs*CLOCKS_PER_SEC;
    cout << "starting \a" << endl;
    clock_t start = clock();
    while(clock() - start < delay);
    cout << "done\a" << endl;
    return 0;
}
