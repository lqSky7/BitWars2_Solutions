#include<bits/stdc++.h>
using namespace std;

void nowprinter(vector<int> a){
    for(const auto i: a){cout<<i<<endl;}

};

int main(){
vector<int> flwrArr = {1,0,0,1,1,0,0,0,0,1,1,1,1};  //fix this test case pls

int numberFlw = 1;

bool safeArr[flwrArr.size()] = {};
for(int i=0;i<flwrArr.size();i++){
    safeArr[i] = true;
}

//edge cases
if(flwrArr[0]==1){ 
    safeArr[0] = false;
}

if(flwrArr[-1]==1){
    safeArr[0] = false;
}



for(int i = 1;i<flwrArr.size()-1;i++){
    if(flwrArr[i]==1){safeArr[i-1]=safeArr[i]=safeArr[i+1]=false;
    
    }


}
for(int i = 1;i<flwrArr.size()-1;i++){
    if(safeArr[i]==safeArr[i+1]==true){
        safeArr[i] = false;
    }
}

int cnt =0;
for(int i=0;i<flwrArr.size();i++){
    if(safeArr[i] == true){
      cnt++;
        
    }
}
if(cnt>=numberFlw){
    cout<<"Safe!"<<endl;
    cout<<endl<<cnt<<endl;
}
else{cout<<"Not safe"<<endl;}
cout<<endl<<cnt<<endl;
};
