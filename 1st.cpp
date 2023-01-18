#include<iostream>
using namespace std;

// maxIndex function
void maxIndex(int steps, int badIndex)
{
	int mIndex = 0;
	for (int i = 1; i <=steps; i++) {

		mIndex += i;
	}

	int cIndex = mIndex, tStep = steps;
	while (1) {
		while (cIndex > 0 && steps > 0) {
			cIndex -= steps;
			if (cIndex == badIndex) {
				cIndex += steps;
			}
			steps--;
		}
		if (cIndex <= 0) {
			cout << mIndex << endl;
			break;
		}
		else {

			steps = tStep;
			cIndex = mIndex - 1;
			mIndex--;
			if (cIndex ==badIndex) {

				cIndex = mIndex - 1;
					mIndex--;
			}
		}
	}
}

int main()
{
	int steps, badIndex;
	cout<<"Steps: ";
	cin>>steps;
	cout<<"badIndex: ";
	cin>>badIndex;
	maxIndex(steps, badIndex);
	return 0;
}

