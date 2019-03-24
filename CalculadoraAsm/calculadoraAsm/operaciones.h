#pragma once
#include "stdafx.h"
#include <Windows.h>
#include <iostream>
#include <cstdlib>
#include <locale>

class Operaciones {
	private:
		int num1;
		int num2;
	public:
		Operaciones();
		int getNum1();
		int getNum2();
		void setNum1(int);
		void setNum2(int);
		int Add(int, int);
		int Sub(int, int);
		int Mul(int, int);
		int Div(int, int);
		int Mod(int, int);
		int Pow(int, int);
		int Sqrt(int n1);
		int Fac(int n1);
};