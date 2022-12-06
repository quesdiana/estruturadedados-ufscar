#include <stdio.h>


int main (){

int num_emb=0;
scanf("%d", &num_emb);

int tam_emb[num_emb], tam_emb2[num_emb];

for(int i=0; i<num_emb; i++){

    scanf("%d", &tam_emb[i]);

}

for(int i=0; i<num_emb; i++){

   tam_emb2[i]=tam_emb[i];

}



int num_gar=0;
scanf("%d", &num_gar);

int tam_gar[num_gar], tam_gar2[num_gar];

for(int i=0; i<num_gar; i++){

    scanf("%d", &tam_gar[i]);

}

for(int i=0; i<num_gar; i++){

    tam_gar2[i]=tam_gar[i];

}




int mantem1=0, mantem2=0, aux=0;
	

for(int i=0; i < num_gar; i++){

    int garrafa_atual=tam_gar2[i];


    int embalagem_sugerida=-1;

	

    if(embalagem_sugerida==-1){
        printf("descartar\n", garrafa_atual);
    } else {
        printf("%d\n", embalagem_sugerida);
    }

}

    return(0);
}