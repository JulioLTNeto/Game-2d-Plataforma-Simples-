#pragma once
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <vector>

#include "Entidade.hpp"
#include "Math.hpp"
#include "MostrarTela.hpp"

class Mapa02{
public:
	Mapa02();

	void adcionarVetor(Entidade e);
	std::vector<Entidade>* getEntidades();

	void gerarMapa(MostrarTela window);

private:
	std::vector<Entidade> v;
};