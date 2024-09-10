 #include <iostream>
#include <algorithm>

using namespace std;

int main () {
  int numberPeople, budget, hotel, week, price, beds;
  while (cin >> numberPeople >> budget >> hotel >> week >> price >> beds) {
    int ans[1000], cost = 0, length = 0;
    for (int i = 0; i < hotel; i++) {
      cin >> price;
      for (int j = 1; j <= week; j++) {
        cin >> beds;
        if (beds >= numberPeople) {
          cost = numberPeople * price;
          if ( cost <= budget ) {
            ans[length++] = cost;
          }
        }
      }
    }
    if (length == 0) {
      cout << "Stay Home" << endl;
    } else {
      sort(ans, ans + length);
      cout<<ans[0]<<endl;
    }
  }
}