#include <bits/stdc++.h>
using namespace std;

// Print N Times.

void func1(int i, int n){
   
   // Base Condition.
   if(i>n) return;
   cout<<"Geeky Nerd"<<endl;

   // Function call to print till i increments.
   func1(i+1,n);

}

// Print 1 to N using recursion.

void func2(int i,int n){
  if(i>n){
    return;
  }
  cout << i << endl;
  func2(i+1,n);
}

// Print N to 1 using recursion.

void func3(int i, int n){
  if(i<1){
    return;
  }
  cout << i << endl;
  func3(i-1,n);
}

// Sum of first N natural numbers.

void funcParameterised(int i, int sum){
  if(i<1){
    cout << sum;
    return;
  }
  funcParameterised(i-1, sum + i);
}

int sum(int n){
  if(n==0){
    return 0;
  }
  return n + sum(n-1);
}

// Factorial of a number.

void factorial(int i, int fact){
  if(i<1){
    cout << fact;
    return;
  }
  factorial(i-1, fact*i);
}

int main(){
  
  int n;
  cout << "Enter the value of n: ";
  cin >> n;
  // func1(1,n);
  // func2(1,n);
  // func3(n,n);
  // funcParameterised(n,0);
  // cout << sum(n);
  // factorial(n,1);

  return 0;
}