#include <stack>;

using namespace std;


int getNthNodeFromEnd(struct Node* head, int n){
    
    Node* temp=head;
    stack<int> h;
    while(temp != NULL)
    {

        h.push(temp->data);
       temp=temp->next;

    }
    int c=0;
    while(h.empty())
    {
       c++;
        if(h.top()==n)
        {
            return c;
        }
        h.pop();
    }
    
}