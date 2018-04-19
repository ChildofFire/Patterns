#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int maxstars=2*n-1;
int maxspaces=maxstars/2;
int lines=3*n-1;
int i,j;
for(i=0;i<lines;i++){
    if(i<n){
        for(j=0;j<maxspaces-i;j++) cout<<" ";
        for(j=0;j<2*(i+1)-1;j++) cout<<"*";
    }
    else if(i>=n && i<maxstars){
        for(j=0;j<maxspaces;j++) cout<<" ";
        cout<<"@";
    }
    else if(i==maxstars){
        for(j=0;j<maxspaces;j++) cout<<" ";
        for(j=0;j<n;j++) cout<<"@";
        cout<<"*";
    }
    else {
        int diff=i-2*n;
        for(j=0;j<(2*maxspaces-diff);j++) cout<<" ";
        for(j=0;j<(2*(diff+2)-1);j++) cout<<"*";
    }
    cout<<"\n";
}
return 0;
}
