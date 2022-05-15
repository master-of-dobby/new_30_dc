    #include <cmath>
    #include <cstdio>
    #include <vector>
    #include <iostream>
    #include <algorithm>
    using namespace std;


    int main() {
        /* Enter your code here. Read input from STDIN. Print output to STDOUT */  

        int n,q;
        cin >> n;
        vector <int> v1;

        for(int i=1; i<=n; i++){
            int key;
            cin >> key;
            v1.push_back(key);
        }
        //v1.resize(n);

        cin >> q;

        while(q--){
            int e;
            cin >> e;

            vector<int>::iterator k;
            k = lower_bound (v1.begin(), v1.end(), e);

            if(e==v1.at(k-v1.begin())){
                cout << "Yes ";
                cout << (k-v1.begin()+1) << endl;
            } 
            else{
                cout << "No ";
                cout << (k-v1.begin()+1) << endl;
            }


            /*
            for(int i=0; i<v1.size(); i++){
                if(e==){
                    cout << "Yes ";
                    cout << (k-v1.begin()+1) << endl;
                    break;
                }
                else{
                    cout << "No ";
                    cout << (k-v1.begin()+1) << endl;
                    break;
                }
            }*/

        
        }


        return 0;
    }
