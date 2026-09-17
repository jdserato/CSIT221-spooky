struct node {
	int elem;
	node *next;
	node *prev;
	node() : elem(0), next(NULL), prev(NULL) {}
	node(int e) : elem(e), next(NULL), prev(NULL) {}
	node(int e, node* n) : elem(e), next(n) {}
	node(int e, node* p, node* n) : elem(e), prev(p), next(n) {}
};
