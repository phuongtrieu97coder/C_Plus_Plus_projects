#include <iostream>
#include <iomanip>
#include <string>
#include <cstring>
#include <cctype>
#include <cstdlib>
using namespace std;

struct Node {
	int value;
	Node* left;
	Node* right;
};
int main() {
	//I.Create three nodes of type Node called nodes one, two, and three
	Node one, two, three;

	//1.	For node one, the value is 1, 
	// the left pointer is null 
	// and the right pointer points to node two
	one.value = 1;
	one.left = nullptr;
	one.right = &two;

	Node *oneRightPtr = one.right;

	//2.	For node two, the value is 2, 
	// the left pointer is points to node one 
	// and the right pointer points to node three
	two = { 2,&one, &three };

	Node* twoLeftPtr = two.left;
	Node* twoRightPtr = two.right;

	//3.	For node three, the value is 3,
	// the left pointer is points to node two 
	// and the right pointer is null
	three = { 3,&two, nullptr };

	Node* threeLeftPtr = three.left;

	//II.Print the values of all nodes
	cout << "Node one value: " << one.value << endl;
	cout << "Node one left: " << one.left << endl;
	cout << "Node one right: " << one.right << endl;
	cout << "Node one right's value: " << oneRightPtr->value << endl;

	cout << endl;
	cout << "Node two value: " << two.value << endl;
	cout << "Node two left: " << two.left << endl;
	cout << "Node two left's value: " << twoLeftPtr->value << endl;
	cout << "Node two right: " << two.right << endl;
	cout << "Node two right's value: " << twoRightPtr->value << endl;

	
	cout << endl;
	cout << "Node three value: " << three.value << endl;
	cout << "Node three left: " << three.left << endl;
	cout << "Node three left's value: " << threeLeftPtr->value << endl;
	cout << "Node three right: " << three.right << endl;

	return 0;
}