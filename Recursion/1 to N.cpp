// C++ program to find the
// first uppercase letter.
#include <bits/stdc++.h>
using namespace std;

int first(int n)
{
    
	if (n>=0){
        
        first(n--);
        cout<<n<<endl;
    }
	return 0;
}

int main()
{
	int n=10;
	int res = first(n);
	
	return 0;
}
