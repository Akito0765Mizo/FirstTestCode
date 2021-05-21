#include <DxLib.h>
#include <iomanip>
#include <sstream>

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int)
{
	ChangeWindowMode(true);
	SetWindowText(L"2016034_çaå˚âlêl");

	if (DxLib_Init())
	{
		return -1;
	}

	SetDrawScreen(DX_SCREEN_BACK);
	while (ProcessMessage() == 0)
	{
		ScreenFlip();


	}

	return 0;
}




