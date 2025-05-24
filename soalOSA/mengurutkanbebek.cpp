#include <iostream>
using namespace std;

int main() {
        int A, B, C;
        int change = 0;
        cin>>A>>B>>C;

        while(A > B || B > C){
                if(A > B){
			swap(A, B); 
			change++;
		}
                if(B > C){ 
			swap(B, C); 
			change++; 
		}

        }

        if(A < B && B < C){
                cout<<change;
        } else {
                cout<<"-1";
	}

	return 0;
}
