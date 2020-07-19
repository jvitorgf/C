#include <stdio.h>
#include <stdlib.h>


typedef struct Personagems {
   int vida;	
} personagem;  


personagem ataque(personagem, personagem);

int main(){
	personagem per,con;
	int n = 0;
	per.vida = 100;
	con.vida = 100;

	printf("Digite 1 para atacar\n");
	scanf("%d",&n);

	switch(n){
		case 1:
			con = ataque(per,con);
			break;
		default:
			printf("Inválido");
			return 0;
	}

	printf("Sua vida = %d\n",per.vida);
	printf("Vida do oponente =  %d\n",con.vida);
	return 0;
}



personagem ataque (personagem per,personagem con){
	int n = 0;
	n = rand() % 10;

	if(n == 5){
		con.vida = con.vida - 30;	
	}else{
		con.vida = con.vida - 10;
	}
	

	return con;
}
