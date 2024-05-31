#include <iostream>
#include<algorithm>
using namespace std;


int main() {
    int numberTestCase;
    cin >> numberTestCase;
    for(int i = 1; i <= numberTestCase; i++)
    {
        int numberInput;
        int a;
        int ans = 0;
        cin >>numberInput;
        while(numberInput--) {
            cin >> a;
            ans = max(a, ans);
        }
        cout << "Case " << i << ": " << ans << endl; 
    }
    
}
