#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node *next;

    node(int x)
    {
        data = x;
        next = NULL;

    }
};

class Stack{

    private:
    node *top;

    public:
    Stack()
    {
        top = NULL;

    }

    int empty()
    {
        if(top == NULL)
        {
            return 1;
        }
        else{
            return 0;
        }
    }

    void push(int x)
    {
        node *p = new node(x);
        p->next = top;
        top = p;
    }

    int pop(void){
        int x =top -> data;
        node *p =top;
        top = top->next;
        delete p;
        return x;

    }

    int peek(void)
    {
        return top->data;
    }

    void display ()
    {
        node *q = top;
        while (q!=NULL)
        {
            cout<<endl<<q->data;
            q = q->next;
        }
    }
};


int main()
{
    int x;
    Stack s;

    s.push(3);
    s.push(6);
    s.push(9);
    s.push(33);
    s.push(66);
    s.push(99);
    s.push(0);

    s.display();

    if (!s.empty())
    {
        x = s.pop();
        cout<<endl<<"Removed: "<<x;
    }

    s.display();

    x = s.peek();
    cout<<endl<<"Top Element is: "<<x;

    return 0;
    
}