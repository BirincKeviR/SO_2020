#include "utils.h"

int main(int argc, char** argv){
	
	if (access(PIPE_SERVER, F_OK) != 0){
		printf("ERRO - NAO FOI POSSIVEL ENCONTRAR O ARBITO");
		exit(1);
	}


	cli jogador;
	printf("Introduza o seu nome:");
	//scanf("%49[^\n]", jogador.nome);
	
	int fs_in,fs_out;
	jogador.pid=123;
	jogador.pontos=13;
	fs_out= open(PIPE_SERVER,O_WRONLY);
	if(fs_out==-1)
	printf("pipe nao encontrado\n");
	printf("enviar\n");
	char nome[50]="Pedro";
	write(fs_out,nome,sizeof(char)*50);
	
	
	

}