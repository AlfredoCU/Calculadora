#include "stdafx.h"
#include "menu.h"

Menu::Menu() {
	MenuPrincipal();
}

void Menu::MenuPrincipal() {
	char opc;
	setlocale(LC_ALL, "spanish");
	SetConsoleTitle(L"Calculadora en ASM");
	do {
		system("cls");
		std::cout << "\t\t\t*******Calculadora en ASM*******\n\n";
		std::cout << " A) Suma\n";
		std::cout << " B) Resta.\n";
		std::cout << " C) Multiplicación.\n";
		std::cout << " D) División.\n";
		std::cout << " E) Potencia.\n";
		std::cout << " F) Raíz.\n";
		std::cout << " G) Seno.\n";
		std::cout << " H) Coseno.\n";
		std::cout << " I) Tangente.\n";
		std::cout << " J) Salir.\n\n";
		std::cout << " -La opción es: ";
		std::cin >> opc;
		opc = toupper(opc);
		switch (opc) {
		case 'A':
			Suma();
			break;
		case 'B':
			Resta();
			break;
		case 'C':
			Multiplicacion();
			break;
		case 'D':
			Division();
			break;
		case 'E':
			Potencia();
			break;
		case 'F':
			Raiz();
			break;
		case 'G':
			Seno();
			break;
		case 'H':
			Coseno();
			break;
		case 'I':
			Tangente();
			break;
		case 'J':
			EnterSarlir();
			break;
		default:
			EnterOpcionInvalida();
			break;
		}
	} while (opc != 'J');
}

void Menu::IngresarValores() {
	std::cout << " -Ingrese el primer número: ";
	std::cin >> n1;
	std::cout << " -Ingrese el segundo número: ";
	std::cin >> n2;
}

void Menu::IngresarValor() {
	std::cout << " -Ingrese el número: ";
	std::cin >> n1;
}

void Menu::Suma() {
	system("cls");
	std::cout << "\t\t\t*******Suma*******\n\n";
	IngresarValores();
	std::cout << " -El resultado de " << n1 << " + " << n2 << " = " << p.Add(n1, n2) << "\n\n";
	EnterContinuar();
}

void Menu::Resta() {
	system("cls");
	std::cout << "\t\t\t*******Resta*******\n\n";
	IngresarValores();
	std::cout << " -El resultado de " << n1 << " - " << n2 << " = " << p.Sub(n1, n2) << "\n\n";
	EnterContinuar();
}

void Menu::Multiplicacion() {
	system("cls");
	std::cout << "\t\t\t*******Multiplicación*******\n\n";
	IngresarValores();
	std::cout << " -El resultado de " << n1 << " x " << n2 << " = " << p.Mul(n1, n2) << "\n\n";
	EnterContinuar();
}

void Menu::Division() {
	system("cls");
	std::cout << "\t\t\t*******División*******\n\n";
	IngresarValores();
	if (n2 != 0) {
		std::cout << " -El resultado de " << n1 << " / " << n2 << " = " << p.Div(n1, n2) << "\n\n";
	}
	else {
		std::cout << " -No se puede dividir entre cero!\n\n";
	}
	EnterContinuar();
}

void Menu::Potencia() {
	system("cls");
	std::cout << "\t\t\t*******Potencia*******\n\n";
	IngresarValor();
	std::cout << " -El resultado de " << n1 << " ^ 2" << " = " << p.Pow(n1, 2) << "\n\n";
	EnterContinuar();
}

void Menu::Raiz() {
	system("cls");
	std::cout << "\t\t\t*******Raíz*******\n\n";
	IngresarValor();
	std::cout << " -El resultado de " << n1 << " = " << p.Sqrt(n1) << "\n\n";
	EnterContinuar();
}

void Menu::Seno() {
	system("cls");
	std::cout << "\t\t\t*******Seno*******\n\n";
	IngresarValor();
	std::cout << " -El resultado de " << n1 << " = " << p.Sin(n1) << "\n\n";
	EnterContinuar();
}

void Menu::Coseno() {
	system("cls");
	std::cout << "\t\t\t*******Coseno*******\n\n";
	IngresarValor();
	std::cout << " -El resultado de " << n1 << " = " << p.Cos(n1) << "\n\n";
	EnterContinuar();
}

void Menu::Tangente() {
	system("cls");
	std::cout << "\t\t\t*******Tangente*******\n\n";
	IngresarValor();
	std::cout << " -El resultado de " << n1 << " = " << p.Tan(n1) << "\n\n";
	EnterContinuar();
}

void Menu::EnterOpcionInvalida() {
	std::cout << " -¡Opción no valida!";
	std::cin.ignore();
	std::cin.ignore();
}

void Menu::EnterContinuar() {
	std::cout << " -Presiona enter para continar...";
	std::cin.ignore();
	std::cin.ignore();
}

void Menu::EnterSarlir() {
	std::cout << " -Presiona enter para salir...";
	std::cin.ignore();
	std::cin.ignore();
}