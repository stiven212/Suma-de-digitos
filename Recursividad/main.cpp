#include <iostream>

using namespace std;

int sumd(int a);

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main( ) {
	
	int a;
	
	
	cout << " Ingrese numero: ";	
	cin >> a;
	
	cout << " La suma de sus digitos es igual a: " << sumd(a) << endl;
	
	
	
	
	
	
	return 0;
}

	int sumd(int a) {
		
		int s=0;
		
		while(a>0){
			s= s+ a%10;
			a= a/10;
			
		}
		
		return s;
		
		
	}






