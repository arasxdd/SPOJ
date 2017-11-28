#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int n, dz=0, j=0, silnia=1;
int main(int argc, char** argv) {
	
	cin >> n;
	cout << endl;
	
	switch (n){
		case 0:
		case 1:
		case 2:
			j=n;
		break;
		case 3: 
			j=6;
		break;
		case 4:
			dz=2;j=n;
		break;
		case 5:
		case 6:
			dz=2;
		break;
		case 7:
			dz=4;
		break;
		case 8:
			dz=2;
		break;
		case 9: 
			dz=8;
		break;
		default:
			j=0;
			dz=0;
	}
	cout <<endl<< dz << " " << j<<endl;
	return 0;
}
