#include<iostream>
#include<string>
using namespace std;
int main()
{
	string str="SDsiudirghHqeDRThjj";
	//arrange in uppercase
	for(int i=0;i<str.size();i++)
	{
		if(str[i]>='a'&&str[i]<='z')
		{
		  str[i]-=32;
	    }
	}
	cout<<"uppercase string: "<<str<<endl;
	
	str="SDsiudirghHqeDRThjj";
	//arrange in lowercase
	for(int i=0;i<str.size();i++)
	{
		if(str[i]>='A'&&str[i]<='Z')
		{
		  str[i]+=32;
	    }
	}
	cout<<"lowercase string: "<<str<<endl;
	
/*	//uppercase by inbuild function
	str="SDsiudirghHqeDRThjj";
	transform(str.begin(),str.end(),str.begin(),::toupper);  */
	
	return 0;
}
