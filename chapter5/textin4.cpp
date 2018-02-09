#include <iostream>
int main() {
    using namespace std;
    int ch;
    int count = 0;
    while((ch = cin.get()) != EOF) {    //EOF表示的不是有效的字符编码（即可能为int类型），因此可能不与char类型兼容
        cout.put(char(ch));
        ++ count;
    }
    cout << endl << count << " characters read" << endl;
    return 0;
}
