#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main()
{
	//form biggest number
	string s="234567";
	sort(s.begin(),s.end(),greater<int>());
	cout<<"greatest string: "<<s;
	return 0;
}
