#include <iostream>
#include <vector>
using namespace std;

int main () {
    int i, j, min;
    vector<int> v = {9, 8, 7, 6, 5, 4, 3, 2, 1};
    for (i = 1; i < v.size(); i++) {
        min = i;
        for (j = i + 1; j < v.size(); j++) {
            if (v[j] < v[min]) {
                min = j;
            }
        }
        int tmp = v[i];
        v[i] = v[min];
        v[min] = tmp;
    }
    for (auto i : v) {
        cout << i << endl;
    }
}