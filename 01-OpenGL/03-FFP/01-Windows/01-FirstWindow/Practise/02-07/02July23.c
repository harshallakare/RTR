//detected by Harshal Lakare on 02 July 2023 
//Windows hear file 
#include<Windows.h>

//Global Function Declarations 
LRESULT CALLBACK WndProc(HWND, UINT, WPARAM, LPARAM); 

//EntryPoint Function 
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpszCmdLine, int iCmdShow)
{
	//Local Variable Declarations 
	WNDCLASSEX windclass;
	HWND hwnd; 
	MSG msg; 
	TCHAR szAppName[] = TEXT("HBLWindow");

	//code 
	//WND Class Initilization 
	windclass.cbSize = sizeof(WNDCLASSEX);  //Parameter 1 
	windclass.style = CS_HREDRAW | CS_VREDRAW; //Parameter 2
	windclass.cbClsExtra = 0; //Parameter 3
	windclass.cbWndExtra = 0; //Parameter 4 
	windclass.lpfnWndProc = WndProc; //Parameter 5 

	windclass.hInstance = hInstance; //Parameter 6
	windclass.hbrBackground = (HBRUSH)GetStockObject(BLACK_BRUSH); //Parameter 7
	windclass.hIcon = LoadIcon(NULL, IDI_APPLICATION); //Parameter 8
	windclass.hCursor = LoadCursor(NULL, IDC_ARROW); //Parameter 9
	windclass.lpszClassName = szAppName; //Parameter 10
	windclass.lpszMenuName = NULL; //Parameter 11 
	windclass.hIconSm = LoadIcon(NULL, IDI_APPLICATION); //Parameter 12 

	//Register WND Class ex 
	RegisterClassEx(&windclass); 


	//Create Window 
	hwnd = CreateWindow(szAppName,
		TEXT("HARSHAL LAKARE - Narrated - Harshal Lakare - 02 July 23"),
		WS_OVERLAPPED,
		CW_USEDEFAULT,
		CW_USEDEFAULT,
		CW_USEDEFAULT,
		CW_USEDEFAULT,
		NULL,
		NULL,
		hInstance,
		NULL);

	//Show The Window 
	ShowWindow(hwnd, iCmdShow);

	//Paint Or ReDraw The Window 
	UpdateWindow(hwnd);

	//Message Loop 
	while (GetMessage(&msg, NULL, 0, 0))
	{
		TranslateMessage(&msg);
		DispatchMessage(&msg);
	}

	return((int)msg.wParam);
}

//Callback Function 
LRESULT CALLBACK WndProc(HWND hwnd, UINT iMsg, WPARAM wParam, LPARAM lParam)
{
	//Code
	switch (iMsg)
	{
	case WM_DESTROY: 
		PostQuitMessage(0);
		break; 
	default: 
		break;
	}
	return(DefWindowProc(hwnd, iMsg, wParam, lParam));
}

