#include <iostream>
using namespace std;
int main(){
	int table[] = {10, 20, 30, 40, 50};
	int *ptr;
	for(int i=0;i<5;i++){
		ptr = &table[i];
		cout<<*ptr<<endl;
	}
}
