#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int l, r;
		long tong=0;
		cin>>l>>r;
		for(int i=l;i<=r;i++){
			tong=tong+i;
		}
		cout<<tong<<endl;
	} 
	return 0;
} 
