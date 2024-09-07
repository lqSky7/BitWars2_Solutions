#include<bits/stdc++.h>
using namespace std;


int main(){
// internal test inputs:
vector<int> buildings{1,2,3,1,5,18,25,24,1,5,17,23};
vector<int> energyArr{1,2,3,1,5,18,25,24,1,1,1,1};
int givenEnergy = 10;


int counter = 0;
map<int, int> buildingIndexTracker;



for(int i=0;i<buildings.size();i++){
    if(buildings[i]<buildings[i+1]){
        counter++;
        continue;
    }
    

    else{
        buildingIndexTracker.insert(std::make_pair(i,counter));
        for(const auto& z: buildingIndexTracker){           //debugging
            std::cout<<z.first<<" "<<z.second<<endl;        //debugging
        }
    }
}

}