Compile (x86; XP-compatible)
----------------------------

```cmd
set _LINK_=%_LINK_% -subsystem:console,"5.01"
  or
cl.exe sourcefile.c /link /subsystem:console,"5.01"
```


CL.EXE
------

`/I"<dir>"`  - add to include path  
`/X`         - ignore standard include places  

`/Wall`  - all warnings  
`/W3`    - warning level  
`/Wx`    - warnings as erros  
  
`/O2`    - maximum optimizations (favor speed)  
`/GA`    - optimize for windows application  
`/arch:` - minimum cpu architecture: <IA32(all xp)|SSE(pentium3 +)|SSE2(default)|AVX|AVX2|AVX512>  
  
`/MD`    - msvcrt.lib (dynamically link c lib)  
`/MT`    - libcmt.lib (statically link c lib)  
`/LD`    - create .dll  
  
`/Fe`    - name executable file  
`/Fo`    - name object file  
  
`/TC`    - compile files as .c  
`/TP`    - compile files as .cpp  

`/link`  - linker options & libs  
`/link /LIBPATH:"<dir>"`           - add to lib path  
`/link /subsystem:console,"5.01"`  - x86 XP compatibility (<= v19.27)  
`/link /subsystem:console,"5.02"`  - x64 XP compatibility (<= v19.27)  
  
`/std:`<c++14(default)|c++17|c++latest>  
  
`/Od`    - disable optimizations (default)  
`/Za`    - disable extentions  
`/Zi`    - enable debug info  
`/MDd`   - msvcrt.lib (dynamic c debug lib)  
`/MTd`   - libcmt.lib (static c debug lib)  
`/LDd`   - create .dll debug lib  
  
`/Zs`    - syntax check only  
`/P`     - preprocess to file  
`/C`     - don't strip comments  
`/FA`    - generate assembly listing  
