#include <iostream>


//gcd(a,b) = gcd(a',b) = gcd(b,a');

long long com_div(long long &&a, long long &&b){
    long long ap{0}, temp{0}; //a' and temp variable

    while(b!=0){
        temp = a;
        a = b;
        b = temp%b;
    }

    return a;
}

int main(){
    std::cout<<com_div(357,234)<<std::endl;
    return 0;
}