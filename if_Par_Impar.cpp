#include <iostream>
using namespace std;
main(){
	//and (y) &&
	//or (o) ||
	
	
	char lapiz,lapicero,cuaderno;
	cout<<"Trae Lapiz (s/n):";
	cin>>lapiz;
	cout<<"Trae lapicero (s/n):";
	cin>>lapicero;
	cout<<"Trae Cuaderno (s/n):";
	cin>>cuaderno;
	//and = el valor es verdadero si ambas son verdaderas
	//EJEMPLO DE AND: if (lapiz=='s' && lapicero=='s' ){
	
	//Puede traer un lapiz o un lapicero y un cuadderno
	if ((lapiz=='s' || lapicero=='s') && cuaderno =='s'){
			cout<<lapiz<<endl;
		cout<<"Entra"<<endl;
	}else{
			cout<<"No Entra"<<endl;
		}
	
 	
	system("pause");	
}

