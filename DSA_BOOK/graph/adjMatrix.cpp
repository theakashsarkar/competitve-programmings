#include <stdio.h>
#include <iostream>

using namespace std;

int adj[100][100];

int main() {
    freopen("input.txt", "r", stdin);
    int node, edge;
    int n1, n2;
    cin >> node;
    cin >> edge;

    for (int i = 0; i < edge; i++) {
        cin >> n1;
        cin >> n2;
        adj[n1][n2] = 1;
        adj[n2][n1] = 1;
    }

    for (int i = 0; i < node; i++) {
        if (adj[3][i]) {
            cout << i << "\n";
        }
    }

    // for (int i = 0; i < node; i++) {
    //     for (int j = 0; j < node; j++) {
    //         cout << adj[i][j] << "\t";
    //     }
    //     cout << "\n";
    // }

    return 0;
}

