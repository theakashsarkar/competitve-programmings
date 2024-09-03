#include <stdio.h>
#include <iostream>
#define WHITE 1
#define GRAY 2
#define BLACK 3

using namespace std;

int adj[100][100];
int color[100];
int node, edge;

void dfsVisit(int x) {
    color[x] = GRAY;
    for (int i = 0; i < node; i++) {
        if (adj[x][i] == 1) {
            dfsVisit(i);
        }
    }
    color[x] = BLACK;
}

void dfs() {
    for (int i = 0; i < node; i++) {
        color[i] = WHITE;
    }

    for (int i = 0; i < node; i++) {
        if (color[i] == WHITE) {
            dfsVisit(i);
        }
    }
}

int main() {
    freopen("input.txt", "r", stdin);
    int n1, n2;
    cin >> node;
    cin >> edge;
    for (int i = 0; i < node; i++) {
        cin >> n1;
        cin >> n2;
        adj[n1][n2] = 1;
        adj[n2][n1] = 1;
    }

    // for (int i = 0; i < node; i++) {
    //     for(int j = 0; j < node; j++) {
    //         cout << adj[i][j] << "\t";
    //     }
    //     cout << "\n";
    // }
    dfs();
    for (int i = 0; i < sizeof(color)/sizeof(color[0]); i++) {
        cout << color[i] << "\n";
    }
}