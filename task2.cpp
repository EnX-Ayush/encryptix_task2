#include<iostream>
using namespace std;
int main()
{

    char o;
    cout << "enter the operator" << endl;
    cin >> o;

    int a, b;
    cout << "enter the first number " << endl;
    cin >> a;
    cout << "enter the second number " << endl;
    cin >> b;

    switch(o){
    case '+':
        cout << "the answer is " << a+b << endl;
        break;
    case '-':
        cout << "the answer is " << a-b << endl;
        break;
    case '*':
        cout << "the answer is " << a*b << endl;
        break;
    case '/':
        cout << "the answer is " << a/b << endl;
        break;
    default:
        cout << "wrong operator " << endl;
    }
    return 0;
}
