//Windows header files 
#include<windows.h>

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
	windclass.cbSize = sizeof(WNDCLASSEX); 
	windclass.style = CS_HREDRAW | CS_VREDRAW; 
	windclass.cbClsExtra = 0;
	windclass.cbWndExtra = 0; 
	windclass.lpfnWndProc = WndProc; 

	windclass.hInstance = hInstance; 
	windclass.hbrBackground = (HBRUSH)GetStockObject(BLACK_BRUSH); 
	windclass.hIcon = LoadIcon(NULL, IDI_APPLICATION); 
	windclass.hCursor = LoadCursor(NULL, IDC_ARROW);
	windclass.lpszClassName = szAppName; 
	windclass.lpszMenuName = NULL; 
	windclass.hIconSm = LoadIcon(NULL, IDI_APPLICATION); 

	//Register WND class ex 
	RegisterClassEx(&windclass); 

	
	//Create Window 
	hwnd = CreateWindow(szAppName, 
						TEXT("Harshal Baliram Lakare "),
						WS_OVERLAPPEDWINDOW, 
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

	//Paint Or ReDraw The windows 
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
LRESULT CALLBACK WndProc(HWND hwnd, UINT iMsg, WPARAM wParam , LPARAM lParam)
{
	// Code	
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

 