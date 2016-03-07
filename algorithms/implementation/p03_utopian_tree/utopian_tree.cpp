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
        int h = 1;
        for (int i = 1; i <= n; i++) {
            // Spring *2
            if (i % 2 != 0) {
                h *= 2;
            }
            // Summer +1
            else {
                h += 1;
            }
        }
        cout << h << endl;
    }
    return 0;
}
