#include <iostream>
using namespace std;

unsigned long long factorial(unsigned long long i) {
    if (i == 0) return 1;
    else return i * factorial(i - 1);
}

int main()
{
    int n;
    double x;
    cout << "Enter n and x: ";
    cin >> n >> x;
    for (int i = 1; i <= n; ++i) {
        cout << "a" << i << " = " << pow(x, i) / (factorial(2*i))<<endl;
    }
    return 0;
}
