#include<iostream>
using namespace std;
#define size 10
class queue
{
    int f=-1,e=-1;
    string x;
    string job[size];
public:
    int isfull()
    {
        if(e==(size-1))
            return 1;
        else
            return 0;
    }
    int isempty()
    {
        if(f==e)
            return 1;
        else
            return 0;
    }
    void insert_job()
    {
        int n;
        cout<<"entrr the no of job u want to add; ";
        cin>>n;
        if(isfull()==1)
        {
            cout<<"job is full!!!";
        }
        else{
            if(f==e)
            f++;
            
            for(int i=0;i<n;i++)
            {
                if(e<=size-1)
                {
                    cout<<"enter the job;";
                    cin>>x;
                    e++;
                    job[e]=x;

                }
                else{
                    cout<<"job is full";
                }
            }
            
        }

    }
    void delete_job()

    {
        int m;
        if(isempty()==1)
        {
            cout<<"job is empty!!";
        }
        else
        {
            cout<<"enter the no of job u want to delete: ";
            cin>>m;
            for(int i=0;i<m;i++)
            {
                if(f<=e)
                {
                    
                    cout<<"deleted job:"<<job[f];
                    f++;

                }
            }
        }
    

    }
    void display()
    {
        for(int i=f;i<=e;i++)
        {
            cout<<job[i]<<" ";
        }
    }
};
int main()
{
    queue q;
    int ch;
    char c;
    do
    {
        cout<<"1.insert\n2.delete\n3.display";
        cout<<"enter the choice";
        cin>>ch;
        switch(ch)
        {
            case 1:
            q.insert_job();
            break;
            case 2:
            q.delete_job();
            break;
            case 3:
            q.display();
            break;
            default:
            cout<<"!!!1";
        }
        cout<<"insert more";
        cin>>c;
        /* code */
    } while (c=='Y'||c=='y');
    return 0;

        
    
    
}
