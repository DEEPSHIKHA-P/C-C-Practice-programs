#include<bits/stdc++.h>
class Permutation {
public:
    int countStringPermutation(int num) {
         long a = 1, e = 1, i = 1, o = 1, u = 1;
		 long mod = pow(10, 9)+7;
        long a1, e1, i1, o1, u1; 
        
        for (int j = 2; j <= num; j++) {
            a1 = (e + i + u) % mod;
            e1 = (a + i) % mod;
            i1 = (e + o) % mod;
            o1 = i;
            u1 = (o + i) % mod;
            a = a1, e = e1, i = i1, o = o1, u = u1;
        }
        return (a + e + i + o + u) % mod;
    }
};

int main(){
	Permutation obj;
	int num;
	std::cout<<"length of string to analyze: ";
	std::cin>>num;
	int output=obj.countStringPermutation(num);
	std::cout<<output;
}
