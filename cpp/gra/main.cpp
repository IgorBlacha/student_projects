#include <iostream>

using namespace std;

int main(){
	cout<<"witaj swiecie"<<endl;
	char t[2][2];
	for(char x=0;x<3;x++){
		for(char y=0;y<3;y++){
			t[x][y]='0';
			cout<<t[x][y];
		}
		cout<<endl;
	}
	return 0;
}
