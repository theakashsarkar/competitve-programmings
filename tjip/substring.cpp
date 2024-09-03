#include <iostream>
#include <string.h>
using namespace std;

int main() {
    string a = "123456";
    string b = "123";
    int la = 6;
    int lb = 3;
    for (int i = 0; i <= (la - lb); i++) {
        if (a.substr(i, lb) == b) {
            cout << "true" ;
            return 0;
        }
    }
    cout << "false";
}