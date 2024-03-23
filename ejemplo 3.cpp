#include <iostream>
using namespace std;

main(){
	
	int total=0;
	int notas[total];
	char res;
	int *p_notas;
	p_notas=notas;
	
	do{
		cout<<"Ingrese Nota "<<endl;
		cin>>notas[total];
		total++;
		
		cout<<" Desee agregar otra nota S/N "<<endl;
		cin>>res;
		
	}while(res == 'S'||res == 'S');
	
	cout<<"---------Mostrar Notas----------- "<<endl;
	for(int i=0;i<total;i++)
	{
		
		cout<<*p_notas<<endl;
		p_notas++;
	}
	
	
	
	system("pause");
	
	
	
}
