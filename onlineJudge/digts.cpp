
#include <iostream>
#include <string.h>
#include <string>
#include <sstream>


using namespace std;  

int getMin(int i, string number) {
    stringstream ss;
    int digits = number.size();
    ss << digits;
    if (ss.str() == number) {
        return i;
    }

    return getMin(++i, ss.str());
}

int main () {
    string input;
    int ans;
    while (cin >> input) {
        if (input[0] == 'E') {
            break;
        }
       ans = getMin(1, input);
        cout << ans << endl;
    }

}