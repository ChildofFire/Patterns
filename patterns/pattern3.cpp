#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int i,j;
if(n%2){
    for (i=0;i<n;i++)
    {
        if(i<n/2){
            for(j=0;j<n;j++) cout<<" ";
            for(j=0;j<=i;j++) cout<<"*";
        }
        else if(i==n/2){
            for(j=0;j<n+n/2+1;j++) cout<<"*";
        }
        else{
            int arrowhead=n/2+1;
            for(j=0;j<n;j++) cout<<" ";
            for(j=0;j<arrowhead-(i-n/2);j++) cout<<"*";
        }
        cout<<"\n";
    }
}
return 0;
}
