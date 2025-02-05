#include <iostream>
using namespace std;
#include "Node.cpp"

class Pair {
	public :
		
			Node *head;
			Node *tail;
};

Pair reverseLL_2(Node *head) {
	if(head == NULL || head -> next == NULL) {
		Pair ans;
		ans.head = head;
		ans.tail = head;
		return ans;
	}

	Pair smallAns = reverseLL_2(head -> next);

	smallAns.tail -> next = head;
	head -> next = NULL;
	Pair ans;
	ans.head = smallAns.head;
	ans.tail = head;
	return ans;
}

Node* reverseLL_Better(Node *head) {
	return reverseLL_2(head).head;
}

Node* reverseLL(Node *head) {
	if(head == NULL || head -> next == NULL) {
		return head;
	}

	Node *smallAns = reverseLL(head -> next);

	Node *temp = smallAns;
	while(temp -> next != NULL) {
		temp = temp -> next;
	}

	temp -> next = head;
	head -> next = NULL;
	return smallAns;
}

Node* takeInput_Better() {
	int data;
	cin >> data;
	Node *head = NULL;
	Node *tail = NULL;
	while(data != -1) {
		Node *newNode = new Node(data);
		if(head == NULL) {
			head = newNode;
			tail = newNode;
		}
		else {
			tail -> next = newNode;
			tail = tail -> next;
			// OR
			// tail = newNode;
		}

		cin >> data;
	}
	return head;
}

void print(Node *head) {
	while(head != NULL) {
		cout << head -> data << " ";
		head = head -> next;
	}
	cout << endl;
}

int main() {

	Node *head = takeInput_Better();
	head = reverseLL_Better(head);
	print(head);



}
