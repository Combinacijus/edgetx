/*
 * Copyright (C) EdgeTX
 *
 * Based on code named
 *   libopenui - https://github.com/opentx/libopenui
 *
 * License GPLv2: http://www.gnu.org/licenses/gpl-2.0.html
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#pragma once

#include <inttypes.h>
#include "libopenui_config.h"

void lcdNextLayer();
uint16_t* lcdGetScratchBuffer();
void DMACopyBitmap(uint16_t * dest, uint16_t destw, uint16_t desth, uint16_t x, uint16_t y, const uint16_t * src, uint16_t srcw, uint16_t srch, uint16_t srcx, uint16_t srcy, uint16_t w, uint16_t h);
void DMACopyAlphaBitmap(uint16_t * dest, uint16_t destw, uint16_t desth, uint16_t x, uint16_t y, const uint16_t * src, uint16_t srcw, uint16_t srch, uint16_t srcx, uint16_t srcy, uint16_t w, uint16_t h);
void DMACopyAlphaMask(uint16_t * dest, uint16_t destw, uint16_t desth, uint16_t x, uint16_t y, const uint8_t * src, uint16_t srcw, uint16_t srch, uint16_t srcx, uint16_t srcy, uint16_t w, uint16_t h, uint16_t bg_color);
void onKeyError();
void killEvents(event_t event);

// multiplication factor between 0 and 25
int8_t rotaryEncoderGetAccel();

//
// These colors MUST be defined
//

// #define COLOR_THEME_SECONDARY1                  
// #define COLOR_THEME_SECONDARY3                
// #define COLOR_THEME_PRIMARY2                    
// #define COLOR_THEME_FOCUS                  
// #define COLOR_THEME_DISABLED                  
// #define COLOR_THEME_ACTIVE                
// #define COLOR_THEME_FOCUS                 
// #define COLOR_THEME_PRIMARY3                
// #define COLOR_THEME_SECONDARY1                     
// #define COLOR_THEME_PRIMARY2                   
// #define COLOR_THEME_SECONDARY1_THEME_SECONDARY1             
// #define COLOR_THEME_SECONDARY2                
// #define COLOR_THEME_PRIMARY2           
// #define COLOR_THEME_FOCUS         
// #define COLOR_THEME_PRIMARY1                  
// #define COLOR_THEME_SECONDARY3                  
// #define COLOR_THEME_FOCUS           
// #define CUSTOM_COLOR                   
