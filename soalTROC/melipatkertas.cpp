#include <iostream>
using namespace std;

int main(){
	float l, w, a;
	cin>>l>>w>>a;
	float luas = l * w;
	while(luas >= a){
		if(luas == a){
			cout<<"YA";
			return 0;
		} else {
			luas /= 2;
		}
	}
	cout<<"TIDAK";
}

//by Viriya6
