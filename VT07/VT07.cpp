#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

void Nhap(int*& arr, int n);
vector<int> KiemTraPresent(int* arr, int x);
void Xuat(const vector<int>& vec);

int main()
{
    int* arr = NULL;
    Nhap(arr, 10);
    int x = 0;
    cin >> x;
    vector<int> vec = KiemTraPresent(arr, x);
    Xuat(vec);
}

vector<int> KiemTraPresent(int* arr, int x) {
    vector<int> vec;
    for (int i = 0; i < 10; ++i) {
        if (arr[i] == x) {
            vec.push_back(i+1);
        }
    }
    if (vec.size() == 0) {
        vec.push_back(-1);
    }
    return vec;
}

void Nhap(int*& arr, int n) {
    arr = new int[n];
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
}

void Xuat(const vector<int>& vec) {
    for (int i : vec) {
        cout << i << " ";
    }
}