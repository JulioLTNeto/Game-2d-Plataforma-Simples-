#pragma once
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <Math.hpp>

class Entidade{

public:
	Entidade(Vector2f p_pos, SDL_Texture* p_tex, float p_w, float p_h, int p_camada, int p_tangivel);
	Vector2f& getPos(){
		return pos;
	}	
	void setPos(Vector2f p);

	void setX(float x);

	void setY(float y);
	int getCamada();
	int eTangivel();

	SDL_Texture* getTex();
	SDL_Rect getCurrentFrame();

protected:

	Vector2f pos;

	float x;
	float y;
	SDL_Rect currentFrame;
	SDL_Texture* tex;
	int camada;
	int tangivel;
};