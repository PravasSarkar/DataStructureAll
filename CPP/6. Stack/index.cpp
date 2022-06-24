//Stack Using Class and Object

#include <iostream>
using namespace std;

//Main Class

class stackclass
{
public:
    int top = 0;
    int arrayStack[100];

    void Push();
    void POP();
    void Display();
};

//PUSH Function

void stackclass::Push()
{
    int number;
    cout << "Number : ";
    cin >> number;
    arrayStack[top] = number;
    top = top + 1;
}

//POP Function

void stackclass::POP()
{
    if (top == 0)
    {
        cout << "The Stack Is Empty";
    }
    else
    {
        top = top - 1;
    }
}

//Display Function

void stackclass::Display()
{
    int i;
    cout << "\n\n The Array Is : ";
    for (i = 0; i < top; i++)
    {
        cout << arrayStack[i] << " ";
    }
}

//Main Function

int main()
{
    stackclass S;
    int chose;
    cout << "1.Push\n2.Pop\n3.Display\n4.Exit" << endl;
    while (true)
    {
        cout << "\n\nEnter : ";
        cin >> chose;

        if (chose == 1)
        {
            S.Push();
        }
        else if (chose == 2)
        {
            S.POP();
        }
        else if (chose == 3)
        {
            S.Display();
        }
        else if (chose == 4)
        {
            break;
        }
    }

    return 0;
}
