#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;

int main()
{
    int q;
    cin >> q;
    set<int> s1;
    set<int>::iterator it;

    while (q--){
        int y,x;

        cin >> y >> x;

        if(y==1){
            s1.insert( x);
        }
            
        else if(y==2)
            s1.erase(x);
        else if(y==3){
            //set<int>::iterator it = s1.find(x);
            it = s1.find(x);

            //cout << " it --> " << *it << endl;

            if(it != s1.end())
                cout << "Yes" << endl;
            else
                cout << "No" << endl;
        }

    }

    /*set<int>::iterator it2;
        cout << endl;

        for(it2 = s1.begin(); it2 != s1.end(); it2++)
            cout << "\t" << *it2;
        
        cout << endl;*/

    
}
