class Node{
	public:
		int info;
		Node *prev;
		Node *next;
	
};


class List{
	private:
		Node *head;
		Node *tail;
	public:
		List();
		void addToHead(int data);
		void display();
};

