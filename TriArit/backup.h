#pragma once  //______________________________________ TriArit.h  
#include "Resource.h"
class TriArit : public Win::Dialog
{
public:
	TriArit()
	{
	}
	~TriArit()
	{
	}
protected:
	//______ Wintempla GUI manager section begin: DO NOT EDIT AFTER THIS LINE
	Win::Label lbN1;
	Win::Label lbN2;
	Win::Label lbN3;
	Win::Label lbN4;
	Win::Label lbOperador1;
	Win::Label lbOperador2;
	Win::Label lbOperador3;
	Win::Label lbSalida1;
	Win::Label lbSalida2;
	Win::Label lbSalida3;
	Win::Label lbOperador4;
	Win::Label lbOperador5;
	Win::Label lbSalida4;
	Win::Label lbSalida5;
	Win::Label lbOperador6;
	Win::Textbox tbxSalida;
	Win::Button btPlay;
protected:
	Win::Gdi::Font fontArial014A;
	void GetDialogTemplate(DLGTEMPLATE& dlgTemplate)
	{
		dlgTemplate.cx = Sys::Convert::PixelToDlgUnitX(261);
		dlgTemplate.cy = Sys::Convert::PixelToDlgUnitY(256);
		dlgTemplate.style = WS_CAPTION | WS_POPUP | WS_SYSMENU | WS_VISIBLE | DS_CENTER | DS_MODALFRAME;
	}
	//_________________________________________________
	void InitializeGui()
	{
		this->Text = L"TriArit";
		lbN1.Create(NULL, L"n?", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 20, 12, 24, 25, hWnd, 1000);
		lbN2.Create(NULL, L"n?", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 60, 12, 24, 25, hWnd, 1001);
		lbN3.Create(NULL, L"n?", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 97, 12, 24, 25, hWnd, 1002);
		lbN4.Create(NULL, L"n?", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 134, 12, 24, 25, hWnd, 1003);
		lbOperador1.Create(NULL, L"n?", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 40, 47, 24, 25, hWnd, 1004);
		lbOperador2.Create(NULL, L"n?", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 77, 47, 24, 25, hWnd, 1005);
		lbOperador3.Create(NULL, L"n?", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 115, 47, 24, 25, hWnd, 1006);
		lbSalida1.Create(NULL, L"n?", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 40, 83, 24, 25, hWnd, 1007);
		lbSalida2.Create(NULL, L"n?", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 77, 83, 24, 25, hWnd, 1008);
		lbSalida3.Create(NULL, L"n?", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 115, 83, 24, 25, hWnd, 1009);
		lbOperador4.Create(NULL, L"n?", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 58, 119, 24, 25, hWnd, 1010);
		lbOperador5.Create(NULL, L"n?", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 97, 119, 24, 25, hWnd, 1011);
		lbSalida4.Create(NULL, L"n?", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 58, 156, 24, 25, hWnd, 1012);
		lbSalida5.Create(NULL, L"n?", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 97, 156, 24, 25, hWnd, 1013);
		lbOperador6.Create(NULL, L"n?", WS_CHILD | WS_VISIBLE | SS_LEFT | SS_WINNORMAL, 77, 194, 24, 25, hWnd, 1014);
		tbxSalida.Create(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_LEFT | ES_WINNORMALCASE, 51, 224, 71, 25, hWnd, 1015);
		btPlay.Create(NULL, L"Play", WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_PUSHBUTTON | BS_CENTER | BS_VCENTER, 185, 12, 69, 28, hWnd, 1016);
		fontArial014A.Create(L"Arial", 14, false, false, false, false);
		lbN1.Font = fontArial014A;
		lbN2.Font = fontArial014A;
		lbN3.Font = fontArial014A;
		lbN4.Font = fontArial014A;
		lbOperador1.Font = fontArial014A;
		lbOperador2.Font = fontArial014A;
		lbOperador3.Font = fontArial014A;
		lbSalida1.Font = fontArial014A;
		lbSalida2.Font = fontArial014A;
		lbSalida3.Font = fontArial014A;
		lbOperador4.Font = fontArial014A;
		lbOperador5.Font = fontArial014A;
		lbSalida4.Font = fontArial014A;
		lbSalida5.Font = fontArial014A;
		lbOperador6.Font = fontArial014A;
		tbxSalida.Font = fontArial014A;
		btPlay.Font = fontArial014A;
	}
	//_________________________________________________
	void btPlay_Click(Win::Event& e);
	void Window_Open(Win::Event& e);
	//_________________________________________________
	bool EventHandler(Win::Event& e)
	{
		if (btPlay.IsEvent(e, BN_CLICKED)) {btPlay_Click(e); return true;}
		return false;
	}
};
