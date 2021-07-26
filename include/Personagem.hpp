#pragma once
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <vector>

#include "Entidade.hpp"
class Personagem : public Entidade{
public:
	Personagem(Vector2f p_pos, SDL_Texture* p_tex, float p_w, float p_h, int p_camada, bool p_tangivel, int p_vida, float p_velocidade);
	void moverPersonagem(SDL_Event evento, std::vector<Entidade>* entidades);
	int getVida();
	void setVida(int v);

private:
	void puloPersonagem();
	bool colisao(float x1, float x2, float y1, float y2, float w1, float w2, float h1, float h2);
	bool colisaoLeft(float x1, float x2, float y1, float y2, float w1, float w2, float h1, float h2);
	bool colisaoRight(float x1, float x2, float y1, float y2, float w1, float w2, float h1, float h2);

	int vida;
	float velocidade;
	int currentTime;
	int lastTime;

	int lastTimePulo;

	bool atingiuBordaLeft;
	bool atingiuBordaRight;
	int i;

	float alturaPulo;
	bool emPulo;
	bool temAlgo;
	float aceleracao;
	int tempoQueda;
	int quantidadePulo;

	int tempoQ;

	bool podeEntrar;
	int tempo;
	float alturaInicial;
	float velocidadeVerticalInicial;
	float ultimaAltura;

	float velocidadeBackup;

	bool colisaoL;
	bool colisaoR;

	unsigned int tempoDecorrido;
	bool caiu;

	bool caiuNaColisao;
};