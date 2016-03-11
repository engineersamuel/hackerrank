#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


bool recurseRow(vector<string>*, vector<string>*, int, int, int, int, int, int);
bool recurseColumn(vector<string>*, vector<string>*, int, int, int, int);


/**
 * GCidx is where the first occurrence of the starting was found
 */
bool recurseRow(vector<string>* G, vector<string>* P, int R, int r, int gRidx, int gCidx, int pRidx, int pCidx) {
    if (gRidx >= R || pRidx >= r) return true;
    return recurseColumn(G, P, gRidx, gCidx, pRidx, pCidx) && recurseRow(G, P, R, r, gRidx + 1, gCidx, pRidx + 1, pCidx);


}
bool recurseColumn(vector<string>* G, vector<string>* P, int gRidx, int gCidx, int pRidx, int pCidx) {
    if (gCidx >= (*G)[0].size() || pCidx >= (*P)[0].size()) return true;
    bool eq = (*G)[gRidx].at(gCidx) == (*P)[pRidx].at(pCidx);
    if (!eq) return false;
    return eq && recurseColumn(G, P, gRidx, gCidx + 1, pRidx, pCidx + 1);
}

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int R;
        int C;
        cin >> R >> C;
        vector<string> G(R);
        for(int G_i = 0;G_i < R;G_i++){
           cin >> G[G_i];
        }
        int r;
        int c;
        cin >> r >> c;
        vector<string> P(r);
        for(int P_i = 0;P_i < r;P_i++){
           cin >> P[P_i];
        }
        
        // Iterate through each row of the main matrix
        int contains = false;
        
        for (int row = 0; row <= R - r; row++) {
            for (int col = 0; col <= C - c; col++) {

                // Attempt to find the P string within the subset of the G row
                int fIdx = (int)G[row].find(P[0], col);
                if (fIdx != string::npos) {
                    contains = recurseRow(&G, &P, R, r, row, fIdx, 0, 0);
                }
                if (contains) break;
            }
            if (contains) break;
        }

// This snippet passes all but 1 or 2 test cases.  I wanted to make this work but it is missing some edge cases, I suspect
// I was not correctly handling the find using the progressive smaller substring like above.  Before I explored that approach
// I realized that the solution is so much more elegant using recurssion so I stuck with that.  Recording this just for reference
// in case I want to re-visit the non-recurssion approach.
//    int contains = false;
//    for (int i = 0; i < R; i++) {
//
//        // If we've found at least the string in this row, then n2 search
//        if (G[i].find(P[0]) != string::npos) {
//
//            for (int row = i; row < R; row++) {
//                for (int col = 0; col < G[0].size(); col++) {
//
//                    for (int row2 = 0; row2 < r && row + row2 < R; row2++) {
//                        for (int col2 = 0; col2 < P[0].size() && col + col2 < G[0].size(); col2++) {
//                            contains = (P[row2].at(col2) == G[row + row2].at(col + col2));
//
//                            // If this actually does contain, then break so we can go to the next row
//                            if (!contains) break;
//                        }
//                        if (!contains) break;
//                    }
//                    if (contains) break;
//                }
//                if (contains) break;
//            }
//            if (contains) break;
//        }
//    }


        if (contains) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
