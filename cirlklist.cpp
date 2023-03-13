#include<iostream>
using namespace std;

class CircularLinkList{
    public:
    struct node
    {
        int *pptr;
        int *nptr;
        int data;
    };
    node *start;
    node *end;
    void *createNode()
    {
        start = new node();
        start->nptr = NULL;
        start->pptr = start;
        end = start;
    }
    void addNode(node*, int);
    void deleteNode(node*);
    void addafter(node*);
    void addbefore(node*);
    void deleteafter(node*);
    void deletebefore(node*);
    void viewlist(node*);
    node* findnode(node*);
};

void CircularLinkList::addNode(node* ptr, int data)
{
    node* temp = new node();
    temp->data = data;
    if(start == end)
    {
        start->nptr
    }

}

int main(){
    CircularLinkList *list1 = new CircularLinkList();
    list1->createNode();
    return 0;
}