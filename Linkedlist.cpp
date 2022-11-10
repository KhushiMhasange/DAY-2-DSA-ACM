#include<bits/stdc++.h>
using namespace std;

class Node{
	public:
	int data;
	Node *next;			
};

//function to take input for linked list.
Node* input(Node *head, int d) 
{
		Node *ptr = head;
		Node *temp = new Node();
		temp->data = d;
		
		while(ptr->next != NULL)
		{
			ptr = ptr->next;
		}
		
		ptr->next = temp;
		return head;
}

//function to display lisnked list  
void printlist(Node * root)
{
    while(root!=NULL)
	{
		cout<<root->data<<"->";
		root = root->next;
		}	
}    

int main()
{
	int n;
    Node *head = NULL;
    cout<<"Enter number of elements in a list"<<endl;
    cin>>n;
    cout<<"Enter elements"<<endl;
    int temp;
    cin>>temp;
    
    head = new Node();
    head->data = temp;
    head->next = NULL;
    
    for(int i =0; i<n-1; i++)
    {
    	cin>>temp;
    	head = input(head,temp);
	}
	
	printlist(head);
	
	return 0;
}
