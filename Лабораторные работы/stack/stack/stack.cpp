#include <iostream> 
#include <stack> 
#include <string>

using namespace std;
char d = 0;

struct Stack {
    char name;
    unsigned s_dat;

    Stack(const char& name, unsigned s_dat) : name(name), s_dat(s_dat) { ; }
};

void showstack(stack<Stack> s)
{
    while (!s.empty())
    {
        Stack stack = s.top();
        cout << '\t' << stack.name << '\t' << stack.s_dat << endl;
        s.pop();
    }
    cout << '\n';
}

void doing(stack<Stack> s)
{
    Stack stack = s.top();
    while (d != stack.name) {
        cout << '\t' << stack.name << '\t' << stack.s_dat << endl;
        s.pop();
    }
    showstack(s);
    cout << '\n';
}

int main()
{
    char d = 1;
    int n = 0;
    stack<Stack> s;
    s.push(Stack(1, 111));
    s.push(Stack(2, 222));
    s.push(Stack(3, 333));
    s.push(Stack(4, 444));
    s.push(Stack(5, 555));

    cout << "The stack is : " << endl;
    showstack(s);

    cin >> d;
    doing(s);

    return 0;
}