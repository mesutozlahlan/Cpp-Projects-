#include <iostream>
using namespace std;
int main() {
	int a;
	cin>>a;
	char diz[a];
	int i=0;
	while(i<a)
	{
		diz[a]='K';
		i++;
	}
	i=0;
	int b=1;
	int c=0;
	while(i<a)
	{
		while(c<a)
		{
		if(((c+1)%b)==0)
		{
			if(diz[c]=='A')
			{
			diz[c]='K';
			}
			else
			{
			diz[c]='A';
			}		
		}
		c++;
		}
		c=0;
	i++;
	b++;
	}
	
	i=0;
	while(i<a)
	{
		if(diz[i]=='A')
		{
		cout<<i+1<<" ";
		}		
		i++;
	}
	return 0;
}
