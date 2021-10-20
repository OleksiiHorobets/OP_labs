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
	double curr_val = 1;
	int k = 1;
	do {
		prev_sum = sum;
		curr_val *= (a - k + 1) * x / k;
		sum += curr_val;
		k++;
		cout << " k = " << k << "\t|  sum = " << setprecision(7) << sum << fixed << endl;
	} while (abs(sum - prev_sum) > epsilon);

	return 0;
}