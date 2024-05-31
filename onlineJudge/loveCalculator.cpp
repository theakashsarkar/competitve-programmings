#include <iostream>
#include <string.h>
using namespace std;

string a, b;
bool is_lower(char c) {
    return (c >= 'a' && c <= 'z');
}

bool is_upper(char c) {
    return (c >= 'A' && c <= 'Z');
}

int sum(int n) {
    int total = 0;
    while(n != 0) {
        total += n % 10;
        n /= 10;
    }

    if (total > 9) {
        return sum(total);
    }

    return total;
}

int sumCal(string ch) {
    int sum = 0;
    for (int i = 0; i <= ch.length(); i++) {
        if (is_lower(ch[i])) {
            sum += ch[i] - 96;
        }

        if (is_upper(ch[i])) {
            sum += ch[i] - 64;
        }
        
    }
    return sum;
}

int main () {
  while(getline(cin, a) && getline(cin, b)) {
    float f = (float) sum(sumCal(a)) / sum(sumCal(b));
    printf("%.2f %%\n", f > 1? 100 / f : 100 * f);    
  }  
}

// 3


// 2
// ----
// 100
// 20 

// 4
// -----
// 4
// 3
// 2
// 1

// 4
// ----
// 1
// 2
// 3
// 4