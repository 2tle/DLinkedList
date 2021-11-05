#ifndef DLinkedList_h
#define DLinkedList_h
#define TRUE 1
#define FALSE 0

typedef int LData;

typedef struct {
	LData data;
	struct Node* prevNode; 
	struct Node* nextNode;	
} Node;

typedef struct {
	Node* headNode;
	Node* tailNode;
	int size;
} DLinkedList;

void initList(DLinkedList* plist);
void printLis(DLinkedList* plist);
int getSize(DLinkedList* plist);












