#include <iostream>
#include <vector>
using namespace std;
int linearSearch(vector <int> arr , int key){
    for(int i = 0; i < arr.size(); i++){
        if(arr[i] == key){
            return i;
        }
    }
    return -1;
}
int main(){
    vector<int>ARRAY={1,2,3};
    int TARGET = 3;
    cout<<linearSearch(ARRAY , TARGET);
    return 0;
}