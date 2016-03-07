#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

vector<int> toArr(int);
    
vector<int> toArr(int num) {
    vector<int> arr;
    while (num != 0) {
        arr.emplace_back(static_cast<int>(num % 10));
        num = static_cast<int>(num / 10);
    }
    reverse(arr.begin(), arr.end());
    return arr;
}

int main(){
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int n;
        cin >> n;
        vector<int> arr = toArr(n);
        int numDiv = 0;
        for (int i = 0; i < arr.size(); i++) {
            if ((arr[i] != 0) && (n % arr[i] == 0)) {
                numDiv += 1;
            }
        }
        cout << numDiv << endl;
    }
    return 0;
}
