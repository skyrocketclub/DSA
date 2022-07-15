#include <iostream>
#include <vector>

using std::vector;
using std::cout;
using std::cin;
using std::endl;

//A possible fast solution...
void maximumPairProduct(vector<long long> &a){
    /*
        1. Find the largest
        2. FInd the second largest
        3. Return the product asap
    */
   long long product{};
   long long first{0}; //to store the position of the largest variable in the vector
   long long second{0}; // ........................... second largest variable in the vector

//the largest is found
    for(size_t i{0}; i<a.size(); i++){
        if(a.at(i)>a.at(first)){
            first = i;
        }
    }
//the second largest is found
for(size_t j{0}; j<a.size(); j++){
    if(a.at(j)>a.at(second) &&(a.at(j) != a.at(first) || a.at(j) < a.at(first))){
        second = j;
    }
}
cout<<"Amongst the Array of : ";
for(auto &elements : a){
    cout<<elements<<" ";
}
cout<<endl;
cout<<"The Maximum pairwise product is: "<<a.at(first)<<" x "<<a.at(second) <<" = " << a.at(first) * a.at(second)<<endl;
}

int main(){

    int n;
    int member;
    vector<long long> listMem{};
    cout<<"Vector Size: ";
    cin>>n; 
    cout<<"Enter the elements\n";
    for(int i{0}; i<n; i++){
        cin>>member;
        listMem.push_back(member);
    }
    maximumPairProduct(listMem);
    return 0;
}