struct node {
	int elem;
	node* next;
	
	node(int e) : elem(e), next(NULL) {}
	node(int e, node* n) : elem(e), next(n) {}
};
