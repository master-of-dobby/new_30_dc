#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin >> n;

    vector<int> v;

    for(int i=0; i<n; i++){
        int k;
        cin >> k;
        v.push_back(k);
    }
    int a,p,q;

    cin >> a;
    v.erase(v.begin()+a-1);

    //for(int i=0; i<v.size(); i++)
    //   cout << v[i] << "\t";

    //cout << endl;

    cin >> p >> q;
    v.erase(v.begin()+p-1, v.begin()+q-1);

    cout << v.size() << endl;

    for(int i=0; i<v.size(); i++)
        cout << v[i] << " ";
    
    return 0;
}
