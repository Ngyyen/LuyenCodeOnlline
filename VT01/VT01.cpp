#include <iostream>
#include <cmath>
using namespace std;

int PhanTuMax(int* arr, int n);
void Nhap(int*& arr, int n);

int main()
{
    int n = 0;
    int* arr = NULL;
    cin >> n;
    Nhap(arr, n);
    int max = PhanTuMax(arr, n);
    cout << max;
}

int PhanTuMax(int* arr, int n) {
    int max = arr[0];
    for (int i = 0; i < n; ++i) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

void Nhap(int*& arr, int n) {
    arr = new int[n];
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
}

