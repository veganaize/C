CL.EXE (2019)
------

_Includes:_  
`/I"<dir>"`  - add to include path  
`/X`         - ignore standard include places  
  
_Warnings:_  
`/Wall`  - all warnings  
`/W3`    - warning level  
`/Wx`    - warnings as erros  

_Optimizations:_  
`/O2`    - maximum optimizations (favor speed)  
`/GA`    - optimize for windows application  
`/arch:` - minimum cpu architecture: <`IA32` (xp) | `SSE` (pentium3) | `SSE2` (default) | `AVX` | `AVX2` | `AVX512`>  
  
_Linking:_  
`/MD`    - msvcrt.lib (dynamically link c lib)  
`/MT`    - libcmt.lib (statically link c lib)  
`/LD`    - create .dll  
  
`/Fe`    - name executable file  
`/Fo`    - name object file  
  
`/link`  - linker options & libs  
`/link /LIBPATH:"<dir>"`           - add to lib path  
`/link /subsystem:console,"5.01"`  - x86 XP compatibility (<= v19.27)  
`/link /subsystem:console,"5.02"`  - x64 XP compatibility (<= v19.27)  
or  
`set _LINK_= -subsystem:console,"5.01"`  - sets env var for x86 XP (<= v19.27)  
`set _LINK_= -subsystem:console,"5.02"`  - sets env var for x64 XP (<= v19.27)  
  
_Debugging:_  
`/Od`    - disable optimizations (default)  
`/Za`    - disable extentions  
`/Zi`    - enable debug info  
`/MDd`   - msvcrt.lib (dynamic c debug lib)  
`/MTd`   - libcmt.lib (static c debug lib)  
`/LDd`   - create .dll debug lib  
  
_Other:_  
`/Zs`    - syntax check only  
`/P`     - preprocess to file  
`/C`     - don't strip comments  
`/FA`    - generate assembly listing  
  
_C++:_  
`/TC`    - compile files as .c  
`/TP`    - compile files as .cpp  
`/std:`<`c++14` (default) | `c++17` | `c++latest`>  

DUMPBIN.EXE
-----------
Check library dependencies:  
`dumpbin /dependents filename.exe`  

Check object bitness:  
`dumpbin /headers filename.exe |findstr machine`  
