#pragma once
#include "stdafx.h"
#include "operaciones.h"

class Menu {
	private:
		int n1, n2;
		void MenuPrincipal();
		void IngresarValores();
		void IngresarValor();
		void Suma();
		void Resta();
		void Multiplicacion();
		void Division();
		void Potencia();
		void Raiz();
		void Seno();
		void Coseno();
		void Tangente();
		void EnterOpcionInvalida();
		void EnterContinuar();
		void EnterSarlir();
	public:
		Operaciones p = Operaciones();
		Menu();
};