#include <iostream>

//This method only works for small numbers...
int get_fibonacci_last_digit_naive(int n) {
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

    return number % 10;
}

int get_fibo_last_digit(int n){
   long long new_num = n%60;
   return(get_fibonacci_last_digit_naive(new_num));
}

int main() {
    int n;
    std::cin >> n;

   // for(int i{0}; i<100; i++){
   //    int a = get_fibonacci_last_digit_naive(i);
   //    int b = get_fibo_last_digit(i);
   //    if(a == b){
   //       std::cout<<"fibo("<<i<<") last digit is "<<a<<std::endl;
   //    }
   //    else{
   //       std::cout<<"Exception! at "<<i<<" correct answer: "<<a<<" , your answer: "<<b<<std::endl;
   //    }
   // }
    
   //  int c = get_fibonacci_last_digit_naive(n);
    std::cout << get_fibo_last_digit(n);
   return 0;
    }
