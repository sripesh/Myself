#include <iostream>
#include<stdlib.h>
using namespace std;
#define MAX 10
#define fori(n) for(int i=0;i<n;i++)
#define forj(n) for(int j=0;j<n;j++)
class Stack_s
{
    int arr[MAX];
    int top;
    public:
        void init()
        {
            top=-1;
        }
        void push(int a)
        {
            if(top+1==MAX)
            {
                cout<<"Stack is full.\n";
            }
            else
            {
                top++;
                arr[top]=a;
            }
        }
        void pop()
        {
            if(top<0)
            {
                cout<<"Stack is empty.\n";

            }
            else
            {
                cout<<arr[top]<<endl;
                top--;
            }
        }
        void peek()
        {
            if(top<0)
            {
                cout<<"Stack is empty.\n";

            }
            else
            {
                cout<<arr[top]<<endl;
            }
        }
        void display()
        {
            if(top==-1)
            {
                cout<<"Stack is empty.\n";
            }
            else
            {
                cout<<"The data in Stack are:\n";
                fori(top+1)
                    cout<<arr[i]<<"\t";
                cout<<endl;
            }
        }
};
typedef struct node
{
    int data;
    node *link;
}node;
class Stack_d
{
    node *head;
    public:
        void init()
        {
            head=new node;
            head=NULL;
        }
        void push(int info)
        {
            node *temp=new node;
            if(temp==NULL)
            {
                cout<<"Stack is full.\n";
            }
            else
            {
                temp->data=info;
                temp->link=head;
                head=temp;
            }
        }
        void pop()
        {
            if(head==NULL)
            {
                cout<<"Stack is empty.\n";
            }
            else
            {
                node *temp;
                temp = head;
                cout<<temp->data<<endl;
                head=head->link;
                free(temp);
            }
        }
        void peek()
        {
            if(head==NULL)
            {
                cout<<"Stack is empty.\n";
            }
            else
            {
                cout<<head->data<<endl;
            }
        }
        void display()
        {
            node *temp;
            temp=head;
            if(temp==NULL)
            {
                cout<<"Stack is empty.\n";
            }
            else
            {
                cout<<"The data in Stack are:\n";
                while (temp!=NULL)
                {
                    cout<<temp->data<<"->";
                    temp=temp->link;
                }
                cout<<endl;
            }
        }
};
class Queue_d
{
    node*head;
    public:
        void init()
        {
            head=new node;
            head=NULL;
        }
        void push(int info)
        {
            node *r=new node;
            if(r==NULL)
            {
                cout<<"Queue is full.\n";
            }
            else
            {
                node*temp=head;
                r->data=info;
                r->link=NULL;
                if(head==NULL)
                {
                    head=r;
                }
                else
                {
                    while(temp->link!=NULL)
                    {
                        temp=temp->link;
                    }
                    temp->link=r;
                }
            }
        }
        void pop()
        {
            if(head==NULL)
            {
                cout<<"Queue is empty.\n";
            }
            else
            {
                node *temp;
                temp=head;
                cout<<temp->data<<endl;
                head=head->link;
                free(temp);
            }
        }
        void peek()
        {
            if(head==NULL)
            {
                cout<<"Queue is empty.\n";
            }
            else
            {
                cout<<head->data<<endl;
            }
        }
        void display()
        {
            node *temp;
            temp=head;
            if(temp==NULL)
            {
                cout<<"Queue is empty.\n";
            }
            else
            {
                cout<<"The data in Queue are:\n";
                while(temp!=NULL)
                {
                    cout<<temp->data<<"->";
                    temp=temp->link;
                }
                cout<<endl;
            }
        }

};
class Queue_s
{
    int arr[MAX];
    int front,rear;
    public:
        void init()
        {
            front=rear=-1;
            fori(MAX)
            arr[i]=0;
        }
        void push(int info)
        {
            if((front==0&&rear==MAX-1)||(rear+1==front))
            {
                cout<<"Queue is full.\n";
            }
            else
            {
                if(rear==MAX-1)
                {
                    rear=0;
                }
                else
                {
                    rear++;
                }
                arr[rear]=info;
                if(front==-1)
                {
                    front=0;
                }
            }
        }
        void pop()
        {
            if(front==-1)
            {
                cout<<"Queue is empty.\n";
            }
            else
            {
                cout<<arr[front]<<endl;
                arr[front]=0;
                if(front==rear)
                {
                    front=rear=-1;
                }
                else if(front==MAX-1)
                {
                    front=0;
                }
                else
                {
                    front++;
                }
            }
        }
        void peek()
        {
            if(front==-1)
            {
                cout<<"Queue is empty.\n";
            }
            else
            {
                cout<<arr[front]<<endl;
            }
        }
        void display()
        {
            if(front==-1)
            {
                cout<<"Queue is empty.\n";
                rear=-1;
            }
            else
            {
                if(front<=rear)
                {
                    for(int i=front;i<=rear;i++)
                    {
                        cout<<arr[i]<<"\t";
                    }
                    cout<<endl;
                }
                else if(front>rear)
                {
                    for(int i=front;i<=MAX-1;i++)
                    {
                        cout<<arr[i]<<"\t";
                    }
                    fori(rear+1)
                    {
                        cout<<arr[i]<<"\t";
                    }
                    cout<<endl;
                }
            }
        }
};
class Array
{
    int arr[MAX];
    protected:
        int par(int a[],int low,int high)
        {
            int i=low-1;
            int p=arr[high];
            for(int j=low;j<high;j++)
            {
                if(arr[j]<p)
                {
                    i++;
                    swap(arr[i],arr[j]);
                }
                swap(arr[i+1],arr[high]);
            }
            return 1+i;
        }
    public:
        void init()
        {
            fori(MAX)
                arr[i]=0;
        }
        void get()
        {
            fori(MAX)
            {
                cout<<i+1<<(i==0?"st":(i==1?"nd":(i==2?"rd":"th")))<<"->";
                cin>>arr[i];
            }
            cout<<endl;
        }
        void display()
        {
            fori(MAX)
                cout<<arr[i]<<"\t";
            cout<<endl;
        }
        void bubble()
        {
            fori(MAX-1)
            {
                forj(MAX-1-i)
                {
                    if(arr[j]>arr[j+1])
                    {
                        arr[j]+=arr[j+1];
                        arr[j+1]=arr[j]-arr[j+1];
                        arr[j]=arr[j]-arr[j+1];
                    }
                }
            }
        }
        void insertion()
        {
            for(int i=1;i<MAX;i++)
            {
                int j=i-1;
                int data=arr[i];
                while(j>=0&&data<arr[j])
                {
                    arr[j+1]=arr[j];
                    j--;
                }
                arr[j+1]=data;
            }
        }
        void selection()
        {
            fori(MAX-1)
            {
                int data=arr[i],index=i;
                int j=i+1;
                for(;j<MAX;j++)
                {
                    if(data>arr[j])
                    {
                        data=arr[j];
                        index=j;
                    }
                }
                if(i!=index)
                {
                    arr[index]=arr[i];
                    arr[i]=data;
                }
            }
        }
        void quick(int lb,int hb)
        {
            int i=lb,j=hb,key=arr[lb];
            if(lb<hb)
            {
                while(i<j)
                {
                    while(key>=arr[i]&&i<j)
                    {
                        i++;
                    }
                    while(key<arr[j])
                    {
                        j--;
                    }
                    if(i<j)
                    {
                        arr[i]+=arr[j];
                        arr[j]=arr[i]-arr[j];
                        arr[i]=arr[i]-arr[j];
                    }
                }
                arr[lb]=arr[j];
                arr[j]=key;
                quick(lb,j-1);
                quick(j+1,hb);
            }
        }
        void mergesort(int lb,int hb)
        {
            if(lb<hb)
            {
                int mid=(lb+hb)/2;
                mergesort(lb,mid);
                mergesort(mid+1,hb);
                merge(lb,mid,hb);
            }
        }
        void merge(int lb,int mid,int hb)
        {
            int t1=mid-lb+1;
            int t2=hb-mid;
            int temp1[t1];
            int temp2[t2];
            for(int i=0;i<t1;i++)
                temp1[i]=arr[lb+i];
            for(int i=0;i<t2;i++)
                temp2[i]=arr[mid+1+i];
            int i=0,j=0,k=lb;
            while(i<t1&&j<t2)
            {
                if(temp1[i]>temp2[j])
                {
                    arr[k]=temp2[j];
                    k++;
                    j++;
                }
                else
                {
                    arr[k]=temp1[i];
                    k++;
                    i++;
                }
            }
            while(i<t1)
            {
                arr[k]=temp1[i];
                i++;
                k++;
            }
            while(j<t2)
            {
                arr[k]=temp2[j];
                j++;
                k++;
            }
        }
};
class Slist
{
    node*head;
    public:
        void init()
        {
            head=new node;
            head=NULL;
        }
        void addend(int info)
        {
            node *r=new node;
            if(r==NULL)
            {
                cout<<"Memory is full.\n";
            }
            else
            {
                node*temp=head;
                r->data=info;
                r->link=NULL;
                if(head==NULL)
                {
                    head=r;
                }
                else
                {
                    while(temp->link!=NULL)
                    {
                        temp=temp->link;
                    }
                    temp->link=r;
                }
            }
        }
        void addbeg(int info)
        {
            node*temp=new node;
            if(temp==NULL)
            {
                cout<<"Memory is full.\n";
            }
            else
            {
                temp->data=info;
                temp->link=head;
                head=temp;
            }
        }
        void addafter(int info,int loc)
        {
            node*temp=head;
            node*r=new node;
            if(r==NULL)
            {
                cout<<"Memory is full.\n";
            }
            else
            {
                r->data=info;
                while(temp->data!=loc)
                {
                    if(temp->link==NULL)
                    {
                        cout<<"No such data as reference exist.\n";
                        return;
                    }
                    temp=temp->link;
                }
                if(temp->link==NULL)
                {
                    r->link=NULL;
                    temp->link=r;
                }
                else
                {
                    r->link=temp->link;
                    temp->link=r;
                }

            }
        }
        void rev()
        {
            node *q,*r,*s;
            q=head;
            r=NULL;
            while(q!=NULL)
            {
                s=r;
                r=q;
                q=q->link;
                r->link=s;
            }
            head=r;
        }
        void count()
        {
            if(head==NULL)
            {
                cout<<"Linked list is empty.\n";
            }
            else
            {
                int c=0;
                node*temp=head;
                while(temp!=NULL)
                {
                    c++;
                    temp=temp->link;
                }
                cout<<"Total No of Data= "<<c<<endl;
            }
        }
        void deldata(int info)
        {

            if(head==NULL)
            {
                cout<<"Linked list is empty.\n";
            }
            else
            {
                node*temp=head;
                node*old;
                while(temp!=NULL)
                {
                    if(temp->data==info)
                    {
                        break;
                    }
                    old=temp;
                    temp=temp->link;
                }
                if(temp==NULL)
                {
                    cout<<"No such Data.\n";
                    return;
                }
                old->link=temp->link;
                free(temp);
                cout<<endl;
            }

        }
        void display()
        {
            if(head==NULL)
            {
                cout<<"Linked list is empty.\n";
            }
            else
            {
                node*temp=head;
                while(temp!=NULL)
                {
                    cout<<temp->data<<"->";
                    temp=temp->link;
                }
                cout<<endl;
            }
        }
};
class Clist
{
    node*head;int count;
    public:
        void init()
        {
            head=NULL;
            count=0;
        }
        void addend(int info)
        {
            node*r=new node;
            if(r==NULL)
            {
                cout<<"Memory is full.\n";
            }
            else
            {
                node*temp=head;
                r->data=info;
                r->link=head;
                if(head==NULL)
                {
                    head=r;
                    count++;
                }
                else
                {
                    int i=count;
                    while((i--)-1)
                    {
                        temp=temp->link;
                    }
                    temp->link=r;
                    count++;
                }
            }
        }
        void addbeg(int info)
        {
            node*r=new node;
            if(r==NULL)
            {
                cout<<"Memory is full.\n";
            }
            else
            {
                int i=count;
                node*temp=head;
                r->data=info;
                r->link=head;
                if(head==NULL)
                {
                    head=r;
                    count++;
                }
                else
                {
                    while((i--)-1)
                    {
                        temp=temp->link;
                    }
                    temp->link=r;
                    head=r;
                    count++;
                }
            }
        }
        void addafter(int info,int loc)
        {
            node*temp=head;
            node*r=new node;
            if(r==NULL)
            {
                cout<<"Memory is full.\n";
            }
            else
            {
                int i=count;
                r->data=info;
                while(temp->data!=loc)
                {
                    if(!(i--))
                    {
                        cout<<"No such data as reference exist.\n";
                        return;
                    }
                    temp=temp->link;
                }
                r->link=temp->link;
                temp->link=r;
                count++;
            }
        }
        void rev()
        {
            int i=count;
            node*q,*r,*s;
            q=head;
            r=head;
            while(i--)
            {
                s=r;
                r=q;
                q=q->link;
                r->link=s;
            }
            head=r;
        }
        void ct()
        {
            cout<<"Total No of Data= "<<count<<endl;
        }
        void deldata(int info)
        {
            if(head==NULL)
            {
                cout<<"Linked list is empty.\n";
            }
            else
            {
                int i=count;
                node*temp=head;
                node*old;
                while(i)
                {
                    if(temp->data==info)
                    {
                        break;
                    }
                    old=temp;
                    temp=temp->link;
                    i--;
                }
                if(!i)
                {
                    cout<<"No such Data.\n";
                    return;
                }
                old->link=temp->link;
                free(temp);
                cout<<endl;
                count--;
            }
        }
        void display()
        {
            if(head==NULL)
            {
                cout<<"Linked list is empty.\n";
            }
            else
            {
                int i=count;
                node*temp=head;
                while(i--)
                {
                    cout<<temp->data<<"->";
                    temp=temp->link;
                }
                cout<<endl;
            }
        }
};
typedef struct link
{
    link *pre;
    int data;
    link *next;
}link;
class Dlist
{
    link *head;
    public:
        void init()
        {
            head=NULL;
        }
        void addend(int info)
        {
            link *r=new link;
            if(r==NULL)
            {
                cout<<"Memory is full.\n";
            }
            else
            {
                link*temp=head;
                r->data=info;
                r->next=NULL;
                if(head==NULL)
                {
                    head=r;
                }
                else
                {
                    while(temp->next!=NULL)
                    {
                        temp=temp->next;
                    }
                    temp->next=r;
                    r->pre=temp;
                }
            }
        }
        void addbeg(int info)
        {
            link*temp=new link;
            if(temp==NULL)
            {
                cout<<"Memory is full.\n";
            }
            else
            {
                temp->data=info;
                temp->next=head;
                head->pre=temp;
                head=temp;
            }
        }
        void addafter(int info,int loc)
        {
            link*temp=head;
            link*r=new link;
            if(r==NULL)
            {
                cout<<"Memory is full.\n";
            }
            else
            {
                r->data=info;
                while(temp->data!=loc)
                {
                    if(temp->next==NULL)
                    {
                        cout<<"No such data as reference exist.\n";
                        return;
                    }
                    temp=temp->next;
                }
                if(temp->next==NULL)
                {
                    r->next=NULL;
                    temp->next=r;
                    r->pre=temp;
                }
                else
                {
                    link*now;
                    now=temp->next;
                    r->next=now;
                    r->pre=temp;
                    temp->next=r;
                    now->pre=r;
                }

            }
        }
        void rev()
        {
            cout<<"Coming Soon.\n";
        }
        void count()
        {
            if(head==NULL)
            {
                cout<<"Linked list is empty.\n";
            }
            else
            {
                int c=0;
                link*temp=head;
                while(temp!=NULL)
                {
                    c++;
                    temp=temp->next;
                }
                cout<<"Total No of Data= "<<c<<endl;
            }
        }
        void deldata(int info)
        {
            if(head==NULL)
            {
                cout<<"Linked list is empty.\n";
            }
            else
            {
                link*temp=head;
                link*old;
                link*now;
                while(temp!=NULL)
                {
                    if(temp->data==info)
                    {
                        break;
                    }
                    old=temp;
                    temp=temp->next;
                    now=temp->next;
                }
                if(temp==NULL)
                {
                    cout<<"No such Data.\n";
                    return;
                }
                if(temp->pre=NULL)
                {
                    now=temp->next;
                    now->pre=NULL;
                    free(temp);
                    cout<<endl;
                }
                else
                {
                    old->next=now;
                    now->pre=old;
                    free(temp);
                    cout<<endl;
                }
            }
        }
        void display()
        {
            if(head==NULL)
            {
                cout<<"Linked list is empty.\n";
            }
            else
            {
                link*temp=head;
                while(temp!=NULL)
                {
                    cout<<temp->data<<"->";
                    temp=temp->next;
                }
                cout<<endl;
            }
        }
};
int main()
{
    start:
    int choice;
    cout<<"Enter what concept U want to use:\n1:For Stack\n2:For Queue\n3:For Linked List\n4:For Array\n\n5:Exit"<<endl;
    cin>>choice;
    switch(choice)
    {
        case 1://*******************STACK**********************
        {
            cout<<"\n\n**********STACK**********\n\n";
            int choice_1;
            cout<<"Enter Your choice:\n1:Dynamic Stack\n2:Static Stack\n\n3:Back\n4:Exit"<<endl;
            cin>>choice_1;
            switch (choice_1)
            {
                case 1://******************DYNAMIC******************
                {
                    Stack_d sd;
                    cout<<"You choose Dynamic Stack.\n"<<endl;
                    sd.init();
                    int choice_11;
                    dppp:
                    cout<<"Enter the choice:\n1:Push\n2:Pop\n3:Peek\n4:To Display\n\n5:Go to main menu.\n6:Exit"<<endl;
                    cin>>choice_11;
                    switch(choice_11)
                    {
                        case 1:
                        {
                            int a=0;
                            do{
                            int data;
                            cout<<"Enter the number to push: ";
                            cin>>data;
                            sd.push(data);
                            cout<<"Do You want to continue the same operation(1/0): ";
                            cin>>a;
                            }while(a==1);
                            goto dppp;
                        }
                        break;
                        case 2:
                        {
                            int a=0;
                            do{
                            cout<<"You choose to pop.\n";
                            sd.pop();
                            cout<<"Do You want to continue the same operation(1/0): ";
                            cin>>a;
                            }while(a==1);
                            goto dppp;
                        }
                        break;
                        case 3:
                        {
                            cout<<"You choose to peek.\n";
                            sd.peek();
                            goto dppp;
                        }
                        break;
                        case 4:
                        {
                            cout<<"You choose to display.\n";
                            sd.display();
                            goto dppp;
                        }
                        break;
                        case 5:
                        {
                            goto start;
                        }
                        break;
                        case 6:
                        {
                            exit(0);
                        }
                        break;
                        default:
                        {
                            cout<<"Wroung input"<<endl;
                            goto start;
                        }
                    }

                }
                break;
                case 2://******************STATIC*******************
                {
                    Stack_s ss;
                    cout<<"You choose Static Stack.\n"<<endl;
                    ss.init();
                    int choice_12;
                    sppp:
                    cout<<"Enter the choice:\n1:Push\n2:Pop\n3:Peek\n4:To Display\n\n5:Go to main menu.\n6:Exit"<<endl;
                    cin>>choice_12;
                    switch(choice_12)
                    {
                        case 1:
                        {
                            int a=0;
                            do{
                            int data;
                            cout<<"Enter the number to push: ";
                            cin>>data;
                            ss.push(data);
                            cout<<"Do You want to continue the same operation(1/0): ";
                            cin>>a;
                            }while(a==1);
                            goto sppp;
                        }
                        break;
                        case 2:
                        {
                            int a=0;
                            do{
                            cout<<"You choose to pop.\n";
                            ss.pop();
                            cout<<"Do You want to continue the same operation(1/0): ";
                            cin>>a;
                            }while(a==1);
                            goto sppp;
                        }
                        break;
                        case 3:
                        {
                            int a=0;
                            cout<<"You choose to peek.\n";
                            ss.peek();
                            goto sppp;
                        }
                        break;
                        case 4:
                        {
                            cout<<"You choose to display.\n";
                            ss.display();
                            goto sppp;
                        }
                        break;
                        case 5:
                        {
                            goto start;
                        }
                        break;
                        case 6:
                        {
                            exit(0);
                        }
                        break;
                        default:
                        {
                            cout<<"Wroung input"<<endl;
                            goto start;
                        }
                    }
                }
                break;
                case 3:
                {
                    goto start;
                }
                break;
                case 4:
                {
                    exit(0);
                }
                break;
                default:
                {
                    cout<<"Wrong input."<<endl;
                    goto start;
                }
            }

        }
        break;
        case 2://********************QUEUE*********************
        {
            cout<<"\n\n**********QUEUE**********\n\n";
            int choice_2;
            cout<<"Enter Your choice:\n1:Dynamic Queue\n2:Static Queue\n\n3:Back\n4:Exit"<<endl;
            cin>>choice_2;
            switch (choice_2)
            {
                case 1://******************DYNAMIC******************
                {
                    Queue_d qd;
                    cout<<"You choose Dynamic Queue.\n"<<endl;
                    qd.init();
                    int choice_21;
                    dqpp:
                    cout<<"Enter the choice:\n1:Push\n2:Pop\n3:Peek\n4:To Display\n\n5:Go to main menu.\n6:Exit"<<endl;
                    cin>>choice_21;
                    switch(choice_21)
                    {
                        case 1:
                        {
                            int a=0;
                            do{
                            int data;
                            cout<<"Enter the number to push: ";
                            cin>>data;
                            qd.push(data);
                            cout<<"Do You want to continue the same operation(1/0): ";
                            cin>>a;
                            }while(a==1);
                            goto dqpp;
                        }
                        break;
                        case 2:
                        {
                            int a=0;
                            do{
                            cout<<"You choose to pop.\n";
                            qd.pop();
                            cout<<"Do You want to continue the same operation(1/0): ";
                            cin>>a;
                            }while(a==1);
                            goto dqpp;
                        }
                        break;
                        case 3:
                        {
                            int a=0;
                            cout<<"You choose to peek.\n";
                            qd.peek();
                            goto dqpp;
                        }
                        break;
                        case 4:
                        {
                            cout<<"You choose to display.\n";
                            qd.display();
                            goto dqpp;
                        }
                        break;
                        case 5:
                        {
                            goto start;
                        }
                        break;
                        case 6:
                        {
                            exit(0);
                        }
                        break;
                        default:
                        {
                            cout<<"Wroung input"<<endl;
                            goto start;
                        }
                    }

                }
                break;
                case 2://******************STATIC*******************
                {
                    Queue_s qs;
                    cout<<"You choose Static Queue.\n"<<endl;
                    qs.init();
                    int choice_22;
                    sqpp:
                    cout<<"Enter the choice:\n1:Push\n2:Pop\n3:Peek\n4:To Display\n\n5:Go to main menu.\n6:Exit"<<endl;
                    cin>>choice_22;
                    switch(choice_22)
                    {
                        case 1:
                        {
                            int a=0;
                            do{
                            int data;
                            cout<<"Enter the number to push: ";
                            cin>>data;
                            qs.push(data);
                            cout<<"Do You want to continue the same operation(1/0): ";
                            cin>>a;
                            }while(a==1);
                            goto sqpp;
                        }
                        break;
                        case 2:
                        {
                            int a=0;
                            do{
                            cout<<"You choose to pop.\n";
                            qs.pop();
                            cout<<"Do You want to continue the same operation(1/0): ";
                            cin>>a;
                            }while(a==1);
                            goto sqpp;
                        }
                        break;
                        case 3:
                        {
                            int a=0;
                            cout<<"You choose to peek.\n";
                            qs.peek();
                            goto sqpp;
                        }
                        break;
                        case 4:
                        {
                            cout<<"You choose to display.\n";
                            qs.display();
                            goto sqpp;
                        }
                        break;
                        case 5:
                        {
                            goto start;
                        }
                        break;
                        case 6:
                        {
                            exit(0);
                        }
                        break;
                        default:
                        {
                            cout<<"Wroung input"<<endl;
                            goto start;
                        }
                    }
                }
                break;
                case 3:
                {
                    goto start;
                }
                break;
                case 4:
                {
                    exit(0);
                }
                break;
                default:
                {
                    cout<<"Wrong input."<<endl;
                    goto start;
                }
            }

        }
        break;
        case 3://******************LINKED LIST*****************
        {
            cout<<"\n\n**********LINKED LIST**********\n\n";
            int choice_3;
            cout<<"Enter Your choice:\n1:Single Linked List\n2:Double Linked List\n3:Circular Linked List\n\n4:Back\n5:Exit"<<endl;
            cin>>choice_3;
            switch(choice_3)
            {
                case 1://*******************SINGLE********************
                {
                    Slist sl;
                    cout<<"You choose Single Linked List.\n"<<endl;
                    sl.init();
                    int choice_31;
                    sls:
                    cout<<"Enter the choice:\n1:Add at the end\n2:Add at the begining\n3:Add after a data\n4:Delete the data\n5:Count the number of data\n6:Reverse the data\n7:Display the data\n\n8:Go to main menu.\n9:Exit"<<endl;
                    cin>>choice_31;
                    switch(choice_31)
                    {
                        case 1:
                        {
                            int a=0;
                            do{
                            int data;
                            cout<<"Enter the Data to add at the end: ";
                            cin>>data;
                            sl.addend(data);
                            cout<<"Do You want to continue the same operation(1/0): ";
                            cin>>a;
                            }while(a==1);
                            goto sls;
                        }
                        break;
                        case 2:
                        {
                            int a=0;
                            do{
                            int data;
                            cout<<"Enter the Data to add at the begining: ";
                            cin>>data;
                            sl.addbeg(data);
                            cout<<"Do You want to continue the same operation(1/0): ";
                            cin>>a;
                            }while(a==1);
                            goto sls;
                        }
                        break;
                        case 3:
                        {
                            int a=0;
                            do{
                            int data,ref;
                            cout<<"Enter the Data to add: ";
                            cin>>data;
                            cout<<"Enter the data as a reference: ";
                            cin>>ref;
                            sl.addafter(data,ref);
                            cout<<"Do You want to continue the same operation(1/0): ";
                            cin>>a;
                            }while(a==1);
                            goto sls;
                        }
                        break;
                        case 4:
                        {
                            int a=0;
                            do{
                            int data;
                            cout<<"Enter the Data to delete: ";
                            cin>>data;
                            sl.deldata(data);
                            cout<<"Do You want to continue the same operation(1/0): ";
                            cin>>a;
                            }while(a==1);
                            goto sls;
                        }
                        break;
                        case 5:
                        {
                            sl.count();
                            goto sls;
                        }
                        break;
                        case 6:
                        {
                            cout<<"You choose to reverse."<<endl;
                            sl.rev();
                            goto sls;
                        }
                        break;
                        case 7:
                        {
                            cout<<"You choose to display.\n";
                            sl.display();
                            goto sls;
                        }
                        break;
                        case 8:
                        {
                            goto start;
                        }
                        break;
                        case 9:
                        {
                            exit(0);
                        }
                        break;
                        default:
                        {
                            cout<<"Wroung input"<<endl;
                            goto start;
                        }
                    }
                }
                break;
                case 2://*******************DOUBLE********************
                {
                    Dlist dl;
                    cout<<"You choose Double Linked List.\n"<<endl;
                    dl.init();
                    int choice_32;
                    dls:
                    cout<<"Enter the choice:\n1:Add at the end\n2:Add at the begining\n3:Add after a data\n4:Delete the data\n5:Count the number of data\n6:Reverse the data\n7:Display the data\n\n8:Go to main menu.\n9:Exit"<<endl;
                    cin>>choice_32;
                    switch(choice_32)
                    {
                        case 1:
                        {
                            int a=0;
                            do{
                            int data;
                            cout<<"Enter the Data to add at the end: ";
                            cin>>data;
                            dl.addend(data);
                            cout<<"Do You want to continue the same operation(1/0): ";
                            cin>>a;
                            }while(a==1);
                            goto dls;
                        }
                        break;
                        case 2:
                        {
                            int a=0;
                            do{
                            int data;
                            cout<<"Enter the Data to add at the begining: ";
                            cin>>data;
                            dl.addbeg(data);
                            cout<<"Do You want to continue the same operation(1/0): ";
                            cin>>a;
                            }while(a==1);
                            goto dls;
                        }
                        break;
                        case 3:
                        {
                            int a=0;
                            do{
                            int data,ref;
                            cout<<"Enter the Data to add: ";
                            cin>>data;
                            cout<<"Enter the data as a reference: ";
                            cin>>ref;
                            dl.addafter(data,ref);
                            cout<<"Do You want to continue the same operation(1/0): ";
                            cin>>a;
                            }while(a==1);
                            goto dls;
                        }
                        break;
                        case 4:
                        {
                            int a=0;
                            do{
                            int data;
                            cout<<"Enter the Data to delete: ";
                            cin>>data;
                            dl.deldata(data);
                            cout<<"Do You want to continue the same operation(1/0): ";
                            cin>>a;
                            }while(a==1);
                            goto dls;
                        }
                        break;
                        case 5:
                        {
                            dl.count();
                            goto dls;
                        }
                        break;
                        case 6:
                        {
                            cout<<"You choose to reverse."<<endl;
                            dl.rev();
                            goto dls;
                        }
                        break;
                        case 7:
                        {
                            cout<<"You choose to display.\n";
                            dl.display();
                            goto dls;
                        }
                        break;
                        case 8:
                        {
                            goto start;
                        }
                        break;
                        case 9:
                        {
                            exit(0);
                        }
                        break;
                        default:
                        {
                            cout<<"Wroung input"<<endl;
                            goto start;
                        }
                    }
                }
                break;
                case 3://******************CIRCULAR*******************
                {
                    Clist cl;
                    cout<<"You choose Circular Linked List.\n"<<endl;
                    cl.init();
                    int choice_33;
                    cls:
                    cout<<"Enter the choice:\n1:Add at the end\n2:Add at the begining\n3:Add after a data\n4:Delete the data\n5:Count the number of data\n6:Reverse the data\n7:Display the data\n\n8:Go to main menu.\n9:Exit"<<endl;
                    cin>>choice_33;
                    switch(choice_33)
                    {
                        case 1:
                        {
                            int a=0;
                            do{
                            int data;
                            cout<<"Enter the Data to add at the end: ";
                            cin>>data;
                            cl.addend(data);
                            cout<<"Do You want to continue the same operation(1/0): ";
                            cin>>a;
                            }while(a==1);
                            goto cls;
                        }
                        break;
                        case 2:
                        {
                            int a=0;
                            do{
                            int data;
                            cout<<"Enter the Data to add at the begining: ";
                            cin>>data;
                            cl.addbeg(data);
                            cout<<"Do You want to continue the same operation(1/0): ";
                            cin>>a;
                            }while(a==1);
                            goto cls;
                        }
                        break;
                        case 3:
                        {
                            int a=0;
                            do{
                            int data,ref;
                            cout<<"Enter the Data to add: ";
                            cin>>data;
                            cout<<"Enter the data as a reference: ";
                            cin>>ref;
                            cl.addafter(data,ref);
                            cout<<"Do You want to continue the same operation(1/0): ";
                            cin>>a;
                            }while(a==1);
                            goto cls;
                        }
                        break;
                        case 4:
                        {
                            int a=0;
                            do{
                            int data;
                            cout<<"Enter the Data to delete: ";
                            cin>>data;
                            cl.deldata(data);
                            cout<<"Do You want to continue the same operation(1/0): ";
                            cin>>a;
                            }while(a==1);
                            goto cls;
                        }
                        break;
                        case 5:
                        {
                            cl.ct();
                            goto cls;
                        }
                        break;
                        case 6:
                        {
                            cout<<"You choose to reverse."<<endl;
                            cl.rev();
                            goto cls;
                        }
                        break;
                        case 7:
                        {
                            cout<<"You choose to display.\n";
                            cl.display();
                            goto cls;
                        }
                        break;
                        case 8:
                        {
                            goto start;
                        }
                        break;
                        case 9:
                        {
                            exit(0);
                        }
                        break;
                        default:
                        {
                            cout<<"Wroung input"<<endl;
                            goto start;
                        }
                    }
                }
                break;
                case 4:
                {
                    goto start;
                }
                break;
                case 5:
                {
                    exit(0);
                }
                break;
                default:
                {
                    cout<<"Wroung input"<<endl;
                    goto start;
                }
            }
        }
        break;
        case 4://*******************ARRAY***********************
        {
            cout<<"\n\n**********ARRAY**********\n\n";
            Array ray;
            ray.init();
            cout<<"Enter the elements of array:\n";
            ray.get();
            int choice_4;
            sort:
            cout<<"Enter Your choice:\n1:Bubble Sorting\n2:Insertion Sorting\n3:Selection Sorting\n4:Quick Sorting\n5:Merge Sorting\n6:Re-enter the Array\n\n7:Go to main menu\n8:Exit"<<endl;
            cin>>choice_4;
            switch (choice_4)
            {
                case 1://********************BUBBLE***************************
                {
                    cout<<"Your choose Bubble sorting.\nArray before sorting:\n";
                    ray.display();
                    ray.bubble();
                    cout<<"Array after sorting:\n";
                    ray.display();

                    goto sort;
                }
                break;
                case 2://********************insertion************************
                {
                    cout<<"Your choose Insertion sorting.\nArray before sorting:\n";
                    ray.display();
                    ray.insertion();
                    cout<<"Array after sorting:\n";
                    ray.display();
                    goto sort;
                }
                break;
                case 3://**********************SELECTION**********************
                {
                    cout<<"Your choose Selection sorting.\nArray before sorting:\n";
                    ray.display();
                    ray.selection();
                    cout<<"Array after sorting:\n";
                    ray.display();
                    goto sort;
                }
                break;
                case 4://**********************QUICK**********************
                {
                    cout<<"Your choose Quick sorting.\nArray before sorting:\n";
                    ray.display();
                    ray.quick(0,MAX-1);
                    cout<<"Array after sorting:\n";
                    ray.display();
                    goto sort;
                }
                break;
                case 5://**********************MERGE**********************
                {
                    cout<<"Your choose Merge sorting.\nArray before sorting:\n";
                    ray.display();
                    ray.mergesort(0,MAX-1);
                    cout<<"Array after sorting:\n";
                    ray.display();
                    goto sort;
                }
                break;
                case 6:
                {
                    ray.init();
                    cout<<"Enter the elements of array:\n";
                    ray.get();
                    goto sort;
                }
                break;
                case 7:
                {
                    goto start;
                }
                break;
                case 8:
                {
                    exit(0);
                }
                break;
                default:
                {
                    cout<<"Wrong input."<<endl;
                    goto start;
                }
            }
        }
        break;
        case 5://*******************EXIT************************
        {
            exit(0);
        }
        break;
        default:
        {
            cout<<"Wrong input."<<endl;
            goto start;
        }
    }
    return 0;
}
