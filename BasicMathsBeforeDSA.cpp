#include <bits/stdc++.h>
using namespace std;

// 1. Check for prime.
bool isPrime(int n)
{
	int cnt = 0;
	for(int i = 1; i*i<=n ; i++){
		if(n%i==0){
			cnt++;
			if((n/i) != i){
				cnt++;
			}
		}
	}
	if(cnt == 2){
		return true;
	}
	else{
		return false;
	}
}


int main()
{
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    isPrime(n);

    return 0;
}

