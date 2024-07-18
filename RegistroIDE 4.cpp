#include <stdio.h> // Biblioteca de comunicação com o usuario
#include <stdlib.h>  // Biblioteca de Alocação de espaço em memoria
#include <locale.h>  // Biblioteca de alocação de textos por região
#include <string.h> // Biblioteca responsavél por cuidar das string




int registro () // função responsavel por cadastrar os usuarios do sistema

{          
        // Inicio da criação de variaveis - strings
        char arquivo [40];	
		char cpf [40];
		char nome [40];
		char sobrenome [40];
		char cargo [40];
		// Final da criação de variaveis - strings
		
		printf ("Digite o CPF que sera cadastrado: ");  // Coletando informação do usuario
		scanf ("%s", cpf);  // o simbolo de % se refere a string
		
		strcpy (arquivo, cpf);  // Responsavel por copiar os valores das strings


         FILE *file;  // cria o arquivo no pc
         file = fopen(arquivo, "w"); // a letra W é uma função para escrever
         fprintf (file,cpf); // salva o valor da variavel
         fclose (file); // fecha o arquivo
         
         file = fopen (arquivo, "a");  // A função A é uma função para atualizar a info
         fprintf (file, ",");
         fclose (file);
         
         printf ("Digite o nome que sera cadastrado: ");
         scanf ("%s", nome);
         
         file  = fopen (arquivo, "a");
         fprintf (file,nome);
         fclose (file);
         
         file = fopen (arquivo, "a");
         fprintf (file, ",");
         fclose (file);
         
         
        printf ("Digite o sobrenome que sera cadastrado: ");
        scanf ("%s", sobrenome);
        
        file = fopen (arquivo, "a");
        fprintf (file, sobrenome);
        fclose (file);
        
         file = fopen (arquivo, "a");
         fprintf (file, ",");
         fclose (file);
		 
		 
		 printf ("Digite o cargo que sera cadastrado: ");
         scanf ("%s", cargo);      
		 
		 file = fopen (arquivo, "a");
        fprintf (file, cargo);
        fclose (file); 
		
		 
         system ("pause");
         
         
}


int consulta ()

{
	setlocale (LC_ALL, "Portuguese");
	
	char cpf [40];
	char conteudo [200];
	
	printf ("digite o CPF que sera consultado:");
	scanf ("%s", cpf);
	
	FILE *file;
	file = fopen(cpf, "r");
	
	if (file == NULL)	
	{
		printf ("não foi possivel encontrar. \n");
	}
		
	while (fgets (conteudo, 200, file ) !=NULL)
	
	{
		printf ("\n Estas são as informações do usuario:");
		printf ( "%s", conteudo);
		printf ("\n \n");
		
		
	}
	
	  system ("pause");
	
}



int deletar ()

{
	
		char cpf [40];
		
		printf ("Digite o CPF que sera eliminado: ");
		scanf ("%s",cpf);
		
		remove (cpf);  // comando para eliminar uma informação
		
		FILE *file;
		file = fopen(cpf, "r");
		
		if (file == NULL)
		{
			printf ("Usuario não encontrado! \n");
			system ("pause");
		}
		
	
}



int main () 

   {

	
	int opcao=0;   // definindo as variaveis
	
	int laco=1; 
	
	for (laco=1;laco=1;)
	
	{
		
		system ("cls") ;  // responsavel por limpar a tela

	
	

	
	setlocale (LC_ALL, "Portuguese");  // definindo a linguagem
	 
	printf (" ### Registro de usuarios da IDE ### \n\n");  // Inicio do menu
	printf (" escolha a opção desejada \n \n" );
	printf ("\t1 - Registrar nomes\n") ;
	printf ("\t2 - Consultar os nomes\n") ;
	printf ("\t3 - deletar os nomes \n \n") ;  // Final do Menu
	
	printf ("Opção:") ;
	
    scanf("%d", &opcao);  // Armazenando a escolha do usuario

    system ("cls") ;
    
    switch(opcao) // Inicio da seleção do menu do programa
    
    {
    	
         	case 1:
            registro(); // chamada de funções
   	        break;
   	
   	
   	        case 2: 
   	        consulta();
         	break;
         	
         	
         	case 3:
            deletar();
	        break;
	        
	      
         		
            default:
            printf ("Opção Indisponivel \n") ;
		    system ("pause") ;
		    break;  // fim da seleção
         	
   	    
   	    
   	
   	
    	
    	
	}
    
   
	
	
	
		
		

		
}
	
	}	


