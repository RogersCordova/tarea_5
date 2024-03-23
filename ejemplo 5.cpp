#include <iostream>
using namespace std;

main(){
	
	int fila= 0,columna= 0,**p_notas;
	cout<<" Ingrese la cantidad de estudiantes "<<endl;
	cin>>fila;
	cout<<" Ingrese la cantidad de notas "<<endl;
	cin>>columna;
	p_notas = new int *[fila];
	 for(int i=0;i<fila;i++)
	 	{
			p_notas[i] = new int[columna];
	 		
		 }
	for(int i=0;i<fila;i++){
		 for(int ii=0;ii<columna;ii++)
		{
			cout<<*(*(p_notas+i)+ii)>>endl;
			
			
		}
	
		cout<<"________________________________"<<endl;
	
	}

	system("pause");
	
	
	
}
