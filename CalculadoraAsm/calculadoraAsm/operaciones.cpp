#include "stdafx.h"
#include "operaciones.h"

Operaciones::Operaciones() { }

int Operaciones::getNum1() {
	return num1;
}

int Operaciones::getNum2() {
	return num2;
}

void Operaciones::setNum1(int n1) {
	num1 = n1;
}

void Operaciones::setNum2(int n2) {
	num2 = n2;
}

int Operaciones::Add(int n1, int n2) {
	__asm {
		mov eax, n1;
		mov ebx, n2;
		add eax, ebx;
		mov n1, eax;
	}
	return n1;
}

int Operaciones::Sub(int n1, int n2) {
	__asm {
		mov eax, n1;
		mov ebx, n2;
		sub eax, ebx;
		mov n1, eax;
	}
	return n1;
}

int Operaciones::Mul(int n1, int n2) {
	__asm {
		mov eax, n1;
		mov ebx, n2;
		mul ebx;
		mov n1, eax;
	}
	return n1;
}

int Operaciones::Div(int n1, int n2) {
	__asm {
		mov eax, n1;
		mov ecx, n2;
		sub edx, edx;
		div ecx;
		mov n1, eax;
	}
}

int Operaciones::Mod(int n1, int n2) {
	_asm {
		mov eax, n1;
		mov ecx, n2;
		sub edx, edx;
		div ecx;
		mov n1, edx;
	}
	return n1;
}

int Operaciones::Pow(int n1, int pow) {
	_asm {
		mov ecx, pow;
		mov eax, n1;
		mov ebx, n1;
		mul ebx;	
		mov n1, eax;
	}
	return n1;
}

int Operaciones::Sqrt(int n1) {
	int r = 0;
	_asm {
		siguiente:
			inc r;
			mov eax, r;
			mul eax;
			cmp eax, n1;
			jbe siguiente;
			dec r;
	}
	return r;
}