#include<iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *link;
};

struct Node *head;

void Insert_at_Begin(int data);
void Insert_at_end(int data);
void Insert_at_pos(int data, int n);
void print_list();
void Delete_at_Begin();
void Delete_at_end();
void Delete_at_pos(int n);
void recursive_print(Node *head);
void Reverse_list();
void Recursive_Reverse_list(Node *head);

int main()
{
    head=NULL;
    Insert_at_Begin(10);
    Insert_at_end(20);
    Insert_at_Begin(5);
    Insert_at_pos(15,3);
    Insert_at_pos(25,5);
    Insert_at_end(30);

    print_list();
    //Reverse_list();

    Delete_at_Begin();
    Delete_at_end();
    Delete_at_pos(2);

    Recursive_Reverse_list(head);
    cout<<"List is : ";
    recursive_print(head);

    return 0;
}

void Insert_at_Begin(int data)
{
    Node *temp = new Node();
    temp->data = data;
    temp->link = head;
    head=temp;
}

void Insert_at_end(int data)
{
    Node *temp = new Node();
    temp->data=data;
    temp->link=NULL;

    Node *temp1=head;

    while(temp1->link!=NULL)
    {
        temp1=temp1->link;
    }

    temp1->link=temp;
}

void Insert_at_pos(int data,int n)
{
    Node *temp=new Node();
    temp->data=data;
    temp->link=NULL;

    if(n==1)
    {
        temp->link=head;
        head=temp;
        return;
    }

    Node *temp1 = head;

    for(int i=1;i<n-1;i++)
    {
        temp1=temp1->link;
    }

    temp->link=temp1->link;
    temp1->link=temp;

}

void print_list()
{
    Node *temp=head;
    cout<<"List is :";
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->link;
    }
    cout<<endl;
}

void Delete_at_Begin()
{
    Node *temp=head;
    if(temp != NULL)
    {
    head=temp->link;
    delete(temp);
    }
}

void Delete_at_end()
{
    Node *temp=head;
    Node *prev;
    while(temp->link != NULL)
    {
        prev=temp;
        temp=temp->link;
    }
    prev->link=NULL;
    cout<<temp->data<<endl;
    delete(temp);
}

void Delete_at_pos(int n)
{
    Node *temp=head;
    if(n==1)
    {
        head=temp->link;
        delete(temp);
    }

    for(int i=1;i<n-1;i++)
    {
        temp=temp->link;
    }

    Node *temp2=NULL;

    temp2=temp->link;
    temp->link=temp2->link;
    cout<<temp2->data<<endl;
    delete(temp2);
}

void recursive_print(Node *head)
{
    Node *temp=head;
    if(temp==NULL)
    {
        return;
    }
    cout<<temp->data<<" ";
    recursive_print(temp->link);
    //cout<<temp->data<<" ";   --> uncomment below for reverse print order;
}

void Reverse_list()
{
    Node *prev, *next, *current;
    current=head;
    prev=NULL;

    while(current!=NULL)
    {
        next=current->link;
        current->link=prev;
        prev=current;
        current=next;
    }
        head=prev;
        cout<<"printing reversed list : ";
        print_list();
}

void Recursive_Reverse_list(Node *head)
{
    Node *temp=head;
    if(temp->link == NULL)
    {
        head=temp;
        return;
    }
    Recursive_Reverse_list(temp->link);
    Node *temp2=temp->link;
    temp2->link=temp;
    temp->link=NULL;
}
