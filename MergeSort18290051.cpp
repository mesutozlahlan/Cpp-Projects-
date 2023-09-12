#include <iostream>

using namespace std;

int* birlestir(int* arr1, int* arr2, int size)
{
	int* Dizi = new int[2 * size];
	int p1 = 0, p2 = 0, r = 0;
	while (size * 2 != r)
	{
		
		if (p2 < size && p1 == size)
		{
			Dizi[r] = arr2[p2];
			p1++;
			r++;
		}
		else if (p1 < size && p2 == size)
		{
			Dizi[r] = arr1[p1];
			p1++;
			r++;
		}
		
		else if (arr1[p1] < arr2[p2])
		{
			Dizi[r] = arr2[p2];
			p2++;
			r++;
		}
		else if (arr1[p1] >= arr2[p2])
		{
			Dizi[r] = arr1[p1];
			p1++;
			r++;
		}		
	}
	return Dizi;   
}
int* diziyeSayilariAl(int boyut)
{
	int * Dizi=new int[boyut];
	for (int j=0;j<boyut;j++)
		cin>>Dizi[j];
	return Dizi;
	
}
void diziYazdir(int* arr, int size)
{
	for (int j=0;j<size;j++)
		cout<<arr[j]<<" ";
	cout<<endl;
	
}
int main()
{
	const int BOYUT = 4;
	
	int * dizi1 = new int[BOYUT];
	int * dizi2 = new int[BOYUT];
	int * dizi3 = new int[BOYUT];
	int * dizi4 = new int[BOYUT];
	
	int * dizi12 = new int[2*BOYUT];
	int * dizi34 = new int[2*BOYUT];
	
	int * tersSiraliDizi = new int[4*BOYUT]; 
	
	
	dizi1 = diziyeSayilariAl(BOYUT);
	dizi2 = diziyeSayilariAl(BOYUT);
	dizi3 = diziyeSayilariAl(BOYUT);
	dizi4 = diziyeSayilariAl(BOYUT);
	
	dizi12 = birlestir(dizi1, dizi2, BOYUT);
	dizi34 = birlestir(dizi3, dizi4, BOYUT);
	
	tersSiraliDizi = birlestir(dizi12, dizi34, 2*BOYUT);
	
	diziYazdir(tersSiraliDizi, 4*BOYUT);
	
}
