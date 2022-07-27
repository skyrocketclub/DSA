#include <iostream>
#include <math.h>
//Fibo c++ breaks down for large numbers
  unsigned long long int fibo(int n){
    unsigned long long int  number{0};
     unsigned long long int  p_number{0};
     unsigned long long int pp_number{0};

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
    return number ;
}

int main(){
    for(int i{0};i<=300; i++){
      std::cout<<i<<" : " <<fibo(i)<<std::endl;
    }
    return 0;
}