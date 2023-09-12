#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	int j=2;
	int k=0;
	while(j<=n){
		k++;
		j*=2;
	}
	cout<<k;
	
	return 0;
}
