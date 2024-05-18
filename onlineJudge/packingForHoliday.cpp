#include <iostream>

using namespace std;


int main() {
    int numberOfInput;
    cin >> numberOfInput;
    int cont = 1;
    while(numberOfInput --) {
        int len, width, height;
        cin >> len;
        cin >> width;
        cin >> height;

        if (len <= 20 && width <= 20 && height <= 20) {
            cout << "Case " << cont << ": " << "good" << endl;
        } else {
            cout << "Case " << cont << ": " << "bad" << endl;

        }
                ++cont;

    }
}