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
    //cin.get(name, 80); //�س��󲻻�ִ����һ�εĵȴ����룬��Ϊ�س����ڻ�����
    //cin.get();

    cin.getline(name, 80);

    //cin >> name;
    char * pn = new char[strlen(name)+1];
    strcpy(pn, name);
    return pn;
}
