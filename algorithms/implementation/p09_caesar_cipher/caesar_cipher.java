#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    string s;
    cin >> s;
    int k;
    cin >> k;
    
    for (auto &c : s) {
        if (isalpha(c)) {
            int base = isupper(c) ? (int)'A' : (int)'a';
            cout << (char)(base + ((int)c - base + k) % 26);
        } else {
            cout << c;
        }
    }
    cout << endl;
    return 0;
}
