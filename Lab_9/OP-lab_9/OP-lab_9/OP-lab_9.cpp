#include <iostream>

using namespace std;

void strInput(char* , int);

bool uniqueCheck(char*, int);

int main()
{
    int const size = 100;
    char str[size];

    strInput(str, size);

    for (int i = 0; str[i]; i++) {
        if (uniqueCheck(str, i)) {
            cout << "Unique char index: " << i << endl;
        }
    }
   
}

void strInput(char* str, int size) {
    cin.getline(str, size);
}

bool uniqueCheck(char* str, int index) {
    bool isUnique = true;
    int j = 0;
    while (isUnique && str[j]) {
        if (str[index] == str[j] && j != index) {
            isUnique = false;
        }
        j++;
    }
    return isUnique;
}