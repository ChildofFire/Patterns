#include<bits/stdc++.h>
using namespace std;

int fibonacci(int n){
    if (n<3) return 1;
    int a=1,b=1,c=2;
    while(n>3){
        a=b;
        b=c;
        c=a+b;
        n--;
    }
    return c;
}

void printTriangle(int height,int maxspaces){
int i,j;
for (i=1;i<=height;i++)
{
    for(j=0;j<maxspaces;j++) cout<<" ";
    for(j=0;j<2*i-1;j++)
        if(j%2) cout<<" ";
        else cout<<"*";
    maxspaces--;
    cout<<"\n";
}
}

int main(){
int n;
cin>>n;
int maxspaces=fibonacci(n)-1;
for(int i=1;i<=n;i++)
	printTriangle(fibonacci(i),maxspaces);
return 0;
}
