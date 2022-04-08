#include <iostream>
#include<array>
using namespace std;
int main() {
    int basic[3]={1,2,3};
    array<int,4> a={1,2,3,4};
    int size=a.size();
    for(int i=0;i<size;i++)
    {
        cout<<a[i]<<endl;
    }
    cout<<"Element at index 2->"<<a.at(2)<<endl;
    cout<<"Element at first->"<<a.front()<<endl;
    cout<<"Element at last->"<<a.back()<<endl;
    cout<<"Empty or Not->"<<a.empty()<<endl;
    return 0;
}
