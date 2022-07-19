#include <iostream>

int FibRecurs(int n){
    if(n<=1){return n;}
    else{
        return FibRecurs(n-1)+ FibRecurs(n-2);
    }
}

int main(){
    std::cout<<FibRecurs(10)<<std::endl;
    return 0;
}