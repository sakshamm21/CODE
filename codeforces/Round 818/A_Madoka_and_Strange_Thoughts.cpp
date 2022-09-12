// CPP program to answer queries for count of
// primes in given range.
#include <bits/stdc++.h>
using namespace std;
#define long long int int 
const int MAX = 10000;

// prefix[i] is going to store count of primes
// till i (including i).
int prefix[MAX + 1];

void buildPrefix()
{
	// Create a boolean array "prime[0..n]". A
	// value in prime[i] will finally be false
	// if i is Not a prime, else true.
	bool prime[MAX + 1];
	memset(prime, true, sizeof(prime));

	for (int p = 2; p * p <= MAX; p++) {

		// If prime[p] is not changed, then
		// it is a prime
		if (prime[p] == true) {

			// Update all multiples of p
			for (int i = p * 2; i <= MAX; i += p)
				prime[i] = false;
		}
	}

	// Build prefix array
	prefix[0] = prefix[1] = 0;
	for (int p = 2; p <= MAX; p++) {
		prefix[p] = prefix[p - 1];
		if (prime[p])
			prefix[p]++;
	}
}

// Returns count of primes in range from L to
// R (both inclusive).
int query(int L, int R)
{
	return prefix[R] - prefix[L - 1];
}

// Driver code
int main()
{
    int t;
    cin>>t;
    while(t--){
	buildPrefix();
int n;
cin>>n;
if(n==1) cout<<"1"<<endl;
else{
int x,y,z;
x=(2,n);
y=(2,n/2) ;
z=(2,n/3);
int total = x+y+z;
}

	
    }
	return 0;
}
