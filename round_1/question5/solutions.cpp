#include<bits/stdc++.h>
using namespace std;


int main(){
vector<int> buildings{1,2,3,1,5,18,25,26,24,1,5,23};

int max1 =0;
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