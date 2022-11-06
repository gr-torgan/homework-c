#include <iostream> 
#include <stack> 
#include <string>

using namespace std;

struct Stack {
    string name;
    unsigned s_dat;

    Stack(const string& name, unsigned s_dat) : name(name), s_dat(s_dat) { ; }
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
    while (char d != stack.name) {
        cout << '\t' << stack.name << '\t' << stack.s_dat << endl;
        s.pop();
    }
    showstack(s);
    cout << '\n';
}

int main()
{
    char d = 0;
    int n = 0;
    stack<Stack> s;
    s.push(Stack("one", 111));
    s.push(Stack("two", 222));
    s.push(Stack("three", 333));
    s.push(Stack("four", 444));
    s.push(Stack("five", 555));

    cout << "The stack is : " << endl;
    showstack(s);

    cin >> d;
    doing(s);

    return 0;
}