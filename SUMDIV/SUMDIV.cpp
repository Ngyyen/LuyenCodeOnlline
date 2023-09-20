#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

void Nhap(int*& arr, int n);
vector<int> TongUoc(int* arr, int n);
int SumDiv(int n);
void Xuat(const vector<int>& vec);

int main()
{
	int n = 0;
	cin >> n;
	int* arr = NULL;
	Nhap(arr, n);
	vector<int> vec = TongUoc(arr, n);
	Xuat(vec);
}

vector<int> TongUoc(int* arr, int n) {
	vector<int> vec;
	for (int i = 0; i < n; ++i) {
		vec.push_back(SumDiv(arr[i]));
	}
	return vec;
}

int SumDiv(int n) {
	int s = 0;
	for (int i = 1; i <= n/2; ++i) {
		if (n % i == 0) {
			s += i;
		}
	}
	s += n;
	return s;
}

void Nhap(int*& arr, int n) {
	arr = new int[n];
	for (int i = 0; i < n; ++i) {
		cin >> arr[i];
	}
}

void Xuat(const vector<int>& vec) {
	for (int i : vec) {
		cout << i << endl;
	}
}
// Duy
