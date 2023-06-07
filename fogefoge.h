#ifndef _FOGEFOGE_H_
#define _FOGEFOGE_H_

#define CIMA 'w'
#define BAIXO 's'
#define ESQUERDA 'a'
#define DIREITA 'd' 
#define BOMBA 'b'

int acabou();
int ehDirecao(char direcao);
void explodePilula();
void explodePilula2(int x, int y, int somax, int somay, int qtd);
void fantasmas();
void move(char d);
int praOndeFantasmaVai(int xatual,int yatual,int *xdestino,int *ydestino);

#endif