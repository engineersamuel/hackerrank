#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int arr_i = 0;arr_i < n;arr_i++){
        cin >> arr[arr_i];
    }
    
    int done = false;
    // Reduce each stick size by 2
    while (!done) {
        
        // Count up any positive integer and determine the cutSize
        int count = 0;
        int cutSize = 1001;
        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] > 0) {
                count += 1;
                cutSize = min(arr[i], cutSize);
            }
        }
        
        // Break early if there are now more items to cut
        if (count <= 0 || cutSize == 0) {
            break;
        }
        
        // Print out the # of positive integers before the cut
        cout << count << endl;
        
        // Subtract the cutSize from each element
        for (int i = 0; i < arr.size(); i++) {
            arr[i] -= cutSize;
        }
    }
    return 0;
}
