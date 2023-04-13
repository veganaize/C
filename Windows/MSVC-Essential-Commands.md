Compile (x86; XP-compatible)
----------------------------

```cmd
set _LINK_=%_LINK_% -subsystem:console,"5.01"
  or
cl.exe sourcefile.c /link /subsystem:console,"5.01"
```


CL.EXE (v19.27)
---------------

`/Wall`  - all warnings  
`/W3`    - warning level  
`/Wx`    - warnings as erros  
  
`/Od`    - disable optimizations (default)  
`/O2`    - maximum optimizations (favor speed)  
`/GA`    - optimize for windows application  
`/arch:` - minimum cpu architecture: <IA32|SSE|SSE2(default)|AVX|AVX2|AVX512>  
  
`/Za`    - disable extentions  
`/MD`    - msvcrt.lib (dynamically link c lib)  
`/MT`    - libcmt.lib (statically link c lib)  
`/LD`    - create .dll
  
`/Fe`    - name executable file  
`/Fo`    - name object file  
  
`/TC`    - compile files as .c  
`/TP`    - compile files as .cpp  
  
`/link /subsystem:console,"5.01"`  - x86 XP compatibility  
`/link /subsystem:console,"5.02"`  - x64 XP compatibility  

`/std:`<c++14(default)|c++17|c++latest>
