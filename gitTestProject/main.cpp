#include <DxLib.h>

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPevInstance,
	LPSTR lpCmdLine, int nCmdshow)
{
	
	ChangeWindowMode(true);
	if (DxLib_Init() == -1)
	{
		return false;
	}
}





