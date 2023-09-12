#include<iostream>
using namespace std;
class BirthOfDate{
public:
	BirthOfDate(){}
	BirthOfDate(int input_year){
		year=input_year;
	}
	void printDate(){
		cout<<year<<endl;
	}
	private:
		int year;
};
class Person{
	public:
		Person(string cname,BirthOfDate cdateOfBirth){
			name=cname;
			dateOfBirth=cdateOfBirth;
		}
		void printInfo(){
			cout<<name<<endl;
			dateOfBirth.printDate();
		}
		private:
			string name;
			BirthOfDate dateOfBirth;
};
int main(){
	Person Mesut("MESUT",2000);
	Mesut.printInfo();
	return 0;
}
