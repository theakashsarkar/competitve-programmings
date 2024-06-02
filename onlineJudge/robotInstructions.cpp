#include <iostream>
#include <string.h>
#include <vector>
using namespace std;

int main()
{
    int numberTestCase;
    cin >> numberTestCase;
    cin.ignore(256, '\n');
    while (numberTestCase--)
    {
        int numberOfInput;
        cin >> numberOfInput;
        vector<int> instructions;
        int ans = 0;
        while (numberOfInput--)
        {   
            string numberOfInstruction;
            cin >> numberOfInstruction;
            if (numberOfInstruction == "LEFT")
            {
                --ans;
                instructions.push_back(-1);
            }else if (numberOfInstruction == "RIGHT")
            {
                ++ans;
                instructions.push_back(1);
            } else {
                int i;
                cin >>  numberOfInstruction >> i;
                ans  += instructions[i-1];
                instructions.push_back(instructions[i-1]);
            }

        }
        cout << ans << endl;

    }
}