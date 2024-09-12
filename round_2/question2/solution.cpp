#include<bits/stdc++.h>
using namespace std;


int main(){
// internal test inputs:
vector<int> buildings{1,2,3,1,5,18,25,26,30,35,24,1,5,23,800};
vector<int> energyArr{1,2,50,1,5,18,25,24,23,23,23,1,1,1,1};
int givenEnergy = 11;
int temp = givenEnergy;

int max1 =1;
int cnt = 0;

for(int i=0;i<buildings.size()-1;i++)
{
    if(buildings[i]<buildings[i+1])
    {
        if(givenEnergy>0){
        givenEnergy -= energyArr[i];
        cnt++;
        }
    }
    else if(buildings[i] >buildings[i+1])
    {   max1 = max(max1, cnt);
        cnt = 0;
        givenEnergy = temp;
    }
    else if(givenEnergy < 0){
        max1 = max(max1, cnt);
        givenEnergy = temp;

    }

}
        cout<<max1<<endl;
};