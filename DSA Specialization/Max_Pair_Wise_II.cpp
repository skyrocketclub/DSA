#include <iostream>
#include <vector>


using std::vector;
using std::cout;
using std::cin;
using std::endl;

//A possible fast solution...
long long maximumPairProduct(vector<long long> &a){

   long long first{0}; //to store the position of the largest variable in the vector
   long long second{0}; // ........................... second largest variable in the vector

//the largest is found
    for(size_t i{0}; i<a.size(); i++){
        if(a.at(i)>a.at(first)){
            first = i;
        }
    }
//the second largest is found
if(first == 0){second = 1;}

for(size_t j{0}; j<a.size(); j++){
    if(j != first && a.at(j) > a.at(second)){
        second = j;
    }
}


return a.at(first) * a.at(second);
}

int main(){
    int num,val;
    vector<long long> a;
    long long result;

    cin>>num;
    for(int i{0}; i<num; i++){
        cin>>val;
        a.push_back(val);
    }
    result = maximumPairProduct(a);
    cout<<result<<endl;
    return 0;
}