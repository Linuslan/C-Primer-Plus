#include <iostream>
int main() {
    using namespace std;
    int ch;
    int count = 0;
    while((ch = cin.get()) != EOF) {    //EOF��ʾ�Ĳ�����Ч���ַ����루������Ϊint���ͣ�����˿��ܲ���char���ͼ���
        cout.put(char(ch));
        ++ count;
    }
    cout << endl << count << " characters read" << endl;
    return 0;
}
