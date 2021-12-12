#include <iostream>
#include <string>

using namespace std;

int main()
{
    string str;
    getline(cin, str);
    for (int i = 0; i < str.length(); i++) {
        if (str.find_first_of(str[i]) == str.find_last_of(str[i])) {
            cout << "Unique char: " << str[i] << "\t| Pos: " << i << endl;
        }
    }
}