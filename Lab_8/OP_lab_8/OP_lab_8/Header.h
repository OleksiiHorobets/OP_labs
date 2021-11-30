#pragma once
#include <iostream>
#include <ctime>
#include <iomanip>
using namespace std;

double** matrix_rand_input(int, int);
int int_input(string);
double** matrix_multiply(int, int, int, double**, double**);
void matrix_output(double**, int, int);
void remove_matrix(double**, int);