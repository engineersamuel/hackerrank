#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int exch(int num, int rate) {
    if (floor(num / rate) < 1) return 0;
    return floor(num / rate) + exch(floor(num / rate) + (num % rate), rate);
}

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        int c;
        int m;
        cin >> n >> c >> m;

        int total = 0;
        int bought = floor(n / c);
        total += bought;
        total += exch(bought, m);
        cout << total << endl;
    }
    return 0;
}
