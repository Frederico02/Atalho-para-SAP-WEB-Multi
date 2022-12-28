//*******************Atalho SAP *******************
//Desenvolvido por Frederico de Jesus Almeida
//Analista de Suporte Junior Multi
//*******************12/12/2022******************

#include <windows.h>
#include <iostream>


using namespace std;



int main(){
	
	ShowWindow(GetConsoleWindow(), SW_HIDE); //prompt de comando
	//system("start chrome.exe -silent -setDefaultBrowser"); TORNAR O GOOGLE PADRAO 
	system("start https://s4prd.sap.aws.grupomulti.com.br/sap/bc/ui5_ui5/ui2/ushell/shells/abap/FioriLaunchpad.html#Shell-ho");

	return 0;
}


