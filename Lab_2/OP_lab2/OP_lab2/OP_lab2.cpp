#include <iostream>
#define _USE_MATH_DEFINES
#include <cmath>
#define M_PI 3.14159265358979323846


using namespace std;

int main() {
	double a1, a2, b1, b2, c1, c2; //Coordinates of triangle vertexes
	string result;
	cout << "Enter coordinates of the first vertex" << endl;
	cin >> a1 >> a2;
	cout << "Enter coordinates of the second vertex" << endl;
	cin >> b1 >> b2;
	cout << "Enter coordinates of the third vertex" << endl;
	cin >> c1 >> c2;

	double ab, bc, ac; //length of the triangle's sides
	ab = sqrt(pow(a1 - a2, 2) + pow(b1 - b2, 2));
	bc = sqrt(pow(b1 - b2, 2) + pow(c1 - c2, 2));
	ac = sqrt(pow(a1 - a2, 2) + pow(c1 - c2, 2));

	double angle_alpha, angle_beta, angle_gamma;

	angle_alpha = acos((bc * bc + ac * ac - ab * ab) / (2 * bc * ac)) * 180 / M_PI;
	angle_beta = acos((ab * ab + bc * bc - ac * ac) / (2 * bc * ab)) * 180 / M_PI;
	angle_gamma = acos((ab * ab + ac * ac - bc * bc) / (2 * bc * ac)) * 180 / M_PI;

	if (angle_alpha == 90 || angle_beta == 90 || angle_gamma == 90) {
		cout << "Triangle is right-angled" << endl;
	}
	else if (angle_alpha > 90 || angle_beta > 90 || angle_gamma > 90) {
		cout << "Triangle is obtuse" << endl;
	}
	else {
		cout << "Triangle is acute" << endl;
	}

	
	if (ab == bc && bc == ac) {
		result = "Triangle is equilateral";
	}
	else if (ab == bc || bc == ac || ac == ab) {
		result = "Triangle is isosceles";
	}
	else
		result = "Triangle is versatile";
	cout << result;
	return 0;
}