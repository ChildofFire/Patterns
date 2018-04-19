#include<bits/stdc++.h>
using namespace std;

vector<int> getSpaces(int n){
    vector<int> spaces;
    spaces.push_back(0);
    int i,counter=0;
    for(i=n-1;i>=2;i--){
        spaces.push_back(spaces[counter]+i);
        counter++;
    }
    spaces.push_back(spaces[counter]+2); counter++;
    spaces.push_back(spaces[counter]+1); counter++;
    for (i=1;i<n-1;i++){
        spaces.push_back(spaces[counter]+i);
        counter++;
    }
    return spaces;
}

vector<int> getStars(int n){
    vector<int> stars;
    int i;
    for(i=n;i>0;i--)
        stars.push_back(i);
    for(i=2;i<=n;i++)
        stars.push_back(i);
    return stars;
}

int main(){
int n,i,j;
cin>>n;
if (n==1) cout<<"*";
else if(n==2) {cout<<"   **\n  *\n**";}
else{
    vector<int> spaces=getSpaces(n);
    vector<int> stars=getStars(n);
    for(i=0;i<2*n-1;i++){
            for(j=0;j<spaces[spaces.size()-1-i];j++) cout<<" ";
            for(j=0;j<stars[i];j++) cout<<"*";
            cout<<"\n";
    }
}
return 0;
}
