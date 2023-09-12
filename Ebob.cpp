#include<iostream>
using namespace std;
int Obeb(int a ,int b){
	if(a%2==0&&b%2==0){
		cout<<"1. Kural"<<endl;
		return 2*Obeb(a/2,b/2);
	}
	else if(a%2==0&&b%2==1){
		cout<<"2. Kural"<<endl;
		return Obeb(a/2,b);
	}
	else if(b==0){
		cout<<"3. Kural"<<endl;
		return a;
	}
	else if(a>=b){
		cout<<"4. Kural"<<endl;
		return Obeb(b,a-b);
	}
	else if (1){
		cout<<"5. Kural"<<endl;
		return Obeb(b,a);
	}
}
int main(){
	int x,y;
	cin>>x>>y;
	cout<<Obeb(x,y)<<endl;
	return 0;
}
