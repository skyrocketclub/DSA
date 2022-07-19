#include <iostream>

long long fibo(int n){
    long long number{0};
    long long p_number{0};
    long long pp_number{0};

     for(int i{0}; i<=n; i++){
         if(i==0){
            number = 0;
            }
         else if(i==1){
            number = 1;
            p_number = 1;
            }
         else{
            number =p_number + pp_number;
            pp_number = p_number;
            p_number = number;
         }
    }
    return number;
}

int main(){
    std::cout<<fibo(100)<<std::endl;
    return 0;
}