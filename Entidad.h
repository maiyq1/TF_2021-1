#pragma once
#include "Dependencias.h"

class Entidad
{
protected:
	int x, y;
	int dx, dy;
	int ancho, alto;
public:
	Entidad()
	{
		x = y = 0;
		dx = dy = 0;
		ancho = alto = 0;
	}
	Rectangle Area()
	{
		return Rectangle(x, y, ancho, alto);
	}
	Rectangle NextArea()
	{
		return Rectangle(x + dx, y + dy, ancho, alto);
	}
	virtual void Mover(Graphics^ g)
	{
		x += dx;
		y += dy;
	}
	virtual void Mostrar(Graphics^ g)
	{
		g->FillRectangle(Brushes::Aqua, Area());
	}
};