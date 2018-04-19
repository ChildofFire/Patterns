#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,i,j,maxspaces;
	cin>>n;
	if(n%2)
		maxspaces=n/2;
	else
		maxspaces=(n-1)/2;

	for(i=1;i<=n;i++){
		if(i<3 || !(i%2)){
			for(j=0;j<maxspaces;j++) cout<<" ";
			cout<<"*";
		}
		else{
			for(j=0;j<maxspaces - i/2; j++) cout<<" ";
			for(j=0;j<i;j++) cout<<"*";
		}
		cout<<"\n";
	}

	return 0;
}
