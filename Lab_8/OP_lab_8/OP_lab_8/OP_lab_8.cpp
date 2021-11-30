#include "Header.h"


int main()
{
	int n, m, p;
	n = int_input("Enter n: ");
	m = int_input("Enter m: ");
	p = int_input("Enter p: ");

	double** arr_A = matrix_rand_input(n, m);
	double** arr_B = matrix_rand_input(m, p);

	/*matrix_output(arr_A, n, m);
	cout << "x"<<endl;
	matrix_output(arr_B, m, p);
	cout << "-----------------------" << endl;*/

	matrix_output(matrix_multiply(n, m, p, arr_A, arr_B), n, p);
	remove_matrix(arr_A, n);
	remove_matrix(arr_B, m);
	return 0;
}

void remove_matrix(double** matrix, int n) {
	for (int i = 0; i < n; i++) {
		delete[] matrix[i];
	}delete[]matrix;
}
double** matrix_rand_input(int n, int m) {
	srand(time(NULL));

	double** matrix = new double* [n];
	for (int i = 0; i < n; i++) {
		matrix[i] = new double[m];
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			matrix[i][j] = rand() % 10 - 2;
		}
	}
	return matrix;
}

int int_input(string msg) {
	int num;
	cout << msg;
	cin >> num;
	return num;
}

double** matrix_multiply(int n, int m, int p, double** arr_A, double** arr_B) {

	double** arr_res = new double* [n];

	for (int i = 0; i < n; i++) {
		arr_res[i] = new double[p];
		for (int j = 0; j < p; j++) {
			arr_res[i][j] = 0;
			for (int k = 0; k < m; k++)
				arr_res[i][j] += arr_A[i][k] * arr_B[k][j];
		}
	}

	return arr_res;

}

void matrix_output(double** matrix, int n, int m) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << setw(4) << matrix[i][j];
		}
		cout << endl;
	}
}
