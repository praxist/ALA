#ifndef TLC_Teensy3_H
#define TLC_Teensy3_H

#if DATA_TRANSFER_MODE == TLC_BITBANG
#error "If you want bitbang mode, insert pin defs here"
#endif

// DOUT (Teensy 3.1 pin 11) -> SIN (TLC pin 26)
#define TLC_MOSI_PIN	PCR6
#define TLC_MOSI_PORT	PORTC
#define TLC_MOSI_DDR	PDDR

// SCK (Teensy 3.1 pin 13) -> SCLK (TLC pin 25)
#define TLC_SCK_PIN	PCR5
#define TLC_SCK_PORT	PORTC
#define TLC_SCK_DDR	PDDR

// CS (Teensy 3.1 pin 10)
#define TLC_SS_PIN	PCR4
#define TLC_SS_PORT PORTC
#define TLC_SS_DDR	PDDR

// OC1A (Teensy 3.1 pin 3) -> XLAT (TLC pin 24)
#define XLAT_PIN	PCR12
#define XLAT_PORT	PORTA
#define XLAT_DDR	PDDR

// OC1B (Teensy 3.1 pin 4) -> BLANK (TLC pin 23)
#define BLANK_PIN	PCR13
#define BLANK_PORT	GPIOA
#define BLANK_DDR	PDDR

// OC2B (Teensy 3.1 pin 5) -> GSCLK (TLC pin 18)
#define GSCLK_PIN	PCR7
#define GSCLK_PORT	GPIOD
#define GSCLK_DDR	PDDR

#endif
