#include <iostream>
using namespace std;
void squareByPtr ( int *numPtr ){
	*numPtr = *numPtr * *numPtr;
}
void cubeByPtr (int *numPtr){
	*numPtr = *numPtr * *numPtr * *numPtr;
}

int main(){
	int opc=1,x;
	while(opc!=0){
		cout<<"Menu: "<<endl;
		cout<<"1) Cuadrado de un numero"<<endl;
		cout<<"2) Cubo de un numero"<<endl;
		cout<<"0) Cerrar programa"<<endl;
		cin>>opc;
		if(opc==1){
			cout<<"ingrese un numero: ";
			cin>>x;
			squareByPtr(&x);
			cout<<x<<endl;
		}
		if(opc==2){
			cout<<"ingrese un numero: ";
			cin>>x;
			cubeByPtr (&x);
			cout<<x<<endl;
		}
	}

}
