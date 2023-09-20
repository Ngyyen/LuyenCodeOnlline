
#include <iostream>
#include <cmath>
using namespace std;

int DemChuSo(string n);

int main()
{
	string n;
	cin >> n;
	int dem = DemChuSo(n);
	cout << dem;
	return 0;
}

int DemChuSo(string n) {
	if (n[0] == '-') {
		return n.size() - 1;
	}
	return n.size();
}

