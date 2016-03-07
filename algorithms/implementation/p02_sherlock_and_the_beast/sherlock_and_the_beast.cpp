#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        
        int r = n;
        // Continue to reduce the problem down until it is a multiple of 3
        while (r % 3 != 0) {
            r = r - 5;
        }
        
        if (r < 0) {
            cout << "-1" << endl;
        } else {
            for (int i = 0; i < r; i++) {
                cout << "5";
            }
            for (int i = 0; i < (n - r); i++) {
                cout << "3";
            }
            cout << endl;
        }
    }
    return 0;
}
