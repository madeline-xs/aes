#pragma once

#ifdef _WIN32
#include <stdint.h>
#endif

#ifndef aes_h
#define aes_h

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

uint8_t * aes_encrypt_string(const uint8_t * input, const long num_bytes, const char * key);
uint8_t * aes_decrypt_string(const uint8_t * input, const long num_bytes, const char * key);
void aes_encrypt_file(const char * source, const char * destination, const char key[16]);

#endif
