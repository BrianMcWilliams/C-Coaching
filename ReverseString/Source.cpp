#include <iostream>
#include <cstdlib>
#include <cstring>
#include <cassert>

using namespace std;

struct Node {
public:
	Node(int value)
	{
		m_Value = value;
		m_Next = nullptr;
	}
	int m_Value;
	Node* m_Next;
};

Node* PopulateLinkedList()
{
	Node* listHead = new Node(0);

	Node* currentElement = listHead;

 	for (int i = 1; i < 10; ++i)
	{
		currentElement->m_Next = new Node(i);
		currentElement = currentElement->m_Next;
	}

	return listHead;
}

void OutputToConsole(Node* head)
{
	Node* currentElement = head;

	while (currentElement != nullptr)
	{
		Node* next = currentElement->m_Next;
		cout << "Node" << endl;
		cout << "Value: " << currentElement->m_Value << endl;
		cout << "Next: " << next << endl;
		cout << "= = = =" << endl;

		currentElement = currentElement->m_Next;
	}
}

int main(void)
{
	Node* head = PopulateLinkedList();

	OutputToConsole(head);


	//Problem 1: 
	//Add a node in the middle of the list
	
	//Problem 2
	//Remove the second node from the list.

	//Problem 3
	//Invert the list (back to front)
	system("pause");
}
