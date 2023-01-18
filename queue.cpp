#include<iostream>
using namespace std;
int main()
{
	int arr[5],rear=-1,front=-1,ch,item,i;
	while(1)
	{
		cout<<"\nenter choice: ";
		cin>>ch;
		switch(ch){
			case 1:
				//enqueue operation
				if(rear==4)
				cout<<"\noverflow";
				else{
					if(front==-1)
					{
						front=0;
						cout<<"\nenter an element: ";
						cin>>item;
						rear++;
						arr[rear]=item;
					}
				}
				break;
			case 2:
				if(front==-1||front>rear)
				{
					cout<<"\nunderflow";
				}
				else
				{
					cout<<"\nelement deleted from the queue: "<<arr[front];
					front++;
				}
				break;
			case 3:
				for(i=0;i<5;i++)
				cout<<arr[i]<<" ";
				break;
			case 4:
				exit(0);
			default:
				cout<<"\nIncorrect choice";
				break;
		}
	}
	return 0;
}
