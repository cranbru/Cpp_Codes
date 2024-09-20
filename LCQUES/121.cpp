#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector <int> v1 = {7,1,5,3,16,4};
    int maxprofit = 0;
    int minbuy = v1[0];
    for(int i =0;i<v1.size();i++){
        if(i!=0 && v1[i]>minbuy){
            continue;
        }
        for(int j = i+1;j<v1.size();j++){
            if(v1[j]>v1[i]){
                int profit = v1[j]-v1[i];
                if(profit>=maxprofit){
                    maxprofit=profit;
                    minbuy=min(minbuy,v1[i]);
                }
                
            }
        }
    }
    cout<<"MAX = "<<maxprofit<<endl;
    return 0;
}