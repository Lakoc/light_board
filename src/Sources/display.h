#ifndef DISPLAY_H
#define DISPLAY_H

/* Constants specifying lengths for display */
#define rows 8
#define columns 16
#define char_width_with_space 5
#define char_width 4
#define last_column 15

/* Constants specifying char_set */
#define char_set_len 31
#define char_set_len_basic 26

/* Defined font for char_set */
uint8_t char_set[char_set_len][char_width] = {{0b11111110, 0b00011001, 0b00011001, 0b11111110}, // A
                                              {0b11111111, 0b10011001, 0b10011001, 0b01100110}, // B
                                              {0b01111110, 0b10000001, 0b10000001, 0b01000010}, // C
                                              {0b11111111, 0b10000001, 0b10000001, 0b01111110}, // D
                                              {0b11111111, 0b10011001, 0b10011001, 0b10011001}, // E
                                              {0b11111111, 0b00011001, 0b00011001, 0b00011001}, // F
                                              {0b01111110, 0b10000001, 0b10010001, 0b01110000}, // G
                                              {0b11111111, 0b00011000, 0b00011000, 0b11111111}, // H
                                              {0b10000001, 0b11111111, 0b11111111, 0b10000001}, // I
                                              {0b01000000, 0b10000001, 0b10000001, 0b11111111}, // J
                                              {0b11111111, 0b00011000, 0b00100100, 0b11000011}, // K
                                              {0b11111111, 0b10000000, 0b10000000, 0b10000000}, // L
                                              {0b11111111, 0b00000010, 0b00000010, 0b11111111}, // M
                                              {0b11111111, 0b00001110, 0b01110000, 0b11111111}, // N
                                              {0b01111110, 0b10000001, 0b10000001, 0b01111110}, // O
                                              {0b11111111, 0b00001001, 0b00001001, 0b00000110}, // P
                                              {0b01111110, 0b10100001, 0b01000001, 0b10111110}, // Q
                                              {0b11111111, 0b00011001, 0b00101001, 0b11000110}, // R
                                              {0b01000110, 0b10001001, 0b10010001, 0b01100010}, // S
                                              {0b00000001, 0b11111111, 0b11111111, 0b00000001}, // T
                                              {0b11111111, 0b10000000, 0b10000000, 0b11111111}, // U
                                              {0b01111111, 0b10000000, 0b10000000, 0b01111111}, // V
                                              {0b11111111, 0b01000000, 0b01000000, 0b11111111}, // W
                                              {0b11100111, 0b00010000, 0b00010000, 0b11100111}, // X
                                              {0b00000111, 0b11110000, 0b11110000, 0b00000111}, // Y
                                              {0b11100001, 0b10010001, 0b10001001, 0b10000111}, // Z
                                              {0b00000000, 0b00000000, 0b00000000, 0b10000000}, // .
                                              {0b00000000, 0b00000000, 0b10111111, 0b00000000}, // !
                                              {0b00000010, 0b10110001, 0b00001001, 0b00000110}, // ?
                                              {0b00000000, 0b00000000, 0b00000000, 0b00000000}, // space
                                              {0b11111111, 0b11111111, 0b11111111, 0b11111111}  // unknown
};

typedef struct display {
    uint8_t display_values[columns];
    uint16_t message_index;
    uint16_t cycles_to_show_message;
    uint8_t column;
} display_struct;

#endif

