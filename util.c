#include <stdio.h>
#include <stdlib.h>

void gethostname(){
	char ip;
	printf("Informe o IP do host:");
}
void getip(){
	char ip;
	printf("Informe o Hostname:");
}
void info(){
	char ip;
	printf("Informe o IP do host:");
}
void ipconfig(){
	char ip;
	printf("Informe o IP do host:");
}
void reboot(){
	char ip;
	printf("Informe o IP do host:");
}


int main() {

	int control = 6;
	while(control!=0){
		int op;  // variável que armazena a opção escolhida
		printf("==========================================\n");
		printf("Escolha a opcao desejada:\n");
		printf("1- Get Hostname\n");
		printf("2- Get IP Address\n");
		printf("3- System Info\n");
		printf("4- IP config Release / Renew\n");
		printf("5- Reboot Computer\n");
		printf("0- Sair\n");
		printf("==========================================\n");
	
		scanf("%i", &op);
	
		switch(op){
			case 1 :
				gethostname();
			break;
			case 2:
				getip();
			break;
			case 3:
				info();
			break;
			case 4:
				ipconfig();
			break;
			case 5:
				reboot();
			break;
			case 0:
				control = 0;
			break;
		}
	}
}