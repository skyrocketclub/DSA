#include <iostream>
#include <vector>
#include <iterator>


using namespace std;

int smallest(vector<int> nums){
    int least {};
    least = 0;
    for(size_t i {0}; i<nums.size(); i++){
        if(nums.at(i)<nums.at(least)){
            least = i;
        }
    }
    return least;
}

vector<int> selection_sort(vector<int> &nums){
    vector<int> newvec{};
    size_t u = nums.size();

    for(size_t i{0}; i< u; i++){
        int small = smallest(nums);
        auto iterator = nums.begin() + small;
        int val = nums.at(small);
        newvec.push_back(val);
        nums.erase(iterator);
    }
    return newvec;
}

int main()
{
    vector<int> num {10,2,3,5,7};

    cout<<"THE VECTOR BEFORE SORTING\n";
    for(auto c:num){
        cout<<c<<" ";
    }

    vector<int> newvec = selection_sort(num);
    cout<<"\nTHE NEW SORTED VECTOR\n";
    for(auto c:newvec){
        cout<<c<<" ";
    }
    cout<<endl;

    cout<<"\nTHE OLD VECTOR\n";
     for(auto c:num){
         cout<<c<<" ";
     }

     cout<<endl;

    return 0;
}
