#include <iostream>
using namespace std;

int Dizi[4];
void func(int n){
	int ikiliSayi[4];
	int sayac = 0;
	while (n > 0) {
		ikiliSayi[sayac] = n % 2;
		n = n / 2;
		sayac++;
	}
	for (int y=0; y < 4; y++){
		Dizi[y] = -1;}
	int x = 0;
	for (int k=sayac-1;k>=0; k--)
	{
		cout<<ikiliSayi[k];
		Dizi[x]=ikiliSayi[k];
		x++;
	}}
int main(){
	int a = 0,n = 0,multiply=1;
	cin >> a;
	cin >> n;
	if ((a < 0 || a > 10) ||(n < 0 || n > 10))
		cout << "a sayisi 0< a <= 10 ,n sayisi 0< n <= 10 olmalidir";
	else {		
		func(n);
		cout << endl<<multiply<<endl;
		for (int d=0;d<4; d++)
		{
			if (Dizi[d] >= 0)
			{
				if (Dizi[d] == 1)
					multiply=multiply*multiply*a;
				else
					multiply=multiply*multiply;
				cout <<multiply<< endl;
			}
		}
	}
	return 0;
}
