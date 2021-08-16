#include <windows.h>

#pragma comment(lib, "user32")
#pragma comment(linker, "/subsystem:windows")


INT WINAPI WinMain(HINSTANCE hInst,      /* Application instance handle  */
                   HINSTANCE hPrevInst,  /* Always NULL in win32         */
                   LPSTR     lpCmdLine,  /* NULL-terminated command line */
                   INT       iCmdShow)   /* State of window              */
{
    MessageBox(NULL, "Hello MessageBox", "Hello MessageBox Title", MB_OK);
    return 0;
}
