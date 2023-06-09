#include <iostream>
using namespace std;
#include "node.cpp"

Node *takeinput()
{
	int data;
	cin >> data;
	Node *head = NULL, *tail = NULL;
	while (data != -1)
	{
		Node *newNode = new Node(data);
		if (head == NULL)
		{
			head = newNode;
			tail = newNode;
		}
		else
		{
			tail->next = newNode;
			tail = newNode;
		}
		cin >> data;
	}
	return head;
}
node *deleteNode(node *head, int pos) {
  int i = 0;
  Node *current = head;
  if (head == nullptr) {
    return head;
  }
  if (pos == 0) {
    head = current->next;
    delete current;
    return head;
  }
  while (current->next != nullptr && i < pos - 1) {
    current = current->next;
    i++;
  }
  if (current->next != nullptr) {
    node *temp = current->next->next;
    delete current->next;
    current->next = temp;
  }
  return head;
}



void print(node *head)
{
	Node *temp = head;
	while (temp != NULL)
	{
		cout << temp->data << " ";
		temp = temp->next;
	}
	cout << endl;
}

int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		Node *head = takeinput();
		int pos;
		cin >> pos;
		head = deleteNode(head, pos);
		print(head);
	}

	return 0;
}