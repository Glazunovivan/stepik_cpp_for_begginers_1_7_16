#include <iostream>
#include <vector>
using namespace std;

int main() {
    int bowling,throws;    //кегли,броски
    cin>>bowling>>throws;
    
    vector<int> I(throws);
    vector<int> r(throws);
    
    for(int i=0;i<throws;i++){
        cin>>I[i];
        cin>>r[i];
    }
    
    
    return 0;
}