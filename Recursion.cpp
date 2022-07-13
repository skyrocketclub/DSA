#include <iostream>

//Recursive Function in its basic form
void printNum(int i){
    std::cout<<i<<" ";
    if(i == -7){
        std::cout<<"Number Found!"; //The Base Case
    }else{
        printNum(i-1);  //The Recursive Case
    }
}

//Recursive Function Showing Factorial of a number
// 5! = 5 * 4(5-1) * 3(4-1) * 2(3-1) * 1
int fact(int x){
    if(x == 1){
        return 1; //Base Case
        }
    else{
        return x * fact(x-1);   //Recursive Case
    }
}

int main(){
    // printNum(20);
    int y = fact(3);
    std::cout<<"Factorial of "<<3<<" is "<<y<<" ! ";
    return 0;
}