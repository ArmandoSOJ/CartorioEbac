#include <stdio.h> //biblioteca de comunicação com o usuário
#include <stdlib.h> // bibliotoca de alocação de espaço em memória
#include <locale.h> // biblioteca de alocações de texto por região
#include <string.h> //biblioteca responsável por cuidar das string

int registro()
{
	char arquivo[40];
	char cpf[40];
	char nome[40];
	char sobrenome[40];
	char cargo[40];
	
	printf("Digite o CPF a ser cadastrado: ");
	scanf("%s",cpf);
	
	strcpy(arquivo, cpf); //Responsável por copiar os valores das strings
	
	FILE *file //Cria o arquivo
	file = fopen(arquivo, "w");
	fprintf(file,cpf); //Salvo o valor da variável
	fclose(file);  //Fecha o arquivo
	
	file = fopen(arquivo, "a");
	fprintf(file, ",");
	fclose(file);
	
	printf("Digite o nome a ser cadastrado");
	scanf("%s" ,nome);
	
	file = fopen(arquivo, "a");
	fprintf(file,nome);
	fclose(file);
	
	file = fopen(arquivo, "a");
	fprintf(file,",");
	fclose(file);
	
	printf("Digite o nome a ser cadastrado: ");
	scanf("%s,sobrenome");
	
	file = fopen (arquivo, "a");
	fprintf(file,sobrenome);
	fclose(file);
	
	file = fopen(arquivo, "a");
	fprintf(file, ",");
	fclose(file);
	
	printf("Digite o cargo a ser cadastrado: ");
	scanf("%s,cargo");
	
	file = fopen(arquivo, "a");
	fprintf(file,cargo);
	fclose(file);
	
	system("pause");

}

int consulta()
{
	printf("Você escolheu consultar os nomes!\n");
	system("pause");
}

int deletar()
{
	printf("Você escolheu deletar nomes!\n");
	system("pause");
}

int main ()
{
    int opcao=0; //Definindo variáveis
	int laco=1;
	
	for(laco=1;laco=1;)
	{
	
	    system("cls");
	
	    setlocale (LC_ALL, "Portuguese"); //Definindo a linguagem
	
    	printf("### Cartório da EBAC ###\n\n"); //Início do menu
    	printf ("Escolha a opção desejada do menu:\n\n");
    	printf("\t1 - Registrar nomes\n");
    	printf("\t2 - Consultar nomes\n");
    	printf("\t3 - Deletar nomes\n\n"); //Fim do menu
    	printf("Opção: ");

      scanf("%d", &opcao); // Armazenando a escolha do usuário
    
      system("cls");
     
      switch(opcao)
     {
     	
		 
		case 1:
		registro();
    	break;
    	
    	case 2:
    	consulta();
		break;
		
		case 3:
		deletar();
		break;
		
		default:
		printf("Essa opção não está disponível!\n");
		system("pause");
		break;
     	
	 }
	 
    }
} 
