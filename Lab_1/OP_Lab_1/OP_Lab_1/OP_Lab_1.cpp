#include <iostream>
using namespace std;

int main()
{
    double a1, b1, c1, a2, b2, c2, res_x, res_y;

    cout << "Enter coefficient a1: "; cin >> a1;
    cout << "Enter coefficient b1: "; cin >> b1;
    cout << "Enter coefficient c1: "; cin >> c1;
    cout << "Enter coefficient a2: "; cin >> a2;
    cout << "Enter coefficient b2: "; cin >> b2;
    cout << "Enter coefficient c2: "; cin >> c2;

    double determ, determ_x, determ_y;

    determ = a1 * b2 - a2 * b1;

    if (determ == 0) {
        cout << "Determinant = 0";
        return 0;
    }
        
    determ_x = c1 * b2 - c2 * b1;
    determ_y = a1 * c2 - a2 * c1;

    res_x = determ_x / determ;
    res_y = determ_y / determ;

    cout << "Result" << endl << "x = " << res_x << endl << "y = " << res_y << endl;
    return 0;
}