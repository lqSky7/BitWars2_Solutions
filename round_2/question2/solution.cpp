#include<bits/stdc++.h>
using namespace std;


int main(){
// internal test inputs:
vector<int> buildings{1,2,3,4,1,2,3,4};
vector<int> energyArr{5,5,5,5,5,5,5,5};

int givenEnergy = 11;
int temp = givenEnergy;

int max1 =1;
int cnt = 0;
//issue 1: energy should be reset only when a valid building sequence starts?? is it really an issue? why not just reset when it's zero and record the value in max1?
// issue 2
for(int i=0;i<buildings.size()-1;i++)
{
    if(buildings[i]<buildings[i+1])
    {   
        
        if(givenEnergy>0){
        givenEnergy -= energyArr[i];
        cnt++;
        // cout<<"if 1 debug:"<<endl<<cnt<<endl<<max1<<endl;
        }
    }
    if(buildings[i] >buildings[i+1])
    {   max1 = max(max1, cnt);
        cnt = 0;
        // cout<<"if 2 debug:"<<endl<<givenEnergy<<endl<<cnt<<endl<<max1<<endl;
    }
    if(givenEnergy < 0){
        max1 = max(max1, cnt);
        // cout<<"if 3 debug:"<<endl<<cnt<<endl<<max1<<endl;
        givenEnergy = temp;
        cnt =0;

    }

}
        cout<<endl<<max1<<endl;
};