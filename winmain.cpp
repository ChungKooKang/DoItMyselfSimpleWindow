#include <Windows.h>

int WINAPI winmain(_In_ HINSTANCE hInstance,
	_In_opt_ HINSTANCE hPrevInstacne,
	_In_ LPSTR lpComdLine,
	_In_ int nShowCmd
)
{
	MessageBox(nullptr,
		L"Hello World!",
		L"SimpleWindow",
		MB_ICONEXCLAMATION | MB_OK
	);

	return 0;
}