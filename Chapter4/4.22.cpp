#include <iostream>
#include <cstring>
using namespace std;
char * getName();
int main() {
    char * name;
    name = getName();
    cout << name << " at " << (int *) name << endl;
    delete [] name;
    name = getName();
    cout << name << " at " << (int *) name << endl;
    delete [] name;
    return 0;
}

char * getName() {
    char name[80];
    cout << "Enter last name: ";
    //cin.get(name, 80); //回车后不会执行下一次的等待输入，因为回车还在缓存中
    //cin.get();

    cin.getline(name, 80);

    //cin >> name;
    char * pn = new char[strlen(name)+1];
    strcpy(pn, name);
    return pn;
}
