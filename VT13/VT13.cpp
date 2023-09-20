#include <iostream>
#include <cmath>
using namespace std;

void Nhap(int*& arr, int n);
pair<int, int> TimCapMax(int* arr, int n);

int main()
{
    int* arr = NULL;
    int n = 0;
    cin >> n;
    Nhap(arr, n);
    pair<int, int> pa = TimCapMax(arr, n);
    cout << arr[pa.first] << " " << arr[pa.second];
}

void Nhap(int*& arr, int n) {
    arr = new int[n];
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
}

pair<int, int> TimCapMax(int* arr, int n) {
    int max = 0;
    pair<int, int> pa = {-1, -1};
    for (int i = 0; i < n; ++i) {
        if (i == n - 1 && arr[i] + arr[0] > max) {
            return { n - 1, 0 };
        }
        if (arr[i] + arr[i + 1] >= max && i > pa.first) {
            max = arr[i] + arr[i + 1];
            pa.first = i;
            pa.second = i + 1;
        }
    }
    return pa;
}