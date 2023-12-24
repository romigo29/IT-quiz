#include <iostream>
const int number_left_border = 0x30;
const int number_right_border = 0x39;

const int russian_left_border = 0xc0;
const int russian_right_border = 0xff;
const int russian_yo_lowercase = 0xb8;
const int russian_yo_uppercase = 0xa8;

const int english_lowercase_left_border = 0x61;
const int english_lowercase_right_border = 0x7a;

const int space_symbol = 0x20;

bool check_answer_validity(char ans);
bool check_russian_input(unsigned char character[50]);
bool check_english_input(unsigned char character[50]);
bool check_number_input(unsigned char character[50]);
bool check_special_symbol_input(unsigned char input);
<<<<<<< HEAD:header_validity.h
=======
void TestOAiP();
void TestOPI();
>>>>>>> 61c0ddfa06d9ece008e94035fb4edc403f8a377d:Validity_Test/header_validity.h
