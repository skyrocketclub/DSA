#include <iostream>
#include <cstdlib>

unsigned long long int lcm_naive(long long a, long long b) {
  for (long l = 1; l <= (long long) a * b; ++l)
    if (l % a == 0 && l % b == 0)
      return l;

  return (unsigned long long int) a * b;
}

unsigned long long int lcm(long long a, long long b){
  long long product = a * b;
  long long int A = a;
  long long int B = b;
  long long ap;
  //LCM = (a x b) / GCD(a,b)
  //first find the gcd
  while(b != 0){
    ap = a % b;
    a = b;
    b = ap;
  }
  return (A/a)*B;
}

int main() {
  int a, b;
  std::cin >> a >> b;
  std::cout<<lcm(a,b);

// Loop for testing
// for(int i{0}; i<100; i++){
//     a = rand()%1000000 + 500000;
//     b = rand()%1000000 + 500000;
//     long long c = lcm_naive(a,b);
//     long long d = lcm(a,b);

//     if(c == d){
//         std::cout<<"The LCM of "<< a<<" & "<<b<<" is "<<c<<std::endl;
//     }else{
//       std::cout<<"Exception at point "<<i<<" for "<<a<<" & "<<b<<std::endl;
//       std::cout<<"Correct Answer: "<<c<<" & your answer: "<<d<<std::endl;
//       break;
//     }
// }
 
  // std::cout << lcm_naive(a, b) << std::endl;
  // std::cout << lcm(a, b) << std::endl;
  return 0;
}
