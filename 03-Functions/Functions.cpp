#include <iostream>
using namespace std;

int sum(int x , int y = 10);


int main(void)
{

    cout << "Hello from main\n";
    cout << sum(5);
    return 0;
}

int sum(int x , int y)
{
    return x+y;
}