#include <stdio.h>

int main (){

int num_emb=0;
scanf("%d", &num_emb);

int tam_emb[num_emb];

for(int i=0; i<num_emb; i++){

    scanf("%d", &tam_emb[i]);

}



printf("\n");

int num_gar=0;
scanf("%d", &num_gar);

int tam_gar[num_gar];

for(int i=0; i<num_gar; i++){

    scanf("%d", &tam_gar[i]);

}



int mantem1=0, mantem2=0, aux=0;

while (mantem1==0){

   mantem1=1;

for(int i=0; i < num_gar; i++){

if(tam_gar[i]>tam_gar[i+1]){
   mantem1=0;
    aux=tam_gar[i+1];
    tam_gar[i+1]=tam_gar[i];
    tam_gar[i]=aux;

    }
  }

}

while (mantem2==0){

   mantem2=1;

for(int i=0; i < num_emb; i++){

if(tam_emb[i]>tam_emb[i+1]){
   mantem2=0;
    aux=tam_emb[i+1];
    tam_emb[i+1]=tam_emb[i];
    tam_emb[i]=aux;

    }
  }

}

printf("\n");

for(int i=0; i<num_gar; i++){

    printf("%d ", tam_gar[i]);

}

printf("\n");

for(int i=0; i<num_emb; i++){

    printf("%d ", tam_emb[i]);

}

printf("\n");

for(int i=0; i < num_gar; i++){

    int garrafa_atual=tam_gar[i];

    printf("analisando garrafas de tamanho %d\n", garrafa_atual);

    int embalagem_sugerida=-1;

    for(int j=0; j < num_emb; j++){

        if(garrafa_atual<=tam_emb[j]){
            embalagem_sugerida=tam_emb[j];
            break;
        }

    }

    if(embalagem_sugerida==-1){
        printf("%d descartar\n", garrafa_atual);
    } else {
        printf("%d %d\n", garrafa_atual, embalagem_sugerida);
    }

}




    return(0);
}