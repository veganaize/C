Unix
====

* [The Unix Philosophy](https://en.wikipedia.org/wiki/Unix_philosophy)
* [The Art of Unix Programming](http://www.catb.org/esr/writings/taoup/html/)
* [GNU Coding Standards](https://www.gnu.org/prep/standards/)
  - [GNU Autotools book](https://www.sourceware.org/autobook/)


Single UNIX Specification
-------------------------

* [Version 2, 1997](https://pubs.opengroup.org/onlinepubs/7908799/index.html)
  - [Base Definitions](https://pubs.opengroup.org/onlinepubs/7908799/xbdix.html)
  - [Commands & Utilities](https://pubs.opengroup.org/onlinepubs/7908799/xcuix.html)
  - [Networking Services](https://pubs.opengroup.org/onlinepubs/7908799/xnsix.html)
  - [System Headers](https://pubs.opengroup.org/onlinepubs/7908799/headix.html)
  - [System Interface & Headers](https://pubs.opengroup.org/onlinepubs/7908799/xshix.html)
  - [X/Open Curses](https://pubs.opengroup.org/onlinepubs/7908799/cursesix.html)
* [Version 5, 2024](https://pubs.opengroup.org/onlinepubs/9799919799/) - POSIX.1-2024


Terminal
--------

* N/CURSES
  - [***Table Reference***](https://www.c-for-dummies.com/ncurses/tables/) - Guide to Ncurses Programming ([source code](https://www.c-for-dummies.com/ncurses/source_code/index.php))
  - [***ncurses man pages***](https://invisible-island.net/ncurses/man/index.html)
    - [ncurses](https://invisible-island.net/ncurses/man/ncurses.3x.html)
    - [panel](https://invisible-island.net/ncurses/man/panel.3x.html)
    - [form](https://invisible-island.net/ncurses/man/form.3x.html)
    - [menu](https://invisible-island.net/ncurses/man/menu.3x.html)
  - [Curses Library Functions](https://docs.oracle.com/cd/E36784_01/html/E36880/curses-3curses.html#) - Solaris 11
  - [The Curses Library](https://web.archive.org/web/20210723185403id_/http://publibn.boulder.ibm.com/doc_link/en_US/a_doc_lib/aixprggd/genprogc/curses.htm) - AIX
  - [SVR4 libocurses](http://uw714doc.sco.com/en/man/html.3ocurses/Intro.3ocurses.html) - 2004, SCO UnixWare 7 (and earlier)
    - [curses](http://uw714doc.sco.com/en/man/html.3ocurses/curses.3ocurses.html)
    - [forms](http://uw714doc.sco.com/en/man/html.3ocurses/forms.3ocurses.html)
    - [menus](http://uw714doc.sco.com/en/man/html.3ocurses/menus.3ocurses.html)
    - [panels](http://uw714doc.sco.com/en/man/html.3ocurses/panels.3ocurses.html)
  - [curses.h man page](http://web.archive.org/web/20220128222637id_/http://polarhome.com/service/man/?qf=curses&tf=2&of=IRIX&sf=3X) - IRIX64
  - [Screen Updating and Cursor Movement Optimization](https://docs-archive.freebsd.org/44doc/psd/19.curses/paper.pdf) - 4.4BSD ([ascii](https://web.archive.org/web/20060220184656id_/http://docs.freebsd.org/44doc/psd/19.curses/paper.ascii.gz))
  - [***NCURSES Programming HOWTO***](https://invisible-island.net/ncurses/howto/NCURSES-Programming-HOWTO.html) - 2.x ([1.9](https://tldp.org/HOWTO/NCURSES-Programming-HOWTO/))
  - [***Writing Programs with NCURSES***](https://invisible-island.net/ncurses/ncurses-intro.html) - 1.9.9x
  - [Introduction to the Unix Curses Library](http://heather.cs.ucdavis.edu/matloff/public_html/UnixAndC/CLanguage/Curses.pdf) - 2011
  - [X/Open Curses](https://pubs.opengroup.org/onlinepubs/009638999/toc.pdf) - 1996
  - [X/Open Curses](https://pubs.opengroup.org/onlinepubs/9699909599/toc.pdf) - 2009
  - [A Hacker's Guide to NCURSES Internals](https://invisible-island.net/ncurses/hackguide.html)


X11
---

* [X Windowing System](X%20Windowing%20System/README.md)


Systems Programming
-------------------

* [Intro to Systems Programming](https://people.scs.carleton.ca/~claurend/Courses/COMP2401/Notes/) - comp2401
* [Berkeley Software Architecture Manual - 4.4BSD Edition](https://docs-archive.freebsd.org/44doc/psd/05.sysman/paper.pdf)
---
* [Unix Programmer's Manual](https://www.singlix.com/trdos/archive/pdf_archive/unix_v1_programmers_manual.pdf) - 1st edition
* [Unix Programmer's Manual](https://dspinellis.github.io/unix-v3man/v3man.pdf) - 3rd edition
* Unix Programmer's Manual - 7th edition [[ _volume 1_ ](https://s3.amazonaws.com/plan9-bell-labs/7thEdMan/v7vol1.pdf)] [[ _volume 2a_ ](https://s3.amazonaws.com/plan9-bell-labs/7thEdMan/v7vol2a.pdf)] [[ _volume 2b_ ](https://s3.amazonaws.com/plan9-bell-labs/7thEdMan/v7vol2b.pdf)]
---
* [System V ABI Edition 4.1](https://refspecs.linuxfoundation.org/elf/gabi41.pdf) [[i386](https://refspecs.linuxfoundation.org/elf/abi386-4.pdf)] [[amd64](https://refspecs.linuxfoundation.org/elf/x86_64-abi-0.99.pdf)]
* [DWARF Debugging Standard](https://dwarfstd.org/download.html) [[intro](https://dwarfstd.org/doc/Debugging%20using%20DWARF-2012.pdf)]
---
* [xv6](https://en.wikipedia.org/wiki/Xv6) (x86) - a simple, Unix-like teaching operating system
  - [book](https://pdos.csail.mit.edu/6.828/2018/xv6/book-rev11.pdf) (pdf)
  - [source](https://pdos.csail.mit.edu/6.828/2018/xv6/xv6-rev11.pdf) (pdf)
  - [source](https://github.com/mit-pdos/xv6-public) (github)
---
<details>
  <summary>Linux Device Drivers - 3rd Edition [<a href="static.lwn.net/images/pdf/LDD3/ldd3_pdf.tar.bz2">compressed archive</a>]</summary>
  
  - [Table of Contents](https://static.lwn.net/images/pdf/LDD3/ldr3TOC.fm.pdf)
  - [01. Intro to Device Drivers](https://static.lwn.net/images/pdf/LDD3/ch01.pdf)
  - [02. Building and Running Modules](https://static.lwn.net/images/pdf/LDD3/ch02.pdf)
  - [03. Char Drivers](https://static.lwn.net/images/pdf/LDD3/ch03.pdf)
  - [04. Debugging Techniques](https://static.lwn.net/images/pdf/LDD3/ch04.pdf)
  - [05. Concurrency and Race Conditions](https://static.lwn.net/images/pdf/LDD3/ch05.pdf)
  - [06. Advanced Char Driver Operations](https://static.lwn.net/images/pdf/LDD3/ch06.pdf)
  - [07. Time, Delays, and Deferred Work](https://static.lwn.net/images/pdf/LDD3/ch07.pdf)
  - [08. Allocating Memory](https://static.lwn.net/images/pdf/LDD3/ch08.pdf)
  - [09. Communicating with Hardware](https://static.lwn.net/images/pdf/LDD3/ch09.pdf)
  - [10. Interrupt Handling](https://static.lwn.net/images/pdf/LDD3/ch10.pdf)
  - [11. Data Types in the Kernel](https://static.lwn.net/images/pdf/LDD3/ch11.pdf)
  - [12. PCI Drivers](https://static.lwn.net/images/pdf/LDD3/ch12.pdf)
  - [13. USB Drivers](https://static.lwn.net/images/pdf/LDD3/ch13.pdf)
  - [14. The Linux Device Model](https://static.lwn.net/images/pdf/LDD3/ch14.pdf)
  - [15. Memory Mapping and DMA](https://static.lwn.net/images/pdf/LDD3/ch15.pdf)
  - [16. Block Drivers](https://static.lwn.net/images/pdf/LDD3/ch16.pdf)
  - [17. Network Drivers](https://static.lwn.net/images/pdf/LDD3/ch17.pdf)
  - [18. TTY Drivers](https://static.lwn.net/images/pdf/LDD3/ch18.pdf)
  - [Index](https://static.lwn.net/images/pdf/LDD3/ldr3IX.fm.pdf)
</details>
<details>
  <summary>The Linux Kernel Module Programming Guide</summary>
  
  - [Online HTML](https://tldp.org/LDP/lkmpg/2.6/html/)
  - [HTML Archive](https://tldp.org/LDP/lkmpg/2.6/lkmpg.html.tar.gz)
  - [PDF](https://tldp.org/LDP/lkmpg/2.6/lkmpg.pdf)
</details>
