#include <iostream>
#include <string>
using namespace std;

bool isAlphabet(char inputChar) {
    if ((inputChar >= 65 && inputChar <= 90) || (inputChar >= 97 && inputChar <= 122)) {
        return true;
    }
    return false;
}

bool isUnderscore(char inputChar) {
    if (inputChar == 95) return true;
    return false;
}

bool isNumber(char inputChar) {
    if (inputChar >= 48 && inputChar <= 57) {
        return true;
    }
    else return false;
}

string CodelandUsernameValidation(string str) {
    int n = str.length();
    if (n >= 4 && n <= 25) {
        if (isAlphabet(str[0]) && !isUnderscore(str[n - 1])) {
            for (int i = 1; i < n; i++) {
                if (!isAlphabet(str[i]) && !isUnderscore(str[i]) && !isNumber(str[i])) return "false";
                return "true";
            }
        }
        else return "false";
    }
    else return "false";

}

int main(void) {

    // keep this function call here
    cout << CodelandUsernameValidation(coderbyteInternalStdinFunction(stdin));
    return 0;

}