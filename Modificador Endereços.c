#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h> 
#include <unistd.h>



int main() {

system("clear");
printf("\n\n\n----Modificador de Endereços (Apenas um besterol didático)----\n");
printf("--------------------------------------------------");

printf("\n\nConheça o tamanho em bytes de cada tipo de dado:");
printf("\n\n--- Char: 1");
printf("\n--- Int: 4");
printf("\n--- Float: 4");
printf("\n--- Double: 8");   
    
char response[6];
bool response_aceppted = false;
printf("\n\n\nQual tipo de dado quer utilizar ?(char/int/float/double):");
scanf(" %s" , response);

   
    
     if( strcmp(response, "char") == 0 ){
        response_aceppted = true;

        char val = 'B';
        char *pointer = &val;
         
        system("clear"); 
        printf("\nExemplo de um valor Char: B");

        printf("\n\n\n ======= Endereço desse ponteiro em número INTEIRO: %lu \n", (unsigned long)pointer); // Exibe o endereço inicial

         pointer++;  // Incrementa o ponteiro (aponta para o próximo caractere no array)
         printf("\n-- Endereço modificado com a soma: %lu\n\n", (unsigned long)pointer);

         pointer--;
         pointer--;

         printf("-- Endereço modificado com a subtração: %lu\n\n", (unsigned long)pointer);


         pointer = &val;


      //-----------------------------------------------------
      //Exibição dos endereços em hexadecimal
         printf("\n\n\n ======= Endereço desse ponteiro em número HEXADECIMAL: %p \n", pointer); // Exibe o endereço inicial

         pointer++;  // Incrementa o ponteiro (aponta para o próximo caractere no array)
         printf("\n-- Endereço modificado com a soma: %p\n\n", pointer);

         pointer--;
         pointer--;

         printf("-- Endereço modificado com a subtração: %p\n\n", pointer);

        return 0;
      };








     if( strcmp(response, "int") == 0 ){
         response_aceppted = true;



         int val = 500;  // Array de caracteres
         int *pointer = &val;    // Ponteiro simples apontando para o array
 

         system("clear");  
         printf("\nExemplo de um valor Int: 500");

    
       
         printf("\n\n\n ======= Endereço desse ponteiro em número INTEIRO: %lu \n", (unsigned long)pointer); // Exibe o endereço inicial

         pointer++;  // Incrementa o ponteiro (aponta para o próximo caractere no array)
         printf("\n-- Endereço modificado com a soma: %lu\n\n", (unsigned long)pointer);

         pointer--;
         pointer--;

         printf("-- Endereço modificado com a subtração: %lu\n\n", (unsigned long)pointer);


         pointer = &val;


      //-----------------------------------------------------
      //Exibição dos endereços em hexadecimal
         printf("\n\n\n ======= Endereço desse ponteiro em número HEXADECIMAL: %p \n", pointer); // Exibe o endereço inicial

         pointer++;  // Incrementa o ponteiro (aponta para o próximo caractere no array)
         printf("\n-- Endereço modificado com a soma: %p\n\n", pointer);

         pointer--;
         pointer--;

         printf("-- Endereço modificado com a subtração: %p\n\n", pointer);


        };






     if( strcmp(response, "float") == 0 ){
        response_aceppted = true;

        float val = 3.18f;
        float *pointer = &val;

        system("clear");
        printf("Exemplo de um valor Float: 3,18");

        printf("\n\n\n ======= Endereço desse ponteiro em número INTEIRO: %lu \n", (unsigned long)pointer); // Exibe o endereço inicial

         pointer++;  // Incrementa o ponteiro (aponta para o próximo caractere no array)
         printf("\n-- Endereço modificado com a soma: %lu\n\n", (unsigned long)pointer);

         pointer--;
         pointer--;

         printf("-- Endereço modificado com a subtração: %lu\n\n", (unsigned long)pointer);


         pointer = &val;

      //-----------------------------------------------------
      //Exibição dos endereços em hexadecimal
         printf("\n\n\n ======= Endereço desse ponteiro em número HEXADECIMAL: %p \n", pointer); // Exibe o endereço inicial

         pointer++;  // Incrementa o ponteiro (aponta para o próximo caractere no array)
         printf("\n-- Endereço modificado com a soma: %p\n\n", pointer);

         pointer--;
         pointer--;

         printf("\n-- Endereço modificado com a subtração: %p\n\n", pointer);
    };





     if( strcmp(response, "double") == 0 ){
         response_aceppted = true;

         double val = 3.141592653589793;
         double *pointer = &val;

         system("clear");
         printf("Exemplo de um valor Double: 3.141592653589793");

         printf("\n\n\n ======= Endereço desse ponteiro em número INTEIRO: %lu \n", (unsigned long)pointer); // Exibe o endereço inicial

         pointer++;  // Incrementa o ponteiro (aponta para o próximo caractere no array)
         printf("\n-- Endereço modificado com a soma: %lu\n\n", (unsigned long)pointer);

         pointer--;
         pointer--;

         printf("-- Endereço modificado com a subtração: %lu\n\n", (unsigned long)pointer);


         pointer = &val;

      //-----------------------------------------------------
      //Exibição dos endereços em hexadecimal
         printf("\n\n\n ======= Endereço desse ponteiro em número HEXADECIMAL: %p \n", pointer); // Exibe o endereço inicial

         pointer++;  // Incrementa o ponteiro (aponta para o próximo caractere no array)
         printf("\n-- Endereço modificado com a soma: %p\n\n", pointer);

         pointer--;
         pointer--;

         printf("\n--Endereço modificado com a subtração: %p\n\n", pointer);
         
        
    };






   if(response_aceppted == false){

    printf("\n\nERRO ! Tal resposta não é válida. Tente novamente !\n\n");
   };













   /*
    char val[4] = "abbb";       // Array de caracteres
    char *pointer = val;      // Ponteiro simples apontando para o array

    system("clear");
    printf("\n\n\nEndereço desse ponteiro: %lu \n", (unsigned long)pointer); // Exibe o endereço inicial

    pointer++;  // Incrementa o ponteiro (aponta para o próximo caractere no array)
    printf("Endereço modificado com a soma: %lu\n\n", (unsigned long)pointer);

    return 0;
    */
}








//esta funcionando :D

//O programa modifica o endereço de memória no qual esta inserido o valor
// da variavel val.

    

