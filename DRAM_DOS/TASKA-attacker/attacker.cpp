#include<iostream>
#define DAT 1<<24
using namespace std;
static char data[DAT];     
int main(){
	register int i;
	register int j;
	register char k;
	for(i=0;i<(DAT);i=i+64){
		data[i]=0;
	}
	for(j=0;j<5000;j++)
	for(i=0;i<(DAT);i=i+64){
		data[i]++;
	}
	return 0;
}
