class List {
	public:
	virtual void add(int) = 0;
	virtual void addFirst(int) = 0;
	virtual void print() = 0;
	virtual int removeLast() = 0;
	virtual int removeFirst() = 0;
	virtual int get(int) = 0;
	virtual void addAt(int, int) = 0;
	virtual int removeAt(int) = 0;
};
