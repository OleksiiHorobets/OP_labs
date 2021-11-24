#include "Header.h"


int main()
{
	int n;
	n = int_input("Enter n: ");

	int k;
	k = int_input("Enter k: ");

	double* arr = new double[n];

	arr_rand_input(arr,n);
	arr_output(arr, n);
	arr_elem_replacement(arr, n, k);
	arr_output(arr, n);
}

int int_input(string msg) {
	int num;
	cout << msg;
	cin >> num;
	return num;
}

void arr_rand_input(double* arr, int n) {
	srand(time(NULL));
	for (int i = 0; i < n; i++) {
		arr[i] = rand() % 1000-400;
	}
}

void arr_output(double* arr, int n) {
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

double min_arr(double* arr, int n) {
	double min = arr[0];
	for (int i = 1; i < n; i++) {
		if (min > arr[i]) {
			min = arr[i];
		}
	}return min;
}

double sum_count(double* arr, int n) {
	double min = min_arr(arr, n);
	double sum = 0;
	if (min) {		
		for (int i = 0; i < n; i++) {
			sum += arr[i] / min;
		}
	}
	else {
		for (int i = 0; i < n; i++) {
			sum += arr[i] * arr[i];
		}
	}
	return sum;
}

double* arr_elem_replacement(double* arr, int n,int k) {
	double min = sum_count(arr, n);
	for (int i = 0; i < n; i++) {
		if (arr[i] > k) arr[i] = min;
	}
	return arr;
}