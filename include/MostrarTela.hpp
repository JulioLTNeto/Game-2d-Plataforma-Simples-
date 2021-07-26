#pragma once
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <iostream>

#include "Entidade.hpp"
#include "Personagem.hpp"

class MostrarTela{
public:
	MostrarTela();
	MostrarTela(const char* p_tittle, int p_w, int p_h);
	void cleanUp();
	SDL_Texture* loadTexture(const char* p_filePath);
	void clear();
	void render(Entidade& p_entity);
	void render(Personagem& p_person);
	void display();

private:
	SDL_Window* window;
	SDL_Renderer* renderer;
};