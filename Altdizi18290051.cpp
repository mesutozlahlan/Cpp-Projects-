#include <iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int A[n-1];
	for(int i=0;i<n;i++){
		cin>>A[i];
	}
	int j;
	for(j=0;j<n;j++){
		if(A[j]<A[j+1])
		cout<<A[j]<<" *"<<endl;
		else
		cout<<A[j]<<" ";
	}
	j=n-1;
	if(A[j]>A[j+1])
	cout<<"*";
	return 0;
}
