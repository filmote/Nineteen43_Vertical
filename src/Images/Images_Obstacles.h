#pragma once

#ifdef OLD_OBSTACLES
const uint8_t PROGMEM fuel[] = {
12, 9,
0x00,	0x7C,	0x82,	0x82,	0xAA,	0x92,	0xAA,	0x82,	0x84,	0x8E,	0x74,	0x00,
0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,
};

const uint8_t PROGMEM fuel_mask[] = {
0x7C,	0xFE,	0xFF,	0xFF,	0xFF,	0xFF,	0xFF,	0xFF,	0xFE,	0xFF,	0xFE,	0x7C,
0x00,	0x00,	0x01,	0x01,	0x01,	0x01,	0x01,	0x01,	0x01,	0x01,	0x00,	0x00,
};

const uint8_t PROGMEM bullets[] = {
10, 9,
0x00,	0x0E,	0xEE,	0xEE,	0xEE,	0xEA,	0xAA,	0xA4,	0x40,	0x00,
0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,
};

const uint8_t PROGMEM bullets_mask[] = {
0x1F,	0xFF,	0xFF,	0xFF,	0xFF,	0xFF,	0xFF,	0xFE,	0xE4,	0x40,
0x00,	0x01,	0x01,	0x01,	0x01,	0x01,	0x01,	0x01,	0x00,	0x00,
};

const uint8_t PROGMEM health[] = {
9, 9,
0x00,	0x10,	0x38,	0x7C,	0xFE,	0xFE,	0xFE,	0x6C,	0x00,
0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,	0x00,
};

const uint8_t PROGMEM health_mask[] = {
0x10,	0x38,	0x7C,	0xFE,	0xFF,	0xFF,	0xFF,	0xFE,	0x6C,
0x00,	0x00,	0x00,	0x00,	0x01,	0x01,	0x01,	0x00,	0x00,
};

const uint8_t PROGMEM power_up[] = {
9,9,
0x00, 0x38, 0x44, 0x44, 0x44, 0x28, 0x54, 0x92, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

const uint8_t PROGMEM power_up_mask[] = {
0x38, 0x7C, 0xFE, 0xFE, 0xFE, 0x7C, 0xFE, 0xFF, 0xBA,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00,
};
#endif

#ifndef OLD_OBSTACLES
const uint8_t PROGMEM fuel[] = {
12, 14,
0x00, 0xa8, 0xfc, 0x02, 0x22, 0x22, 0x62, 0x22, 0xe2, 0x02, 0xfc, 0x00, 
0x00, 0x0a, 0x17, 0x08, 0x18, 0x08, 0x18, 0x08, 0x18, 0x08, 0x07, 0x00, 
};

const uint8_t PROGMEM bullets[] = {
12, 14,
0x00, 0xa8, 0xfc, 0x02, 0xba, 0xba, 0xaa, 0xaa, 0x12, 0x02, 0xfc, 0x00, 
0x00, 0x0a, 0x17, 0x08, 0x1b, 0x0b, 0x1a, 0x0a, 0x19, 0x08, 0x07, 0x00, 
};

const uint8_t PROGMEM health[] = {
12, 14,
0x00, 0xa8, 0xfc, 0x02, 0x42, 0xe2, 0xf2, 0xfa, 0xb2, 0x02, 0xfc, 0x00, 
0x00, 0x0a, 0x17, 0x08, 0x18, 0x08, 0x19, 0x0b, 0x19, 0x08, 0x07, 0x00, 
};

const uint8_t PROGMEM power_up[] = {
12, 14,
0x00, 0xa8, 0xfc, 0x02, 0x02, 0x52, 0x52, 0x0a, 0x42, 0x02, 0xfc, 0x00, 
0x00, 0x0a, 0x17, 0x08, 0x18, 0x09, 0x19, 0x0a, 0x18, 0x08, 0x07, 0x00, 
};

const uint8_t PROGMEM power_up_mask[] = {
0xf8, 0xfc, 0xfe, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xfc, 
0x0f, 0x1f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x3f, 0x1f, 0x0f, 0x07, 
};
#endif