#include <iostream>
#include <math.h>
using namespace std;
double hasil;
void akar(double a){
	hasil=sqrt(a);
	cout<<"hasil "<<"V "<<a<<"="<<hasil;
}
main(){
	int pilih;double a; double b;
	cout<<"masukkan angka1 :";cin>>a;
	cout<<"masukkan angka2 :";cin>>b;
	akar(a);
}
