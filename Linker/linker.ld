/* linker.ld */
ENTRY(main)

MEMORY {
    TEXT (rx) : ORIGIN = 0x10000, LENGTH = 1M
    DATA (rw) : ORIGIN = 0x2000000, LENGTH = 1M
    BSS (rw) : ORIGIN = 0x3000000, LENGTH = 1M
}

SECTIONS {
    . = 0x10000; /* Start address for the sections */

    .text : {
        *(.text)
    } > TEXT

    . = ALIGN(4);
    _my_data_start = .;
    .data : {
        *(.data)
    } > DATA
    _my_data_end = .;

    . = ALIGN(4);
    .bss : {
        *(.bss)
    } > BSS
}

