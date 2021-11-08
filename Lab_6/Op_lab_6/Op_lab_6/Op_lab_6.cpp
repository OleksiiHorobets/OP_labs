#include "Header.h"

bool is_positive(double num) {
	return num > 0;
}



double e_pow_x_taylor_with_accuracy(double num_x, double epsilon) {
	double ex_sum = 1, prev_ex_sum = 0, curr_ex = 1;
	int counter = 1;
	while (abs(ex_sum - prev_ex_sum) > epsilon) {
		prev_ex_sum = ex_sum;
		ex_sum += calculate_member(num_x, counter);
		counter++;
	}
	return ex_sum;
}

double calculate_member(double num_x, double counter){
	double res = 1;
	for (int i = 1; i <= counter; i++) {
		res *= num_x / i;
	}
	return res;
}

double input_double(string msg) {
	cout << msg;
	double x;
	cin >> x;
	return x;
}

//long long factorial(int num) {
//	long long res_fact = 1;
//	for (int i = 1; i <= num; i++) {
//		res_fact *= i;
//	}
//	return res_fact;
//}

int main()
{	
	double x = input_double("Enter x: ");
	double epsilon = input_double("Enter accuracy: ");
	if (is_positive(x)) {
		double power = atan(x);
		cout << setprecision(10);
		cout << fixed << e_pow_x_taylor_with_accuracy(power, epsilon);
	}else {
		double power = x * x;
		cout<<setprecision(10);
		cout << fixed << e_pow_x_taylor_with_accuracy(power, epsilon) + 1;
	}
}