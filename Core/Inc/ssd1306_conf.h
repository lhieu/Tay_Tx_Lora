#ifndef __SSD1306_CONF_H__
#define __SSD1306_CONF_H__
#define SSD1306_INCLUDE_FONT_7x10

#include "stm32f1xx_hal.h"

/* ========== CHỌN GIAO TIẾP ========== */
#define SSD1306_USE_I2C
// #define SSD1306_USE_SPI   // nếu dùng SPI thì bật dòng này thay cho I2C

/* ========== CẤU HÌNH I2C ========== */
#define SSD1306_I2C_PORT hi2c1
#define SSD1306_I2C_ADDR  (0x3C << 1)

/* ========== KÍCH THƯỚC OLED ========== */
#define SSD1306_WIDTH  128
#define SSD1306_HEIGHT 64

/* ========== OFFSET (thường để 0) ========== */
#define SSD1306_X_OFFSET_LOWER 0
#define SSD1306_X_OFFSET_UPPER 0

/* ========== BUFFER SIZE ========== */
#define SSD1306_BUFFER_SIZE (SSD1306_WIDTH * SSD1306_HEIGHT / 8)

#endif
