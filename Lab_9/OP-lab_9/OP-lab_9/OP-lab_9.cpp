#include <iostream>

using namespace std;

void strInput(char* , int);

bool uniqueCheck(char*, char, int);

int main()
{
    int const size = 100;
    char str[size];

    strInput(str, size);

    for (int i = 0; str[i]; i++) {
        if (uniqueCheck(str, str[i], i)) {
            cout << "Unique char index: " << i << endl;
        }
    }
}

void strInput(char* str, int size) {
    cin.getline(str, size);
}

bool uniqueCheck(char* str, char symbol, int index) {
    bool isUnique = true;
    int j = index+1;
    while (isUnique && str[j]) {
        if (symbol == str[j]) {
            isUnique = false;
        }j++;
    }
    return isUnique;
}