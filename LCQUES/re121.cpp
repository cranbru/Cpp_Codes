#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector <int> prices = {7,6,4,3,1};
    int minprice = prices[0];
    int maxprofit = 0;
    for(int i =0 ; i<prices.size();i++){
        minprice = min(minprice,prices[i]);
        maxprofit = max(maxprofit,prices[i]-minprice);
    }
    cout<<"MAX PROFIT : "<<maxprofit<<endl;
    
    return 0;
}