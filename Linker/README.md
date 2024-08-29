1. Compile C++ code
`g++ -c main.cpp`

2. Link the Object File with the Linker Script
`g++ -o myprogram main.o -T linker.ld`

3. Run the Program
`./myprogram`



* extern "C": This is used to tell the C++ compiler to use C linkage for the specified symbols, which helps in ensuring that the names are not mangled.

Linker Script:

* . = 0x10000;: Sets the starting address for the sections in memory.
*   .text : { *(.text) }: Places the .text section (code) starting at the current location counter.
*   _my_data_start and _my_data_end: Define symbols marking the start and end of the .data section.
*   .data : { *(.data) }: Places the .data section (initialized data) and sets the _my_data_end symbol at its end.
*   .bss : { *(.bss) }: Places the .bss section (uninitialized data) after the .data section.


The warning /usr/bin/ld: warning: myprogram has a LOAD segment with RWX permissions indicates that your program has a segment (usually a section in memory) with read, write, and execute permissions (RWX). This is generally a security concern, as it allows executable code to be modified at runtime, which can potentially lead to security vulnerabilities.
Understanding the Warning

In modern systems, it is a common best practice to avoid having memory regions that are both writable and executable. This is because:
    * Writable and Executable Memory: Can be exploited by attackers to inject malicious code.
    * Security Best Practices: Typically, data should be non-executable and code should be non-writable to prevent such exploits.



