#include <iostream>
using namespace std;

struct Linklist{
    struct node {
        int data;
        struct node *nextptr;
    };

    struct node *start = NULL;
    void addstart();
    void addlast();
    void addafter(); // traversing is needed
    void deletefirst();
    void deletelast();
    void deleteafter();
    void printlist();
    void reverse_list();
};

void Linklist::deletefirst()
{
    if(start == NULL)
    {
        cout<<"No Element is present."<<endl;
    }
    else
    {
        node *ptr;
        ptr = start;
        start = start->nextptr;
        delete ptr;
        cout<<"Deleted first item present."<<endl;
    }
}

void Linklist::deletelast()
{
    if(start == NULL)
    {
        cout<<"No Element is present."<<endl;
    }
    else if(start->nextptr == NULL)
    {
        delete start;
        start = NULL;
        cout<<"Deleted single item present."<<endl;
    }
    else
    {
        node *ptr, *temp;
        ptr = start;
        while(ptr->nextptr != NULL)
        {
            ptr = ptr->nextptr;
        }
        temp = ptr->nextptr;
        ptr->nextptr = NULL;
        delete temp;
        cout<<"Deleted last item present."<<endl;
    }
}

void Linklist::deleteafter()
{
    int i, loc;
    node *ptr, *temp;
    cout<<"Enter the position of element need to be deleted."<<endl;
    cin>>loc;
    ptr = start;
    if(temp == NULL)
        cout<<"Buffer Overflow"<<endl;
    else
    {
        for(i=0; i<loc; i++)
        {
            ptr = ptr->nextptr;
            if(ptr->nextptr == NULL)
            {
                cout<<"No such element exist."<<endl;
            }
            else
            {
                temp = ptr->nextptr;
                ptr->nextptr = temp->nextptr;
                delete temp;
                cout<<"Deleted specified item present."<<endl;
            }
        }
    }

}

void Linklist::addstart()
{
    struct node *temp = new node();
    if(temp == NULL)
        cout<<"Buffer Overflow"<<endl;
    else
    {
        cout<<"Insert Element : "<<endl;
        cin>>temp->data;
        temp->nextptr = start;
        start = temp;
        cout<<"Inserted Element : "<<endl;
    }
}

void Linklist::addlast()
{
    struct node *temp = new node();
    if(temp == NULL)
        cout<<"Buffer Overflow"<<endl;
    else
    {
        cout<<"Insert Element : "<<endl;
        cin>>temp->data;
        if(start == NULL)
        {
            temp->nextptr = start;
            start = temp;
            cout<<"Inserted Element : "<<endl;
        }
        else
        {
            node *ptr;
            ptr = start;
            while(ptr->nextptr != NULL)
            {
                ptr = ptr->nextptr;
            } 
            ptr->nextptr = temp;
            temp->nextptr = NULL;
            cout<<"Inserted Element : "<<endl;
        }
    }
}

void Linklist::addafter()
{
    int i,loc,data;
    struct node *temp = new node();
    if(temp == NULL)
        cout<<"Buffer Overflow"<<endl;
    else
    {
        node *ptr;
        ptr = start;
        cout<<"Enter position after which data need to be added: "<<endl;
        cin>>loc;
        for(i=0; i<loc; i++)
        {
            ptr = ptr->nextptr;
            if(ptr == NULL)
            {
                cout<<"Not so many elements."<<endl;
                break;
            }
            cout<<"Insert Element : "<<endl;
            cin>>temp->data;
            temp->nextptr = ptr->nextptr;
            ptr->nextptr = temp;
            cout<<"Inserted Element : "<<endl;
        }
    }
}
// start --> data-ptr1 --> data-ptr2 --> data-ptr3 --> data-NULL
void Linklist::reverse_list()
{
    struct node * new_start;
    struct node * keep_start = start;
    struct node * temp = new node();
    while(keep_start != NULL)
    {

        keep_start = keep_start->nextptr;
    }
    start = new_start;
}

int main()
{

    return 0;
}

