#include <iostream>
#include <deque> 
#include<iterator>
#include<algorithm>

using namespace std;

void printKMax(int a[], int n, int k){
    deque<int> q(k);
    int i;

    for(i=0; i<k; i++){

        while((!q.empty()) and (a[i] >= a[q.back()]))
            q.pop_back();
        
        q.push_back(i);
    }

    for(; i<n; i++){

        cout << a[q.front()] << " ";

        while((!q.empty()) && (q.front() <= i-k))
            q.pop_front();
        
        while((!q.empty()) && (a[i] >= a[q.back()]))
            q.pop_back();

        q.push_back(i);


    }

    cout << a[q.front()];
    cout << endl;

}

int main(){
  
	int t;
	cin >> t;
	while(t>0) {
		int n,k;
    	cin >> n >> k;
    	int i;
    	int arr[n];
    	for(i=0;i<n;i++)
      		cin >> arr[i];
    	printKMax(arr, n, k);
    	t--;
  	}
  	return 0;
}