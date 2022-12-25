#include <iostream>
using namespace std;
#define size 10
class ice
{
    int order[size];
    int f,r;
public:
    ice()
    {
     f=r=-1;
    }
    int qfull()
    {
     if((f==0)&&(r==(size-1))||(f==(r+1)%size))
         return 1;
     else
         return 0;
    }
    int qempty()
    {
        if(f==-1)
            return 1;
        else
            return 0;
    }
    void accept_order(int);
    void make_payment(int);
    void pending_order();
};
void ice::accept_order(int item)
{
    if(qfull())
    {
        cout<<"\nVery Sorry !!!! Parlor is full....\n";
        cout<<"\nSorry for inconvineance...Please wait outside ..!!!";
    }
    else
    {
        if(f==-1)
        {
            f=r=0;
        }
        else
        {
            r=(r+1)%size;
        }
        order[r]=item;
    }
}

void ice::make_payment(int n)
{
    int item;
    char ans;
    int total,discount;
    if(qempty())
        cout<<"\n Sorry !!! order is not there...\n";
    else
    {
      cout<<"\n Deliverd orders as follows...\n";
      for(int i=0;i<n;i++)
      {
          item=order[f];
          if(f==r)
          {
               f=r=-1;
          }
          else
          {
              f=(f+1)%size;
          }
          cout<<"\t"<<item;
      }
      total=n*100;
      if (total>=500)
      {
      	cout<<"\n Congratulations...!!! You get 10% discount"<<endl;
      	discount=total/10;
      	total=total-discount;
	  }
      cout<<"\n Total amount to pay : "<<total;
      cout<<"\n Thank you visit Again....\n";
    }
}

void ice::pending_order()
{
    int temp;
    if(qempty())
    {
        cout<<"\nSorry !! There is no pending order...\n";
    }
    else
    {
        temp=f;
        cout<<"\n Pending Order as follows..\n";
        while(temp!=r)
        {
            cout<<"\t"<<order[temp];
            temp=(temp+1)%size;
        }
        cout<<"\t"<<order[temp];
    }
}
int main()
{
    ice i1;
    int ch,k,n;
    char ans;
    do
    {
     cout<<"\n\t***** Welcome To Ice-Cream Parlor *******\n";
     cout << "\n 1.Accept order\n 2.Make Payment\n 3.Pending Orders\n Enter your choice: ";
     cin>>ch;
     switch(ch)
     {
      case 1:
      		 cout<<"\n\n***MENU***";
	  		 cout<<"\n Which Ice-Cream do you like most....\n";
             cout<<"\n 1.Vanilla Ice-cream\n 2.Butterscotch Ice-cream\n 3.Chocolate Ice-cream\n 4.Blueberry Ice-cream";
             cout<<"\n Please enter your order: ";
             cin>>k;
             i1.accept_order(k);
             break;
      case 2:cout<<"\nHow many Ice-cream ? ";
             cin>>n;
             i1.make_payment(n);
             break;
      case 3 :
             i1.pending_order();
             break;
      case 4:cout<<"\n Successfully Exited....!!!";
             break;
      default:cout<<"\n Inavalid choice....\n";
            break;

     }
    cout<<"\n Do you want to continue?:";
	cin>>ans;
	}while(ans=='Y'||ans=='y');
    cout<<"\n Thank you...!!! Visit again...!!!";
    return 0;
}
