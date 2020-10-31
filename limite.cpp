//coded by Santa 
// all rights reserved © 2020
// GitHub
#include <iostream>
#include <conio.h>
#include <windows.h>
using namespace std;
long double n;
int s;

int main()
{   
	do{
	cout<<"Seleccionar: "<<endl;
	cout<<"1.- Limite por Izquierda a -inf de 5000ms"<<endl;
	cout<<"2.- Limite por Derecha a +inf de 5000ms"<<endl;
	cout<<""<<endl;
	cout<<"ingresa tu respuesta ";
	cin>>s;
	}while(s!= 1 & s!=2);
	n=5000;
	
	if (s==1){
	for (int i=0; i < 10000 ; i++)
	{	
		Sleep(n);
		cout<<"Sape "<<n<<endl;
		n=n/2;
	}
	}
	
	if (s==2){
	for (int i=0; i < 10000 ; i++)
	{	
		Sleep(n);
		cout<<"Sape "<<n<<endl;
		n=n/0.5;
	}
	}
	getch();
	return 0;
}
