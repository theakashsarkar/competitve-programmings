#include <iostream>
using namespace std;

int mean(int a, int b, int c) {
    int avg = (a + b + c) / 3;
    return avg;
}

int main() {
    int avg = mean(1, 2, 3);
    cout << avg << endl;
    return 0;
}