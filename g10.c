
/* Integrantes do grupo: 
Antonio Euzebio Mariano da Silva
Cristiano Ferreira da Silva
Jaqueline Lima Mariano da Silva 
Natália Maria Silva
Everton Caique da Silva */

#include <stdio.h>
int main() {

printf("========[ VOTAÇÃO PARA ELEGER O(A) SUPERVISOR(A) DA TURMA ]========\n\n\nCANDIDATOS(AS)\n\n");

  printf("Gabrielle.....Nº 123\n");
  printf("Lara..........Nº 456\n");
  printf("Caio..........Nº 789\n");
  printf("Kalebe........Nº 167\n\n");
    


int votosGabrielle =0, votosLara=0, votosCaio=0, votosKalebe=+ 0, brancos=0, nulos=0;

int voto1;
printf("DIGITE O NÚMERO DO(A) CANDIDATO(A) PARA VOTAR\n");
scanf("%d", &voto1);
printf("VOTO SALVO!\n\n");

/* acho que enumerando o voto de cada pessoa dá pra separar melhor sem os métodos restritos */

  
if(voto1 == 123) {
    votosGabrielle =1; 
} 

if(voto1 == 456) {
   votosLara = +1;
}

if(voto1 == 789) {
    votosCaio = +1;
}

if(voto1 == 167) {
   votosKalebe = +1; 
}

if(voto1 == 0) {
    brancos = +1;
}

  
if(voto1 != 0 && voto1 != 123 && voto1 != 456 && voto1 != 789 && voto1 != 167)  {
  nulos = +1;
  }  


  //Esse método limpa o console. Acho que é interessante
  //porque limpa a tela para a próxima pessoa votar (Cristiano)
  system("@cls||clear");
  //ta aparecendo algum erro no meu compilador no (systeem)
  //porém o código tá funcionando(Cristiano)

  
//a lista com o nome dos candidatos precisa ser recarregada
//depois de cada voto, infelizmente o códigio vai ficar
//maior ainda 
printf("========[ VOTAÇÃO PARA ELEGER O(A) SUPERVISOR(A) DA TURMA ]========\n\n\nCANDIDATOS(AS)\n\n");

  printf("Gabrielle.....Nº 123\n");
  printf("Lara..........Nº 456\n");
  printf("Caio..........Nº 789\n");
  printf("Kalebe........Nº 167\n\n");  

  
int voto2;
printf("DIGITE O NÚMERO DO(A) CANDIDATO(A) PARA VOTAR\n");
scanf("%d", &voto2);
printf("VOTO SALVO!\n\n");



if(voto2 == 123) {
    votosGabrielle = votosGabrielle + 1; 
} 

if(voto2 == 456) {
   votosLara = votosLara + 1;
}

if(voto2 == 789) {
    votosCaio = votosCaio + 1;
}

if(voto2 == 167) {
   votosKalebe = votosKalebe + 1; 
}

if(voto2 == 0) {
    brancos = brancos + 1;
}

if(voto2 != 0 && voto2 != 123 && voto2 != 456 && voto2 != 789 && voto2 != 167)  {
  nulos = nulos +1;
  }  
system("@cls||clear");


  
printf("========[ VOTAÇÃO PARA ELEGER O(A) SUPERVISOR(A) DA TURMA ]========\n\n\nCANDIDATOS(AS)\n\n");

  printf("Gabrielle.....Nº 123\n");
  printf("Lara..........Nº 456\n");
  printf("Caio..........Nº 789\n");
  printf("Kalebe........Nº 167\n\n");

  
int voto3;
printf("DIGITE O NÚMERO DO(A) CANDIDATO(A) PARA VOTAR\n");
scanf("%d", &voto3);
printf("VOTO SALVO!\n\n");



if(voto3 == 123) {
    votosGabrielle = votosGabrielle + 1; 
} 

if(voto3 == 456) {
   votosLara = votosLara + 1;
}

if(voto3 == 789) {
    votosCaio = votosCaio + 1;
}

if(voto3 == 167) {
   votosKalebe = votosKalebe + 1; 
}

if(voto3 == 0) {
    brancos = brancos + 1;
} 

if(voto3 != 0 && voto3 != 123 && voto3 != 456 && voto3 != 789 && voto3 != 167)  {
  nulos = nulos +1;
  }  
system("@cls||clear");


printf("========[ VOTAÇÃO PARA ELEGER O(A) SUPERVISOR(A) DA TURMA ]========\n\n\nCANDIDATOS(AS)\n\n");

  printf("Gabrielle.....Nº 123\n");
  printf("Lara..........Nº 456\n");
  printf("Caio..........Nº 789\n");
  printf("Kalebe........Nº 167\n\n");

  
int voto4;
printf("DIGITE O NÚMERO DO(A) CANDIDATO(A) PARA VOTAR\n");
scanf("%d", &voto4);
printf("VOTO SALVO!\n\n");



if(voto4 == 123) {
    votosGabrielle = votosGabrielle + 1; 
} 

if(voto4 == 456) {
   votosLara = votosLara + 1;
}

if(voto4 == 789) {
    votosCaio = votosCaio + 1;
}

if(voto4 == 167) {
   votosKalebe = votosKalebe + 1; 
}

if(voto4 == 0) {
    brancos = brancos + 1;
}

if(voto4 != 0 && voto4 != 123 && voto4 != 456 && voto4 != 789 && voto4 != 167)  {
  nulos = nulos +1;
  }  
system("@cls||clear");


printf("========[ VOTAÇÃO PARA ELEGER O(A) SUPERVISOR(A) DA TURMA ]========\n\n\nCANDIDATOS(AS)\n\n");

  printf("Gabrielle.....Nº 123\n");
  printf("Lara..........Nº 456\n");
  printf("Caio..........Nº 789\n");
  printf("Kalebe........Nº 167\n\n");
  
  
int voto5;
printf("DIGITE O NÚMERO DO(A) CANDIDATO(A) PARA VOTAR\n");
scanf("%d", &voto5);
printf("VOTO SALVO!\n\n");



if(voto5 == 123) {
    votosGabrielle = votosGabrielle + 1; 
} 

if(voto5 == 456) {
   votosLara = votosLara + 1;
}

if(voto5 == 789) {
    votosCaio = votosCaio + 1;
}

if(voto5 == 167) {
   votosKalebe = votosKalebe + 1; 
}

if(voto5 == 0) {
    brancos = brancos + 1;
}

if(voto5 != 0 && voto5 != 123 && voto5 != 456 && voto5 != 789 && voto5 != 167)  {
  nulos = nulos +1;
  }   

  system("@cls||clear");

printf("\n\n====[  RESULTADO  ]====\n\n");
printf("Votos para Gabrielle: %d\n", votosGabrielle);
printf("Votos para Lara: %d\n", votosLara);
printf("Votos para Caio: %d\n", votosCaio);
printf("Votos para Kalebe: %d\n", votosKalebe);
printf("Votos Brancos: %d\n", brancos);
printf("Votos nulos: %d\n\n", nulos);





  
//teste para o empate
if(votosGabrielle >=1 && votosGabrielle == votosLara || votosGabrielle == votosCaio || votosGabrielle == votosKalebe) {
    printf("Empate\n");
  } 

if(votosLara >=1 && votosLara == votosCaio || votosLara == votosKalebe)  {
  printf("Empate 2\n");
}

/*if(votosCaio >=1 && votosCaio == votosKalebe) {
  printf("Empate\n\n\n");
} */

  //dessa forma o empate funcionou, porém as vezes repete a mensagem no console


if(votosGabrielle > votosLara && votosGabrielle > votosCaio && votosGabrielle > votosKalebe) {
  printf("Gabrielle foi eleita, Total de votos: %d", votosGabrielle) ;
}


  
return 0;
} 

