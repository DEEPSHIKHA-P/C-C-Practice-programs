#include<iostream>
using namespace std;
int main()
{
	int arr[5],i,top=-1,a,ch;
	while(1){
		cout<<"\nenter choice: ";
		cin>>ch;
	switch(ch){
    case 1:
    	if(top==4)
	    cout<<"\nOverflow";
	    else{
	    cout<<"\nEnter element: ";
	    cin>>a;
	    top++;
	    arr[top]=a;
	    cout<<arr[top]<<" ";
        }
        break;
    case 2:
    	if(top==-1)
	    {
		cout<<"\nUnderflow";
     	}
	    else
	    {
		cout<<"\npopped element: "<<arr[top];
		top--;
	    }
	    break;
	case 3:
		for(i=0;i<5;i++)
		cout<<arr[i]<<" ";
	case 4:
		exit(0);
	default:
		cout<<"\nincorrect choice";
		break;
	}
}

return 0;	
}

 
