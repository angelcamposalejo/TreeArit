#include "stdafx.h"  //________________________________________ TriArit.cpp
#include "TriArit.h"

int APIENTRY wWinMain(HINSTANCE hInstance, HINSTANCE, LPTSTR cmdLine, int cmdShow) {
	TriArit app;
	return app.BeginDialog(IDI_TriArit, hInstance);
}

void TriArit::Window_Open(Win::Event& e)
{
}

void TriArit::btPlay_Click(Win::Event& e)
{
	int n1 = rand() % 11;
	int n2 = rand() % 11;
	int n3 = rand() % 11;
	int n4 = rand() % 11;
	lbN1.Text = Sys::Convert::ToString(n1);
	lbN2.Text = Sys::Convert::ToString(n2);
	lbN3.Text = Sys::Convert::ToString(n3);
	lbN4.Text = Sys::Convert::ToString(n4);
	wstring operadores[5] = { L"+",L"-",L"*",L"/" ,L"+"};
	int indicador = rand() %(0-3);
	lbOperador1.Text = operadores[indicador];
	indicador = rand() %(0 - 3);
	lbOperador2.Text = operadores[indicador];
	indicador = rand() %(0 - 3);
	lbOperador3.Text = operadores[indicador];
	indicador = rand() % (0 - 3);
	lbOperador4.Text = operadores[indicador];
	indicador = rand() % (0 - 3);
	lbOperador5.Text = operadores[indicador];
	indicador = rand() % (0 - 3);
	lbOperador6.Text = operadores[indicador];
	lbSalida1.Text = resultado1(Sys::Convert::ToInt(lbN1.Text), Sys::Convert::ToInt(lbN2.Text), lbOperador1.Text);
	lbSalida2.Text = resultado1(Sys::Convert::ToInt(lbN2.Text), Sys::Convert::ToInt(lbN3.Text), lbOperador2.Text);
	lbSalida3.Text = resultado1(Sys::Convert::ToInt(lbN3.Text), Sys::Convert::ToInt(lbN4.Text), lbOperador3.Text);
	lbSalida4.Text = resultado1(Sys::Convert::ToInt(lbSalida1.Text), Sys::Convert::ToInt(lbSalida2.Text), lbOperador4.Text);
	lbSalida5.Text = resultado1(Sys::Convert::ToInt(lbSalida2.Text), Sys::Convert::ToInt(lbSalida3.Text), lbOperador5.Text);
	tbxSalida.Text = resultado1(Sys::Convert::ToInt(lbSalida4.Text), Sys::Convert::ToInt(lbSalida5.Text), lbOperador6.Text);
}
wstring TriArit::resultado1(int a, int b, wstring c)
{
	int resultado;
	if (c == L"+")
	{
		resultado = a + b;
	}
	else
	{
		if (c == L"-")
		{
			resultado = a - b;
		}
		else
		{
			if (c == L"*")
			{
				resultado = a*b;
			}
			else
			{
				if (c == L"/")
				{
					resultado = a / b;
				}
			}
		}
	}
	return Sys::Convert::ToString(resultado);
}

