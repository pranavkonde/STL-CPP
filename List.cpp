// Online C++ compiler to run C++ program online
#include <iostream>
#include<list>
using namespace std;
int main() {
   list <int> l;
//   list<int> n(l);
   list<int> n(5,100);
   l.push_back(1);
   l.push_front(2);
   cout<<"Before Erase->"<<endl;
   for(auto i:l)
   {
       cout<<i<<endl;
   }
   cout<<endl;
   l.erase(l.begin());
   cout<<"After Erase->"<<endl;
      for(auto i:l)
   {
       cout<<i<<endl;
   }
   cout<<"Size->"<<l.size()<<endl;
   return 0;
}
