// Prob: https://www.hackerrank.com/challenges/variable-sized-arrays/problem
// Sol:

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n, q;
    cin >> n >> q;

    int *mtr[n];

    for(int i=0; i<n; i++){
        int s;
        cin >> s;
        mtr[i] = new int[s];
        for(int j=0; j<s; j++){
            cin>>mtr[i][j];
        }          
    }

    for(int i=0; i<q; i++){
        int r, c;
        cin >> r;
        cin >> c;
        cout << mtr[r][c]<<endl;
    }
    
    return 0;
}

//Alt Soln with vectors:

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, q, size, value, which, index;
    cin >> n >> q;
    vector<vector<int>> nvec;
    for (int i = 0; i < n; ++i) {
        cin >> size;
        vector<int> ivec;
        for (int j = 0; j < size; ++j) {
            cin >> value;
            ivec.push_back(value);
        }
        nvec.push_back(ivec);
    }
    for (int k = 0; k < q; ++k) {
        cin >> which >> index;
        cout << nvec[which][index] << endl;
    }
    return 0;
}
