#include <iostream>
#include <vector>
#include <cstdlib> //for random numbers

using std::vector;
using std::cout;
using std::cin;
using std::endl;

//A possible fast solution...
long long maximumPairProduct(vector<int> &a){
    /*
        1. Find the largest
        2. FInd the second largest
        3. Return the product asap
    */
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
cout<<"Amongst the Array of : ";
for(auto &elements : a){
    cout<<elements<<" ";
}
cout<<endl;
cout<<"The Maximum pairwise product is: "<<a.at(first)<<" x "<<a.at(second) <<" = " << a.at(first) * a.at(second)<<endl;
return a.at(first) * a.at(second);
}

long long MaxPairwiseProduct(const vector<int>& numbers){
    long long result = 0;
    int n = numbers.size();
    for(int i = 0; i<n; ++i){
        for(int j = i+1; j<n; ++j){
            if(((long long)numbers[i]) * numbers[j]>result){
                result = ((long long)(numbers[i])) * numbers[j];
            }
        }
    }
    return result;
}

int main(){

    while(true){
        int n = rand()%4 + 2; //let n be random num between 2 - 10
        cout<<n<<endl;
        vector<int> a;
        for(int i = 0; i<n; ++i){
            a.push_back(rand()%10);
        }
        for(int i = 0; i<n; ++i){
            cout<<a.at(i)<<" ";
        }
        cout<<endl;
        long long res1 = maximumPairProduct(a);
        long long res2 = MaxPairwiseProduct(a);
        if(res1 != res2){
            cout<<"Wrong Answer: "<<res1<<" "<<res2<<endl;
            break;
        }
        else{
            cout<<"OK\n";
        }
    }
    return 0;
}