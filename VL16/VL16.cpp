
#include <iostream>
#include <cmath>
using namespace std;

int USCLN(int a, int b);
int BSCNN(int a, int b);

int main()
{
    int a = 0, b = 0;
    cin >> a >> b;
    int bscnn = BSCNN(a, b);
    cout << bscnn;
}

int USCLN(int a, int b) {
    if (b == 0) 
        return a;
    return USCLN(b, a % b);
}

int BSCNN(int a, int b) {
    return abs((a * b) / USCLN(a, b));
}

