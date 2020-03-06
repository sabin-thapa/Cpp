#define MAX_SIZE 100
class BST{
	private:
		int elements[MAX_SIZE];
	public:
		BST();
		~BST();
		void add(int data);
		bool search(int key);
		int getLeftChild(int currentIndex);
		int getRightChild(int currentIndex);
		void preOrderTraversal(int currentIndex);
};
