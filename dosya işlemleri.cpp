#include<iostream>
#include<fstream>
using namespace std;
int main(){
	ofstream file("file.txt");
	int sayac=0,i;
	while(1){
		cin>>i;
		if(i==-1)
		break;
		string urun;
		int miktar;
		cout<<"urun ismi girin";
		cin>>urun>>miktar;
		file<<urun<<" "<<miktar<<endl;
		sayac++;
	}
	ifstream oku("file.txt");
	int j;
	for(j=0;j<sayac;j++){
		string urun;
		int miktar;
		oku>>urun>>miktar;
		cout<<urun<<" "<<miktar<<endl;
	}
	return 0;
}
