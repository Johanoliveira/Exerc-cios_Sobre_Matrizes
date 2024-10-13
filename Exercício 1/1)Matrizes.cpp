#include <iostream>
#include <locale.h>

using namespace std;

int Num[10][10], Linha, Coluna, Media;

int main () {
	setlocale (LC_ALL,"Portuguese");
	
	for(Linha=0; Linha<10; Linha++){
		for(Coluna=0; Coluna<10; Coluna++){
			
			cout << " Digite o número da Linha " << Linha+1 << " e da coluna " << Coluna+1 << ": ";
			cin >> Num[Linha][Coluna];
			
			if(Linha == Coluna){
				Media = Num[Linha][Coluna] + Media;
			}
			system("cls");
		}
	}
	
	Media = Media/10;
	
	cout << " A média dos números na diagonal é " << Media;
	
	return 0;
}
