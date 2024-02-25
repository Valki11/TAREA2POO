# include <iostream>
using namespace std;
main(){
	
int num1=0,num2=0,num3=0,promedio=0;
cout<<"Ingrese Nota 1 porfavor :  ";
cin>>num1;
cout<<"Ingrese Nota 2 porfavor :  ";
cin>>num2;
cout<<"Ingrese Nota 3 porfavor :  ";
cin>>num3;
promedio= (num1+num2+num3)/3;
string mensaje="";
mensaje=promedio>=61 ? "se encuentra aprobado" : "se encuentra reprobado ";
if(promedio>=0 && promedio<61){
	cout<<"mala nota :(  ";
	}
if(promedio>=61 && promedio<81){
	cout<<"buena nota :) ";	
	}
	if(promedio>=81){
	cout<<"buena nota :) ";	
	}
	
	bb

system("pause");

}
