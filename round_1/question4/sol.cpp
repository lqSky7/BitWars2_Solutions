#include<bits/stdc++.h>
using namespace std;

int main(){
vector<int> flwrArr = {0,0,0,0,1,0,0,0};
// int numberofEmptyPlots = flwrArr.size() -accumulate(flwrArr.begin(), flwrArr.end(), 0);

// int numberFlw = 50;

bool safeArr[flwrArr.size()] = {};
for(int i=0;i<flwrArr.size();i++){
    safeArr[i] = true;
}

// for(const auto r: safeArr){
//     cout<<r<<endl;
// }

for(int i = 1;i<flwrArr.size()-1;i++){
    if(flwrArr[i]==1){safeArr[i-1]=safeArr[i]=safeArr[i+1]=false;}
}

int cnt =0;
for(int i=0;i<flwrArr.size();i++){
    if(safeArr[i] == true){
        cnt++;
        
    }
}
cout<<cnt<<endl;

};