#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        int begin, end;
        cin >> begin;
        cin >> end;
        int beginCeil = static_cast<int>(ceil(sqrt(begin)));
        int endFloor = static_cast<int>(floor(sqrt(end)));
        cout << endFloor - beginCeil + 1 << endl;
    }
    return 0;
}

