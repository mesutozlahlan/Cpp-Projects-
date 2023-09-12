class IntegerSet{
public:
	IntegerSet();
	void insertElement(int i);
	void deleteElement(int i);
	void print();
	bool isEqualTo(IntegerSet k);	
	IntegerSet intersectWith(IntegerSet k);
	IntegerSet uniteWith(IntegerSet k);
private:
	int set[10];
};
