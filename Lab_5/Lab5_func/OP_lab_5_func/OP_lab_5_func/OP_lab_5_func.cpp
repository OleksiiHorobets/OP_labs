#include <iostream>
#include <cmath>

using namespace std;

bool prime_check(long long num) {
	bool is_prime = true;
	for (long long divisor = 2; divisor <= sqrt(num) && is_prime; divisor++) {
		if (num % divisor == 0) is_prime = false;
	}
	return is_prime;
}

int main()
{
	long long n;

	cout << "Enter n: ";
	cin >> n;

	for (long long i = 2; i <= log2(n + 1); i++) {
		if (prime_check(i)) {
			long long mers_numb = pow(2, i) - 1;
			if (prime_check(mers_numb)) {
				cout << mers_numb << " ";
			}
		}
	}
}
