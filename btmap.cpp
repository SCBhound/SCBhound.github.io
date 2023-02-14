#include<bits/stdc++.h>

using namespace std;

int main (){
	int t;
	cin >> t;
	while(t--){
	int n;
	cin >> n;
	set<int> se;
	for(int i=0; i<n; i++){
		int x;
		cin >>x;
		se.insert(x);
	}
	cout << se.size() << endl;
	
	
//	map<int, int> mp;
//	for(int i=0; i<n; i++){
//		int x;
//		cin >>x;
//		mp[x]=true;
//	}
//	cout << mp.size() << endl;


//	int a[n];
//	for(int i=0; i<n; i++){
//		cin >> a[i];
//	}
//	sort(a, a+n);
//	int dem=1;
//	for(int i=0; i<n; i++){
//		if(a[i+1] != a[i]){
//			dem ++;
//		}
//	}
//	cout << dem << endl;
}
return 0;
}
