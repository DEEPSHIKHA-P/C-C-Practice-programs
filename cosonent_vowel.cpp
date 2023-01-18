#include<iostream>
using namespace std;
int main()
{
	char ch;
	cout<<"Enter a character: ";
	cin>>ch;
/*	if((ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')||(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')){
	
	cout<<"\nGiven character is a vowel";}
	else
	{
	cout<<"\nGiven character is a consonent";}  */
	switch(ch)
	{
		case 'a':
		case 'A':
		case 'e':
		case 'E':
		case 'i':
		case 'I':
		case 'o':
		case 'O':
		case 'u':
		case 'U':
			cout<<"\nVowel";
			break;
		default:
			cout<<"\nConsonent";
	}
	return 0;
}
