#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

using namespace std;
vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {

       vector<int> new_arr;
       //Sorting initially according to the arr2...
       for(size_t i {0}; i<arr2.size(); i++){

           for(size_t j{0}; j<arr1.size(); j++){

               if(arr1.at(j)==arr2.at(i)){
                   new_arr.push_back(arr1.at(j));
                   auto iter = arr1.begin()+j;
                   arr1.erase(iter);
               }
               for(auto c:arr1){
                   cout<<c<<" ";
               }
               cout<<endl;
           }
       }


       //Now sort what is remaining in the arr1 in an ascending order...
       sort(arr1.begin(), arr1.end());
       for(auto v : arr1){
           new_arr.push_back(v);
       }
        return new_arr;
   }

int main()
{
    vector<int> arr1{2,3,1,3,2,4,6,7,9,2,19};
    vector<int> arr2{2,1,4,3,9,6};
    vector<int> arr3 = relativeSortArray(arr1,arr2);
    for(auto c:arr3){
        cout<<c<<" ";
    }
    cout<<endl;
    return 0;
}
