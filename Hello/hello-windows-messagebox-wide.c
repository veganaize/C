#include <windows.h>

#pragma comment(lib, "user32")
#pragma comment(linker, "/subsystem:windows")


INT WINAPI wWinMain(HINSTANCE hInst,      /* Application instance handle  */
                    HINSTANCE hPrevInst,  /* Always NULL in win32         */
                    PWSTR     pwsCmdLine, /* NULL-terminated command line */
                    INT       iCmdShow)   /* State of window              */
{
    MessageBoxW(NULL, L"Hello MessageBox", L"Hello MessageBox Title", MB_OK);
    return 0;
}
