#include<bits/stdc++.h>
using namespace std;


int main(){
// internal test inputs:
vector<int> buildings{1,2,3,1,5,18,25,24,1,5,23};
vector<int> energyArr{1,2,3,1,5,18,25,24,1,1,1};
int givenEnergy = 10;


int counter = 0;
unordered_map<int, int> buildingIndexTracker;



for(int i=0;i<buildings.size();i++){
    if(buildings[i]<buildings[i+1]){
        counter++;
        continue;
    }
    

    else{
        buildingIndexTracker.insert(std::make_pair(i,counter)); //cant use counter as key because it might repeat. 
        counter = 0;
        
        }
    }

for(const auto& z: buildingIndexTracker){           //debugging
    std::cout<<z.first<<" "<<z.second<<endl;        //debugging
}
//somehow sort the map by value-> create a new empty map, sort the old map by value and insert key value pair into new map
map<int, int> BuildingIndexTracker_SORTED;


// ????? this stuff should be looped somehow: Done.

for(int i=1;i<=buildingIndexTracker.size();i++){
    int max1 = 0;


//find key with that max value: done
//insert that into new map; done

for( const auto& z: buildingIndexTracker){
    max1 = max(max1, z.second);

for(const auto& z: buildingIndexTracker){
    if(max1 == z.second){
        BuildingIndexTracker_SORTED.insert(std::make_pair(z.first,z.second));
        buildingIndexTracker.delete
    }
}
}
}

// define a check function that sums from index i to i-counter+1 and returns true if sum is less than given energy
// profit

}