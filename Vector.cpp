// Online C++ compiler to run C++ program online
#include <iostream>
#include<vector>
using namespace std;
int main() {
    // Write C++ code here
    vector<int> v;
    vector<int> v(5); // Vector with size 5 
    vector<int> v(5,1); // Vector with size 5 and every element equal to 1
    vector<int> last(v); // Makes a new vector last and copies all element of v into it
    cout<<"Capacity->"<<v.capacity()<<endl;
    v.push_back(1);
    cout<<"Capacity->"<<v.capacity()<<endl;
    v.push_back(2);
    cout<<"Capacity->"<<v.capacity()<<endl;
    v.push_back(3);
    cout<<"Capacity->"<<v.capacity()<<endl;
    cout<<"Size->"<<v.size()<<endl;
    cout<<"Element at index 2->"<<v.at(2)<<endl;
    cout<<"Element at first->"<<v.front()<<endl;
    cout<<"Element at last->"<<v.back()<<endl;
    cout<<"Before pop: "<<endl;
    for(int i:v)
    {
        cout<<i<<" ";
    }
    v.pop_back();
    cout<<endl;
    cout<<"After pop: "<<endl;
    for(int i:v)
    {
        cout<<i<<" ";
    }
    cout<<"Before clear size is:"<<v.size()<<endl;
    v.clear(); // Clears every element
    cout<<"After clear size is:"<<v.size()<<endl;
    return 0;
}
