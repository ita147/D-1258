#include <iostream>
#include <math.h>
using namespace std;
double hasil;

void pangkat(double a,double b){
	hasil=pow(a,b);
	cout<<"hasil "<<a<<"^"<<b<<"="<<hasil;
}

void akar(double a){
	hasil=sqrt(a);
	cout<<"hasil "<<"V "<<a<<"="<<hasil;
}

void persen(double a){
	hasil=a/(float)100;
	cout<<"hasil "<<a<<"%"<<"="<<hasil;	
}

main(){
	int pilih;double a; double b;
	cout<<"masukkan angka1 :";cin>>a;
	cout<<"masukkan angka2 :";cin>>b;
	cout<<"Perhitungan :";
	cout<<"\n1. Pangkat";
	cout<<"\n2. Akar";
	cout<<"\n3. Persen";
	cout<<"\npilih";cin>>pilih;
	switch(pilih){
		case 1:
			pangkat(a,b);
			break;
		case 2:
			akar(a);
			break;
		case 3:
			persen(a);
			break;
	}	
}
