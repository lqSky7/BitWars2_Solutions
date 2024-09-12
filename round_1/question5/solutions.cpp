#include<bits/stdc++.h>
using namespace std;


int main(){
vector<int> buildings{4,3,2,1};

if(buildings.size() == 0){
    cout<<0<<endl;
    return 0;
}

if(buildings.size() == 1){
    cout<<0<<endl;
    return 0;
}




int max1 =1;
int cnt = 0;

for(int i=0;i<buildings.size()-1;i++)
{
    if(buildings[i]<buildings[i+1])
    {
        cnt++;
    }
    else{max1 = max(cnt, max1);
    cnt = 0;
    continue;}

}
cout<<max1<<endl;
};