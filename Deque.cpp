#include <iostream>
#include<deque>
using namespace std;
int main() {
    deque<int> d;
    d.push_back(1);
    d.push_front(2);
    for(auto i:d)
    {
        cout<<i<<" ";
    }
    d.pop_back();
    d.pop_front();
    d.push_back(1);
    d.push_front(2);
    cout<<endl;
    cout<<"Print first index element->"<<d.at(1)<<endl;
    cout<<"Front->"<<d.front()<<endl;
    cout<<"Back->"<<d.back()<<endl;
    cout<<"Empty or Not->"<<d.empty()<<endl;
    cout<<"Before Erase->"<<d.size()<<endl;
    d.erase(d.begin(),d.begin()+1);
    cout<<"After Erase->"<<d.size()<<endl;
    return 0;
}
