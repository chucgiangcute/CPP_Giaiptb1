#include <iostream>
using namespace std;

int main() {
	double a, b, x;
	cout << "Nhap gia tri a";
	cin >> a;
	cout << "Nhap gia tri b";
	cin >> b;
	if (a == 0) {
		cout << "Gia tri x la :";
	}
	x = -b / a;
	cout << "Gia tri x la :" << x;
	return 0;
}