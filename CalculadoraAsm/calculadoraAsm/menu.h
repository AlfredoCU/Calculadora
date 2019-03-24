#pragma once
#include "stdafx.h"
#include "operaciones.h"

class Menu {
	private:
		double n3;
		int n1, n2;
		void MenuPrincipal();
		void IngresarValores();
		void IngresarValor();
		void IngresarValorTri();
		void Suma();
		void Resta();
		void Multiplicacion();
		void Division();
		void Modulo();
		void Potencia();
		void Raiz();
		void Factorial();
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