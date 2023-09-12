class IntegerSet2{
public:
	IntegerSet2();
	void insertElement(int);
	void deleteElement(int);
	void print();
	bool isEqualTo(IntegerSet2 k);	
	void sort();
private:
	int set[10];
};
