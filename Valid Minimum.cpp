#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int a[3];
	    cin>>a[0]>>a[1]>>a[2];
	    sort(a,a+3);
	    if(a[0]==a[1]){
	        cout<<"YES"<<"\n";
	    }
	    else {
	        cout<<"NO"<<"\n";
	    }
	}
	return 0;
}