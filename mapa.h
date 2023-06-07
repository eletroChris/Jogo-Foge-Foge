#ifndef _MAPA_H_
#define _MAPA_H_

#define HEROI '@'
#define VAZIO '.'
#define PAREDE_VERTICAL '|'
#define PAREDE_HORIZONTAL '-'
#define FANTASMA 'F'
#define PILULA 'P'

struct mapa{
    char **matriz;
    int linhas;
    int colunas;
};

typedef struct mapa MAPA;

struct posicao
{
    int x;
    int y;
};

typedef struct posicao POSICAO;


void alocaMapa(MAPA *m);
void andaNoMapa(MAPA*m, int xorigem, int yorigem, int xdestino, int ydestino);
void copiaMapa(MAPA* destino, MAPA* origem);
int ehParede(MAPA * m,int x, int y);
int ehPersonagem(MAPA *m,char personagem,int x, int y);
int ehValida(MAPA* m, int x,int y);
int ehVazia(MAPA*m,int x , int y);
int encontraMapa(MAPA *m, POSICAO *p, char c);
void liberaMapa(MAPA *m);
void leMapa(MAPA *m);
int podeAndar(MAPA *m,char personagem,int x, int y);

#endif