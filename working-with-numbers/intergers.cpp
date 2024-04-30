// #include <iostream>
// #define <set>
// using namespace std;

// int main() {
//     std::set<char> a;
//     a.insert('a');
//     a.insert('F');
//     a.insert('G');
//     for (auto& str : a) {
//         std::cout << str << ' ';
//     }
//     std::cout << '\n';
//     return 0;
// }

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int totalBalloon;
    vector<int> hightBalloon;
    int ans = 0;
    cin >> totalBalloon;
    while (totalBalloon--)
    {
        int x;
        cin >> x;
        hightBalloon.push_back(x);
    }
    
    for (int vacBegin = 0; vacBegin <= hightBalloon.size() - 1; vacBegin++) {
        if (hightBalloon[vacBegin] == 0) 
           continue;
        ans++;
        int storeVactorValue = hightBalloon[vacBegin];    
        for (int popped = vacBegin; popped < hightBalloon.size(); popped++ )
        {
            if (storeVactorValue == hightBalloon[popped]) {
                hightBalloon[popped] = 0;
                storeVactorValue --;
            }

            if (storeVactorValue == 0) break;
        }
    }
  cout << ans << endl;
  return 0;
}