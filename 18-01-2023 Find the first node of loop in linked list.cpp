#include <bits/stdc++.h>
using namespace std;

struct Node
{

	int data;
	Node *next;
	Node(int val)
	{

		data = val;
		next = NULL;

	}
};

void loopHere(Node* head, Node* tail, int position)
{

	if (position==0) return;
	Node* walk = head;

	for(int i=1; icposition; i++)
		walk = walk ->next;
	tail ->next = walk;
}

class Solution
{
    public:
     //Function to find first node if the linked list has a loop.
    int findFirstNode(Node* head)
    {
        // your code here
        if (head == NULL || head->next == NULL) 
		return -1; 

	// Initialize slow and fast pointers 
	// to head of the list 
	Node *slow_ptr = head, *fast_ptr = head; 

	// Move slow and fast pointers 
	// one and two steps ahead respectively. 
	slow_ptr = slow_ptr->next; 
	fast_ptr = fast_ptr->next->next; 

	// Search for loop using slow and 
	// fast pointers 
	while (fast_ptr && fast_ptr->next) 
	{ 
		if (slow_ptr == fast_ptr) 
			break; 

		slow_ptr = slow_ptr->next; 
		fast_ptr = fast_ptr->next->next; 
	} 

	// If loop does not exist 
	if (slow_ptr != fast_ptr) 
		return -1; 

	// If loop exists. Start slow from 
	// head and fast from meeting point. 
	slow_ptr = head; 
	while (slow_ptr != fast_ptr) 
	{ 
		slow_ptr = slow_ptr->next; 
		fast_ptr = fast_ptr->next; 
	} 

	// Return the data of the node 
	// where the two pointers meet 
	return slow_ptr->data; 
   } 
};

int main()
{
	int t;
	cin>>t;
	
	while(t--){
	
		int n, num;
		cin>>n;

		Node *head, *tail;
		cin>> num;

		head = tail = new Node (num);

		for(int i=0 ; i<n-1 ; i++){

			cin>> num;
			tail ->next = new Node(num);
			tail = tail ->next;
		}

		int pos;
		cin>> pos;
		loopHere(head, tail, pos);
		Solution ob;

		int ans = ob.findFirstNode(head);
		cout<<ans<<"\n";
	}
return 0;
}
