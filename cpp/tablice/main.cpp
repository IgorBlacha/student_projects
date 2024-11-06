#include <iostream>

using namespace std;

int main(){
	cout<<"witaj swiecie"<<endl;
int t[2];
t[0]=22;
t[1]=38;
for(int i=0;i<2;i++){
	cout <<t[i]<<endl;
}

int tt[4][4];
tt[2][2]=16;
tt[0][0]=5;
for(int y=0; y<4;y++){
for(int x=0; x<4;x++){
	cout<<tt[y][x]<<endl;
}
}


	return 0;
}


