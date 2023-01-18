#include <iostream>
#include<string>
using namespace std;
string rev_str(string str)
{
    string temp=str;
    int k=0;
    for(int i=temp.length()-1;i>=0;i--)
    {
        str[k]=temp[i];
        k++;
    }
    return str;
}
int main(void){
     cout << " enter a string" ;
     string s;
     getline(cin,s);
     cout<<"reverse is "<<rev_str(s);
}

