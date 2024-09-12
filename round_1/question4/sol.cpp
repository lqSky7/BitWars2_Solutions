#include<bits/stdc++.h>
using namespace std;

int main(){
vector<int> flwrArr = {1,0,0,0,1,0,0,1};
int numberofEmptyPlots = flwrArr.size() -accumulate(flwrArr.begin(), flwrArr.end(), 0);
// cout<< numberofEmptyPlots<<endl; perfect until here
int numberFlw = 50;
int exactNumber = numberofEmptyPlots;

// check for all possible cases:
if(numberofEmptyPlots == 0){
    if(numberFlw != 0){
        cout<<"False";
    }
    else{
        cout<<"True";
    }
}



//case 2: starting/ending pot is 1
if(flwrArr[0] == 1 or flwrArr[-1]==1){
    exactNumber -= 2*flwrArr[0];
    exactNumber -= 2*flwrArr[-1];
}

//case 3: __*__
for(int i=1;i<flwrArr.size()-2;i++){
    if(flwrArr[i]==1){
        if(flwrArr[i-1] == flwrArr[i+1]== 0){exactNumber -= 3;}
        else{break;}
    }
}
//case 4: **

// case 5: _*_*_


cout<<exactNumber<<endl;
};