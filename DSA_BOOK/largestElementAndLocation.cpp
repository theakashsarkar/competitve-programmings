#include <iostream>
using namespace std;

void Find(int Data[], int size) {
    int first = Data[0], second = Data[1], loc1 = 0, loc2 = 1;
    if (first < second) {
        first = second; 
        second = first; 
        loc1 = 2;
        loc2 = 1;
    } 
    int k = 2;
    while ( k <= size) {
        if (first < Data[k]) { 
            second = first;
            first  = Data[k]; 
            loc2 = loc1;
            loc1 = k;
        } else {
                if (second < Data[k]) {
                second = Data[k];
                loc2 = k;
            }
        }
        k++;
    }
    // cout << first << endl;
    cout << "large" <<  " " << first << " " << "second large" << " " << second << endl;
    cout << "loc" <<  " " << loc1 << " " << "loc2" << " " << loc2 << endl;
    return;
}

int main() {
        int a[] = { 5, 3, 18, 20  };
        int n = sizeof(a) / sizeof(a[0]);
        Find(a, n);
        return 0;
}