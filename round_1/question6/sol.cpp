#include<bits/stdc++.h>
using namespace std;

 

int main(){

int KingdomArr[3][3] = {{1,1,0}, {1,1,0}, {0,0,1}};
int n = 3;
//edgecase 1: digonal not 1
//edgecase 2: if a is connected to b, but b is not connected to a.

int numberOfProvinces = n;


for(int i=0;i<n;i++){

    
    for(int j=0;j<n;j++){
        if(j!=i){
        if(KingdomArr[j][i]==KingdomArr[i][j] && KingdomArr[j][i]==1){
            numberOfProvinces--;
        }}
    }
}

cout<<numberOfProvinces<<endl;
}