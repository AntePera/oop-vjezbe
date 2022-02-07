#include"Stack.hpp"
int main()
{
    Stack<int> s;
    s.push(10);
    s.push(20);
    s.push(30);
    while (!s.isEmpty())
    {
        s.pop();
        std::cout << "Popped element:" << s.pop() << std::endl;
    }

    return 0;
}