#include <iostream>
#include <math.h>
using namespace std;
double hasil;

void pangkat(double a,double b){
	hasil=pow(a,b);
	cout<<"hasil "<<a<<"^"<<b<<"="<<hasil;
}

main(){
	int pilih;double a; double b;
	cout<<"masukkan angka1 :";cin>>a;
	cout<<"masukkan angka2 :";cin>>b;
			pangkat(a,b);
}
