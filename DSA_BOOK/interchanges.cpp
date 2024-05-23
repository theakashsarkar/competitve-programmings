#include <iostream>
#include <string.h>
using namespace std;

void hellow(string beg, string aux){
    string temp = beg;
    beg = aux;
    aux = temp;
    cout << beg << aux << endl;
}

int main() {
    hellow("AAA", "BBB");
    return 0;
}

