#include<iostream>
using namespace std;
#define size 10
class order{
    int order_id;
    string order_name;
public:
    void acceptorder()
    {
        cout<<"enter the order id: ";
        cin>>order_id;
        cout<<"enter the order name: ";
        cin>>order_name;
    }
    void oderdisplay()
    {
        cout<<"\n\t"<<order_id<<"\t\t"<<order_name;
    }
    friend class queue;

};
class queue
{
    int f,r;
    order data[size];
public:
    queue()
    {
        f=r=-1;
    }
    int isfull();
    int isempty();
    void enqueue();
    void dequeue();
    void display();

};
int queue::isfull()
{
    if(f==0 && r==size-1 || f==r+1)
        return 1;
    else
        return 0;
}
int queue::isempty()
{
    if(f==-1 && r==-1)
        return 1;
    else
        return 0;
}
void queue::enqueue()
{
    order temp;
    if(isfull())
    {
        cout<<"\norder can not be placed!! queue is full";
    }
    else{
        
        temp.acceptorder();
        if(r==size-1 && f!=0)
        {
            r=-1;
        }
    }
    data[++r]=temp;
    cout<<"order is placed successfully";
    if(f==-1)
    {
        f=0;
    }

}
void queue::dequeue()
{
    if(isempty())
    {
        cout<<"queue is empty";
    }
    else{
        f++;
        cout<<"order sreved susscessfully";
        if(f==size)
        {
            f=0;
        }
        if(f-1==r)
        {
            f=r-1;
        }

    }

}
void queue::display()
{
    if(isempty())
    {
        cout<<"queue is empty thats why order is not display";
    }
    else{
        int i=f;
        cout<<"------------pizza parlour menu-----------------";
        cout<<"\n\norder id  \t\t oder name";
        cout<<"\n----------------------------------------";
        if(f<=r)
        {
            while(i<=r)
            {
                data[i].oderdisplay();
                i++;
            }
        }
        else{
            while(i<size)
            {
                data[i].oderdisplay();
                i++;
            }
        }
    }
}
int main()
{
    int ch;
    queue q;
    do
    {
        cout<<"\n1.place the order\n2.serv the order \n3.display the order";
        cout<<"enter choice: ";
        cin>>ch;
        switch(ch)
        {
            case 1:
            q.enqueue();
            break;
            case 2:
            q.dequeue();
            break;
            case 3:
            q.display();
            break;
            default:
            cout<<"invalid choice!!";

        }
        
    } while(ch!=4);
    return 0;
    
}
