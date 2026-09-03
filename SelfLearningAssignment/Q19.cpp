#include<iostream>
#include<list>
#include<cstdlib>
#include<ctime>
using namespace std;

int main()
{
    list<int> numbers;

    srand((unsigned)time(NULL));

    for(int i=0;i<10;i++)
        numbers.push_back(rand()%100);

    cout<<"Original list:"<<endl;

    list<int>::iterator it;

    for(it=numbers.begin();it!=numbers.end();++it)
        cout<<*it<<" ";

    cout<<endl;

    cout<<"\nReverse order:"<<endl;

    list<int>::reverse_iterator rit;

    for(rit=numbers.rbegin();rit!=numbers.rend();++rit)
        cout<<*rit<<" ";

    cout<<endl;

    for(it=numbers.begin();it!=numbers.end();++it)
        *it=*it+5;

    cout<<"\nAfter incrementing by 5:"<<endl;

    for(it=numbers.begin();it!=numbers.end();++it)
        cout<<*it<<" ";

    cout<<endl;

    cout<<"\nUsing const iterator:"<<endl;

    list<int>::const_iterator cit;

    for(cit=numbers.begin();cit!=numbers.end();++cit)
        cout<<*cit<<" ";

    cout<<endl;

    numbers.sort();

    cout<<"\nAfter sorting:"<<endl;

    for(it=numbers.begin();it!=numbers.end();++it)
        cout<<*it<<" ";

    cout<<endl;

    return 0;
}