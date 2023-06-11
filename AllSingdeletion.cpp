#include<iostream>

using namespace std;
class Node{
    public:
    int data;
    Node *next;

     Node(int data)
    {
        this->data=data;
        this->next=NULL;

    }
   
        ~ Node()
        {
            int val=this->data;
            if(this->next!=NULL)
            {
                delete next;
                this->next=NULL;
            }
            cout<<endl<<"deleted eliment is "<<val<<endl;
        }

    
   
};
void print(Node* head)
{
    Node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void insert(Node* &head,int data)
{
    Node* temp=new Node(data);
    if(head==NULL)
    {
        head=temp;
    }
    else{
        Node* p=head;
        while(p->next!=NULL)
        {
            p=p->next;
        }
        p->next=temp;
    }

    

    
}
void deletion(Node* &head,int pos)
{
    Node* pri;
Node*cur=head;
    if(pos==1)
    {  pri=head;
        head=head->next;
        pri->next=NULL;
        delete pri;

    }
    else{
    int i=1;
    while(pos>i)
    {
        pri=cur;
        cur=cur->next;
        i++;

    }
    pri->next=cur->next;
    cur->next=NULL;
    delete cur;
    }


}

 Node* head=NULL;
int main()
{
    Node* node1= new Node(10);
   // Node* head = node1;
   // cout<<head->data<<endl;
   insert(head,10);
    
    insert(head,20);
    
    insert(head,30);
   
    insert(head,40);
    print(head);
    deletion(head,3);
    print(head);

   
return 0;

}