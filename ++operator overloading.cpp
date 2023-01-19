#include<iostream>
using namespace std;
class Time
{
	int hours;                      // 0 to 23
	int minutes;                    // 0 to 59
	public:
		//required constructors
		Time()
		{
			hours=0;
			minutes=0;
		}
		Time(int h,int m)
		{
			hours=h;
			minutes=m;
		}
		// method of display time
		void DisplayTime()
		{
			cout<<"H: "<<hours<<"  M: "<<minutes<<endl;
		}
		// Overloaded prefix ++ operator
		Time operator++()
		{
			++minutes;
			if(minutes>=60)
			{
				++hours;
				minutes=minutes-60;
			}
			return Time(hours,minutes);
		}
		// Overloaded postfix ++ operator
		Time operator++(int)
		{
			// save the original value
			Time T(hours,minutes);
			++minutes;
			if(minutes>=60)
			{
				++hours;
				minutes=minutes-60;
			}
			return T;
		 } 
};

int main()
{
	Time T1(11,59),T2(10,40);
	++T1;
	T1.DisplayTime();
	++T1;
	T1.DisplayTime();
	
	T2++;
	T2.DisplayTime();
	T2++;
	T2.DisplayTime();
	return 0;
}
