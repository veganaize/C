#include <windows.h>

#pragma comment(lib, "user32")
#pragma comment(linker, "/subsystem:windows")


int WINAPI WinMain(HINSTANCE hInstance,
                   HINSTANCE hPrevInstance,
                   LPSTR     lpCmdLine,
                   int       iCmdShow)
{
    MSG  msg;
    HWND hWnd = CreateWindow("BUTTON", "Goodbye Message Loop",
                             WS_VISIBLE | BS_CENTER,
                             100, 100, 200, 80,
                             NULL, NULL, hInstance, NULL);

    /* MESSAGE LOOP */
    while (GetMessage(&msg, NULL, 0, 0)) {
        switch(msg.message) {
            case WM_LBUTTONUP:
                DestroyWindow(hWnd);
                PostQuitMessage(0);
        }

        DispatchMessage(&msg);
    }

    return msg.wParam;
}
