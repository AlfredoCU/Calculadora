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
		int Add(int n1, int n2);
		int Sub(int n1, int n2);
		int Mul(int n1, int n2);
		int Div(int n1, int n2);
		int Mod(int n1, int n2);
		int Pow(int n1, int pow);
		int Sqrt(int n1);
};