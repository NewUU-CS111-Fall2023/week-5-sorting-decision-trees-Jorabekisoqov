#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
int main(){


int n;
cin>>n;
for(int i=0;i<n;i++) {

}

    vector<int> list_of_coins;
int m;
for(int i=0;i<n;i++){
    cin>>m;

    list_of_coins.push_back(m);
}

    int k=1;

    while(k<list_of_coins.size()){
        int m=list_of_coins[k];
        int j=k-1;
        while (j>=0 && m>list_of_coins[j]){
           list_of_coins[j+1]=list_of_coins[j];
           j=j-1;
        }
        list_of_coins[j+1]=m;
        k=k+1;
    }
    for(int i=0;i<n;i++){
        cout<<list_of_coins[n-i-1]<<endl;
    }

}


