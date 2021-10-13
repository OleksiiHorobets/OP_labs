#include <iostream>
#include <iomanip>
using namespace std;

//int factorial(int n) {
//	if (n == 0) return 1;
//	return n * factorial(n - 1);
//}

int main()
{
	int a;
	cout << "Enter a = ";
	cin >> a;
	double x, epsilon = 0.00001;

	cout << "Enter x = ";
	cin >> x;

	double prev_sum = 1, sum = 1;
	int k = 1;
	do {
		prev_sum = sum;
		double curr_sum = 1;

		for (int i = 0; i < k; i++) {
			curr_sum *= (a - i) * x / (i + 1);
		}

		sum += curr_sum;
		k++;
		cout << " k = " << k << "\t|  sum = " << setprecision(7) << sum << fixed << endl;
	} while (abs(sum - prev_sum) > epsilon);

	return 0;
}