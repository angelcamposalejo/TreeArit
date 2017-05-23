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
	int n1 = rand() % 101;
	int n2 = rand() % 101;
	int n3 = rand() % 101;
	int n4 = rand() % 101;
	lbN1.Text = Sys::Convert::ToString(n1);
	lbN2.Text = Sys::Convert::ToString(n2);
	lbN3.Text = Sys::Convert::ToString(n3);
	lbN4.Text = Sys::Convert::ToString(n4);
	wstring operadores[4] = { L"+",L"-",L"*",L"/" };
	int indicador = rand() % 4;
	lbOperador1.Text = operadores[indicador-1];
	indicador = rand() % 4;
	lbOperador2.Text = operadores[indicador - 1];
	indicador = rand() % 4;
	lbOperador3.Text = operadores[indicador - 1];
	indicador = rand() % 4;
	lbOperador4.Text = operadores[indicador - 1];
	indicador = rand() % 4;
	lbOperador5.Text = operadores[indicador - 1];
	indicador = rand() % 4;
}

