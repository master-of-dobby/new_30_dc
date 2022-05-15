#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,k;
    cin >> n;

    vector<int> v;

    for(int i=0; i<n; i++){
        cin >> k;
        v.push_back(k);
    }
    
    sort(v.begin(), v.end());

    //for(auto i=v.begin(); i!=v.end(); i++)
    //    cout << *i << " ";
    
    for(auto x: v)
        cout << x << " ";
    

    return 0;
}
