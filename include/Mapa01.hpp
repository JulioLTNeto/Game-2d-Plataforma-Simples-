#pragma once
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <vector>

#include "Entidade.hpp"
#include "Math.hpp"
#include "MostrarTela.hpp"

class Mapa01{
public:
	Mapa01();

	void adcionarVetor(Entidade e);
	std::vector<Entidade>* getEntidades();

	void gerarMapa();
	int mostrarTela();

private:
	std::vector<Entidade> v;
	MostrarTela window;
};