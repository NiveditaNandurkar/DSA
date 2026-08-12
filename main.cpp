/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include<stack> 
using namespace std;
int main()
{
    stack <int> s;
    
    s.push(3);
    s.pop();
    //cout << "Printing top element " << s.top() << endl;
    if(s.empty()){
        cout << "Stack is empty " << endl;
    }
    else{
        cout << "stack is not empty " << endl;
    }
    cout << "size of stack is" << s.size() << endl;
    return 0;
}