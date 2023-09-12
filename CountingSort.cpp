#include <iostream>
using namespace std;
void SayarakSiralama(int* arrCount, int n)
{	
	int* T1=NULL,* T2= NULL;
	T1 = new int[n];
	T2=new int[n];
	for (int i = 0; i < n; i++){
		T1[i] = 0;
	}
	for (size_t i=0;i<n;i++){
		T1[arrCount[i]]=T1[arrCount[i]]+ 1;
	}
	for (int i=1; i<n;i++){
		T1[i] = T1[i] + T1[i - 1];
	}
	for (int j=0;j<n;j++){
		T2[T1[arrCount[j]]]= arrCount[j];
		T1[arrCount[j]]= T1[arrCount[j]]-1;
	}
	for (int i = 1;i<=n;i++){
		cout <<T2[i]<<" ";
	}
}
int main(){
	int n = 0,* arrCount = NULL;
	cin >> n;
	arrCount = new int[n];
	for (int i=0;i<n;i++){
		  cin >> arrCount[i];
	}
	 SayarakSiralama(arrCount,n);
	return 0;
}
