
## [📖 Windows API](https://en.wikipedia.org/wiki/Windows_API)
* _Tutorials_
  - [Win32 API Programming Tutorial](http://www.winprog.org/tutorial/) - theForger
  - [Windows API tutorial](https://zetcode.com/gui/winapi/) - zetcode
  - [Windows Programming](https://en.wikibooks.org/wiki/Windows_Programming) - Wikibooks
* _Reference_
  - [Windows API Index](https://en.wikipedia.org/wiki/Windows_API) - Microsoft
  - [Hungarian Notation](https://reactos.org/wiki/Hungarian_Notation) - ReactOS


## ⚙️ Compilers
  * _MSVC_
    * __2015+__
      - [MSVC Essential Commands](MSVC-Essential-Commands.md)
      - [MSVC toolset at the command line](https://docs.microsoft.com/en-us/cpp/build/building-on-the-command-line) - Microsoft
      - [Download last XP-compatible MSVC v19.27 (Build Tools 2019 **\*\*\*v16.7\*\*\***)](https://my.visualstudio.com/Downloads?q=visual%20studio%202019&wt.mc_id=o~msft~vscom~older-downloads)
    * __2010__
      - [PSDK 7.1](https://www.microsoft.com/en-us/download/details.aspx?id=8442)  
        _Includes C compiler and everything needed...  
        Uninstall ALL "Visual C++ 2010 Redistributables" from control panel FIRST!  
        Then burn/mount the image and run X:\Setup\SDKSetup.exe directly._
    * __2003__
      - [VC 2003 Toolkit](https://virtuallyfun.com/wordpress/category/venixress/category/visual-c-toolkit-2003/)  
        _Older alternative which will compile for Win9x/NT, as well..._  
      - [PSDK 2003 SP1](https://www.microsoft.com/en-us/download/details.aspx?id=15656)  
        _Install this with the 2003 toolkit._
    * __NMAKE__
      - [NMAKE Reference](https://learn.microsoft.com/en-us/cpp/build/reference/nmake-reference) - Microsoft
      - [Managing Projects with NMAKE](https://et.engr.iupui.edu/~dskim/downloadable/reference_Nmake.pdf)
  * _GCC_
    * __MSYS__
      - [MinGW/MSYS](https://sourceforge.net/projects/mingw/files/Installer) - x86 (32-bit)
      - [MSYS2](https://www.msys2.org/) - x86 & x64
      - [TDM-GCC](https://jmeubank.github.io/tdm-gcc/)
    * __Dev-C++__
      - [Bloodshed](https://bloodshed.net/)
      - [wxDev](http://wxdsgn.sourceforge.net/)
      - [Orwell](https://orwelldevcpp.blogspot.com/)
      - [Embarcadero](https://www.embarcadero.com/cn/free-tools/dev-cpp)
    * __POSIX Subsystem__
      - [Cygwin](https://www.cygwin.com/)
  * _BORLAND_
    * __C++ Builder__
      - [Borland C++ Compiler 5.5](https://altd.embarcadero.com/download/bcppbuilder/freecommandLinetools.exe)
      - [Embarcadero C++ Compiler 7.30](https://altd.embarcadero.com/download/bcppbuilder/BCC102.zip) _(based on [clang](https://clang.llvm.org/)/[llvm](https://llvm.org/))_
  * _OTHERS_
    * [Orange C](https://ladsoft.tripod.com/orange_c_compiler.html) - LADSoft
    * [lcc-win](https://lcc-win32.services.net/) - Jacob Navia
    * [Smaller C](https://github.com/alexfru/SmallerC)


## ✔️ Design Guidelines
* [The Windows Interface Guidelines — A Guide for Designing Software](https://www.ics.uci.edu/~kobsa/courses/ICS104/course-notes/Microsoft_WindowsGuidelines.pdf) - Microsoft (1995)
* [Windows 7 Design Guidelines](https://learn.microsoft.com/en-us/windows/win32/uxguide/guidelines) - Microsoft
* [Windows 11 Design Guidelines](https://learn.microsoft.com/en-us/windows/apps/design/) - Microsoft


## 🔎 Debugging
* [Get started with WinDbg](https://github.com/MicrosoftDocs/windows-driver-docs/blob/staging/windows-driver-docs-pr/debugger/getting-started-with-windbg.md) - Microsoft
* [Windows Debuggers: A WinDbg Tutorial](https://www.codeproject.com/articles/6084/windows-debuggers-part-1-a-windbg-tutorial) - CodeProject


## 🩹 Exception Handling
* [Vectored Exception Handling in Windows XP](https://learn.microsoft.com/en-us/archive/msdn-magazine/2001/september/under-the-hood-new-vectored-exception-handling-in-windows-xp) - MSDN Magazine 2001
* [Depths of Win32 Structured Exception Handling](https://web.archive.org/web/20081230021224id_/http://www.microsoft.com/msj/0197/Exception/Exception.aspx) - Microsoft Systems Journal 1997
* [DWARF & SJLJ Exception Handling](https://gcc.gnu.org/wiki/WindowsGCCImprovements) - GCC
