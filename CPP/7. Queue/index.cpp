#include<iostream>
#define Queue_Size 5
using namespace std;

class Queue{
    public:
        int data[Queue_Size + 1];
        int head=0,tail=0;

        void enqueue();
        void dequeue();
};

void Queue::enqueue(){
    if((tail + 1)%(Queue_Size +1) == head){
        cout << "The Queue Is Full";
    }else{
        int item;
        cout << "Enter Your Item : ";
        cin >> item;
        data[tail] = item;
        tail=(tail+1)%(Queue_Size + 1);
    }
}

void Queue::dequeue(){
    int item;

    if(head == tail){
        cout<<"The Queue is Empty";
    }else{
        item = data[head];
        head = (head + 1)%(Queue_Size + 1);
    }
}

int main()
{   
    Queue Q;

    while (true)
    {
        cout<<Q.tail;
        Q.enqueue();
        
    }
    

    

    return 0;
}
