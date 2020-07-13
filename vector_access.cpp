#include <iostream>
#include <vector>
using namespace std;
int main()
{
	vector<int> q;
	for(int i=0;i<5;i++)
		q.push_back(i);
	cout<<"Output of begin and end: "; 
	for(auto i=q.begin();i!=q.end();i++)
		cout<<*i<<" ";
	cout<<"\nOutput of cbegin and cend: ";
	for(auto i=q.cbegin();i!=q.end();i++)
		cout<<*i<<" ";
	cout<<"\nOutput of rbegin and rend: ";
	for(auto i=q.rbegin();i!=q.rend();i++)
		cout<<*i<<" ";
	cout<<"\nOutput of crbegin and crend: ";
	for(auto i=q.crbegin();i!=q.crend();i++)
		cout<<*i<<" ";
	return 0;
}
