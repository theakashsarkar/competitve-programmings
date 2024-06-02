// #include <iostream>
// #include<vector>
// using namespace std;

// int main () {
//     int numberTestCase;
//     cin >> numberTestCase;
//     vector<int> passBagg;
//     int totalBaggPass = 0;
//     while (numberTestCase--) {
//         float length, width, depth, kg;
//         cin >> length >> width >> depth >> kg;
//         float bagSize = length + width + depth;
//         if (bagSize <= 125 && kg <= 7.00) {
//             passBagg.push_back(1);
//         } else {
//             passBagg.push_back(0);
//         }
//     }
//     for (int i = 0; i < passBagg.size(); i++) {
//         cout << passBagg[i] << endl;
//         if (passBagg[i] == 1) {
//             totalBaggPass += passBagg[i];
//         }
//     }
//     cout << totalBaggPass << endl;


// }#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,i,j,k,flag=1,total=0;
    float  length, width, depth ,weight;
    cin>>t;
    while(t--){
        cin>>length>>width>>depth>>weight;
        if(weight<=7.00){
            if(length<=56 && width <=45 && depth<=25)
            {
                flag=1;
            }
            else if(length+width+depth<=125 )
            {
                flag=1;
            }
            else
            flag=0;
        }
        else{
            flag=0;
        }
        cout<<flag<<endl;
        total+=flag;
    }
    cout<<total<<endl;
    return 0;
}