#include <iostream>
#include <vector>
using namespace std;


int main() {
    int i, j, tmp;
    vector<int> v = {9, 8, 7, 6, 5, 4, 3, 2, 1};
    for (i = 1; i < v.size(); i++) {
        for (j = 1; j < v.size(); j++) {
            if (v[j] > v[j+1]) {
                tmp = v[j];
                v[j] = v[j+1];
                v[j+1] = tmp;
            }
        }
    }
    for (int k : v) {
        cout << k << endl;
    }
}