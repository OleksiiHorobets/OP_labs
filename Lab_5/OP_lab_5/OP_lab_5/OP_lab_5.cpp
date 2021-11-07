#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	long long n;
	cout << "Enter n: ";
	cin >> n;
	for (long long i = 2; i <= log2(n + 1); i++) {
		long long divisor=2;
		while (i % divisor != 0 && divisor <= sqrt(i)) {
			divisor++;
		}
		if (divisor>sqrt(i)) {
			long long mers_numb = pow(2, i) - 1;
			divisor = 2;
			while (mers_numb % divisor != 0 && divisor <= sqrt(mers_numb)) {
				divisor++;
			}if (divisor > sqrt(mers_numb)) cout << mers_numb<<" ";
		}
	}
}