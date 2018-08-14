#pragma once

const uint8_t PROGMEM bullet_img[] = {
  3, 8,
  0x00, 0x07, 0x02, 0x07, 0x00, 0x07,  
};

const uint8_t PROGMEM p38_0[] = {
  18, 19,
  0x00, 0x20, 0xB0, 0xF0, 0x20, 0x20, 0x20, 0x60, 0x60, 0x60, 0xBC, 0x66, 0xBC, 0x60, 0x00, 0x30, 0x00, 0x00,
  0x00, 0x20, 0x6F, 0x7F, 0x20, 0x20, 0x20, 0x32, 0x37, 0x35, 0xED, 0x37, 0xED, 0x35, 0x07, 0x67, 0x02, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,

  0x00, 0x20, 0xB0, 0xF0, 0x20, 0x20, 0x20, 0x60, 0x60, 0x60, 0xBC, 0x66, 0xBC, 0x60, 0x00, 0x60, 0x00, 0x00,
  0x00, 0x20, 0x6F, 0x7F, 0x20, 0x20, 0x20, 0x32, 0x37, 0x35, 0xED, 0x37, 0xED, 0x35, 0x07, 0x37, 0x02, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
};

const uint8_t PROGMEM p38_1[] = {
  12, 19,
  0x00, 0x20, 0xF0, 0x20, 0x20, 0x60, 0xFC, 0xFE, 0x20, 0x00, 0x00, 0x00,
  0x00, 0x20, 0x7F, 0x20, 0x22, 0x37, 0xFD, 0xFF, 0x25, 0x07, 0x02, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x03, 0x00, 0x00, 0x00, 0x00,
};

const uint8_t PROGMEM p38_2[] = {
  6, 19,
  0x00, 0x20, 0x20, 0xFE, 0x60, 0x00,
  0x00, 0x22, 0x27, 0xFF, 0x37, 0x00,
  0x00, 0x00, 0x00, 0x03, 0x00, 0x00,
};

const uint8_t PROGMEM p38_3[] = {
  12, 19,
  0x00, 0x00, 0x00, 0x20, 0xFE, 0xFC, 0x20, 0x20, 0x20, 0xF0, 0x20, 0x00,
  0x00, 0x02, 0x07, 0x27, 0xFF, 0xFF, 0x27, 0x22, 0x20, 0xFF, 0x20, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

const uint8_t PROGMEM p38_4[] = {
  18, 19,
  0x00, 0x00, 0x00, 0x00, 0x60, 0xFC, 0xFE, 0xFC, 0x60, 0x60, 0x60, 0x20, 0x20, 0x20, 0xF0, 0xF0, 0x20, 0x00,
  0x00, 0x02, 0x07, 0x07, 0x37, 0xFF, 0xFF, 0xFF, 0x37, 0x37, 0x32, 0x20, 0x20, 0x20, 0x7F, 0x7F, 0x20, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

const uint8_t PROGMEM p38_6[] = {
  6, 19,
  0x00, 0x60, 0xFE, 0x20, 0x20, 0x00,
  0x00, 0x37, 0xFF, 0x27, 0x22, 0x00,
  0x00, 0x00, 0x03, 0x00, 0x00, 0x00,
};

const uint8_t PROGMEM p38_mask_0[] = {
  0x70, 0xF8, 0xF8, 0xF8, 0xF8, 0x70, 0xF0, 0xF0, 0xF0, 0xFC, 0xFE, 0xFF, 0xFE, 0xFC, 0xF0, 0x80, 0x00, 0x00,
  0x70, 0xFF, 0xFF, 0xFF, 0xFF, 0x70, 0x7A, 0x7F, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0x0F, 0x07, 0x02,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x03, 0x07, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00,
};

const uint8_t PROGMEM p38_mask_1[] = {
  0x70, 0xF8, 0xF8, 0xF8, 0x70, 0xFC, 0xFE, 0xFF, 0xFE, 0xF0, 0x00, 0x00,
  0x70, 0xFF, 0xFF, 0xFF, 0x77, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0x07, 0x02,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x03, 0x07, 0x03, 0x00, 0x00, 0x00,
};

const uint8_t PROGMEM p38_mask_2[] = {
  0x70, 0x70, 0xFE, 0xFF, 0xFE, 0x70,
  0x72, 0x77, 0xFF, 0xFF, 0xFF, 0x77,
  0x00, 0x00, 0x03, 0x07, 0x03, 0x00,
};

const uint8_t PROGMEM p38_mask_3[] = {
  0x00, 0x00, 0xA0, 0xFE, 0xFF, 0xFE, 0xFC, 0x70, 0xF0, 0xF8, 0xF0, 0x20,
  0x02, 0x07, 0x2F, 0xFF, 0xFF, 0xFF, 0xFF, 0x77, 0x7F, 0xFF, 0x7F, 0x20,
  0x00, 0x00, 0x00, 0x03, 0x07, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
};

const uint8_t PROGMEM p38_mask_4[] = {
  0x00, 0x00, 0x80, 0xF0, 0xFC, 0xFE, 0xFF, 0xFE, 0xFC, 0xF0, 0xF0, 0xF0, 0x70, 0xF0, 0xF8, 0xF8, 0xF0, 0x20,
  0x02, 0x07, 0x0F, 0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x7F, 0x7F, 0x7A, 0x70, 0xFF, 0xFF, 0xFF, 0xFF, 0x20,
  0x00, 0x00, 0x00, 0x00, 0x01, 0x03, 0x07, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

const uint8_t PROGMEM p38_mask_6[] = {
  0x60, 0xFE, 0xFF, 0xFE, 0x70, 0x20,
  0x37, 0xFF, 0xFF, 0xFF, 0x77, 0x22,
  0x00, 0x03, 0x07, 0x03, 0x00, 0x00,
};

const uint8_t PROGMEM p38_shrink_1[] = {
  6, 19,
  0x00, 0x60, 0xFE, 0x20, 0x20, 0x00,
  0x00, 0x37, 0xFF, 0x27, 0x22, 0x00,
  0x00, 0x00, 0x03, 0x00, 0x00, 0x00,
};

const uint8_t PROGMEM p38_shrink_2[] = {
  5, 19,
  0x00, 0x40, 0xFC, 0x40, 0x00,
  0x00, 0x17, 0xFF, 0x12, 0x00,
  0x00, 0x00, 0x01, 0x00, 0x00,
};

const uint8_t PROGMEM p38_shrink_3[] = {
  5, 19,
  0x00, 0x40, 0xF0, 0x00, 0x00,
  0x00, 0x12, 0x7F, 0x02, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00,
};

const uint8_t PROGMEM p38_shrink_4[] = {
  5, 19,
  0x00, 0x80, 0xE0, 0x00, 0x00,
  0x00, 0x0A, 0x3F, 0x02, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00,
};

const uint8_t PROGMEM p38_shrink_mask_1[] = {
  0x60, 0xFE, 0xFF, 0xFE, 0x70, 0x20,
  0x37, 0xFF, 0xFF, 0xFF, 0x77, 0x22,
  0x00, 0x03, 0x07, 0x03, 0x00, 0x00,
};

const uint8_t PROGMEM p38_shrink_mask_2[] = {
  0x40, 0xFC, 0xFE, 0xFC, 0x40,
  0x17, 0xFF, 0xFF, 0xFF, 0x12,
  0x00, 0x01, 0x03, 0x01, 0x00,
};

const uint8_t PROGMEM p38_shrink_mask_3[] = {
  0x40, 0xF0, 0xF8, 0xF0, 0x00,
  0x12, 0x7F, 0xFF, 0x7F, 0x02,
  0x00, 0x00, 0x00, 0x00, 0x00,
};

const uint8_t PROGMEM p38_shrink_mask_4[] = {
  0x80, 0xE0, 0xF0, 0xE0, 0x00,
  0x0A, 0x3F, 0x7F, 0x3F, 0x02,
  0x00, 0x00, 0x00, 0x00, 0x00,
};
