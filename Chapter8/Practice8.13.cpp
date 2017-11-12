#include <iostream>
template <typename T> void swap1(T & a, T & b);
struct job {
	char name[40];
	double salary;
	int floor;
};
template <> void swap1<job>(job & j1, job & j2);
void swap1(job & j3, job & j4);
int main() {
	using namespace std;
	job sue = {"Susan Yaffee", 73000.60, 7};
	job sidney = {"Sidney Taffee", 78060.72, 9};
	swap1(sue, sidney);
}

template <typename T> void swap1(T & a, T & b) {
	using namespace std;
	cout << "original" << endl;
}

void swap1(job & j3, job & j4) {
	using namespace std;
	cout << "123456" <<endl;
}

template <> void swap1<job>(job & j1, job & j2) {
	using namespace std;
	cout << "456789" << endl;
}
