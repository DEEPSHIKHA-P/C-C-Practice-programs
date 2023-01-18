#include<bits/stdc++.h>
using namespace std;
class Palindrome {
public:
    int countPalindrome(string S) {
        int len = S.length(), output = 0;
        for (int i = 0; i < len; i++) {
            int j = i - 1, k = i;
            while (k < len - 1 && S[k] == S[k+1])
			 k++;
            output += (k - j) * (k - j + 1) / 2, i = k++;
            while (~j && k < len && S[k++] == S[j--])
			 output++;
        }
        return output;
    }
};

int main(){
	Palindrome obj;
	cout<<"Enter string: ";
	string str;
	getline(cin,str);
	int output=obj.countPalindrome(str);
	cout<<output;
}

