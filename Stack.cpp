#include <iostream>
#include<stack>
using namespace std;
int main() {
    stack<string> s;
    s.push("Pranav");
    s.push("Pradip");
    s.push("Konde");
    cout<<"Element present at top->"<<s.top()<<endl;;
    s.pop();
    cout<<"Element present at top->"<<s.top()<<endl;;
    cout<<"Size->"<<s.size()<<endl;;
    cout<<"Empty or Not->"<<s.empty()<<endl;
    return 0;
}
