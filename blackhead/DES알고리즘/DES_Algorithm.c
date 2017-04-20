{\rtf1\ansi\ansicpg949\cocoartf1504\cocoasubrtf820
{\fonttbl\f0\fnil\fcharset129 AppleSDGothicNeo-Regular;\f1\fnil\fcharset129 NanumGothic;}
{\colortbl;\red255\green255\blue255;\red48\green60\blue74;}
{\*\expandedcolortbl;;\cssrgb\c24314\c30196\c36078;}
\paperw11900\paperh16840\margl1440\margr1440\vieww10800\viewh8400\viewkind0
\deftab720
\pard\pardeftab720\partightenfactor0

\f0\fs24 \cf2 \expnd0\expndtw0\kerning0
#include <stdio.h>
\f1 \

\f0 #include <stdlib.h>
\f1 \

\f0 #include <string.h>
\f1 \

\f0 \uc0\u160 
\f1 \uc0\u160 \

\f0 unsigned char
\f1  
\f0 DES_IP_TABLE[64] =
\f1 \

\f0 \{
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 57,49,41,33,25,17,9,1,
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 59,51,43,35,27,19,11,3,
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 61,53,45,37,29,21,13,5,
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 63,55,47,39,31,23,15,7,
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 56,48,40,32,24,16,8,0,
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 58,50,42,34,26,18,10,2,
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 60,52,44,36,28,20,12,4,
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 62,54,46,38,30,22,14,6,
\f1 \

\f0 \};
\f1 \

\f0 \uc0\u160 
\f1 \uc0\u160 \

\f0 unsigned char
\f1  
\f0 DES_IP_inverse_TABLE[64] =
\f1 \

\f0 \{
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 39,7,47,15,55,23,63,31,
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 38,6,46,14,54,22,62,30,
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 37,5,45,13,53,21,61,29,
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 36,4,44,12,52,20,60,28,
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 35,3,43,11,51,19,59,27,
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 34,2,42,10,50,18,58,26,
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 33,1,41,9,49,17,57,25,
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 32,0,40,8,48,16,56,24,
\f1 \

\f0 \};
\f1 \

\f0 \uc0\u160 
\f1 \uc0\u160 \

\f0 unsigned char
\f1  
\f0 DES_E_TABLE[48] =
\f1 \

\f0 \{
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 31,0,1,2,3,4,
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 3,4,5,6,7,8,
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 7,8,9,10,11,12,
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 11,12,13,14,15,16,
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 15,16,17,18,19,20,
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 19,20,21,22,23,24,
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 23,24,25,26,27,28,
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 27,28,29,30,31,0
\f1 \

\f0 \};
\f1 \

\f0 \uc0\u160 
\f1 \uc0\u160 \

\f0 unsigned char
\f1  
\f0 DES_P[32] =
\f1 \

\f0 \{
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 15,6,19,20,
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 28,11,27,16,
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 0,14,22,25,
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 4,17,30,9,
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 1,7,23,13,
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 31,26,2,8,
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 18,12,29,5,
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 21,10,3,24,
\f1 \

\f0 \};
\f1 \

\f0 \uc0\u160 
\f1 \uc0\u160 \

\f0 unsigned char
\f1  
\f0 DES_PC1_TABLE[8][7]=
\f1 \

\f0 \{
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 56,48,40,32,24,16, 8,
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 0,57,49,41,33,25,17,
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 9, 1,58,50,42,34,26,
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 18,10, 2,59,51,43,35,
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 62,54,46,38,30,22,14,
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 6,61,53,45,37,29,21,
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 13, 5,60,52,44,36,28,
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 20,12, 4,27,19,11, 3
\f1 \

\f0 \};
\f1 \

\f0 \uc0\u160 
\f1 \uc0\u160 \

\f0 unsigned char
\f1  
\f0 DES_PC2_TABLE[8][6]=
\f1 \

\f0 \{
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 13,16,10,23, 0, 4, 2,27,
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 14, 5,20, 9,22,18,11, 3,
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 25, 7,15, 6,26,19,12, 1,
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 40,51,30,36,46,54,29,39,
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 50,44,32,47,43,48,38,55,
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 33,52,45,41,49,35,28,31
\f1 \

\f0 \};
\f1 \

\f0 \uc0\u160 
\f1 \uc0\u160 \

\f0 unsigned char
\f1  
\f0 DES_SubkeyRotaion_TABLE[] =
\f1 \

\f0 \{
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 1,1,2,2,2,2,2,2,1,2,2,2,2,2,2,1
\f1 \

\f0 \};
\f1 \

\f0 \uc0\u160 
\f1 \uc0\u160 \

\f0 unsigned char
\f1  
\f0 DES_S_TABLE[8][4][16] = \{
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 \{
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 \{14,\u160  4, 13,\u160  1,\u160  2, 15, 11,\u160  8,\u160  3, 10,\u160  6, 12,\u160  5,\u160  9,\u160  0,\u160  7\},
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 \{0, 15,\u160  7,\u160  4, 14,\u160  2, 13,\u160  1, 10,\u160  6, 12, 11,\u160  9,\u160  5,\u160  3,\u160  8\},
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 \{4,\u160  1, 14,\u160  8, 13,\u160  6,\u160  2, 11, 15, 12,\u160  9,\u160  7,\u160  3, 10,\u160  5,\u160  0\},
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 \{15, 12,\u160  8,\u160  2,\u160  4,\u160  9,\u160  1,\u160  7,\u160  5, 11,\u160  3, 14, 10,\u160  0,\u160  6, 13\}
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 \},
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 \{
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 \{15,\u160  1,\u160  8, 14,\u160  6, 11,\u160  3,\u160  4,\u160  9,\u160  7,\u160  2, 13, 12,\u160  0,\u160  5, 10\},
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 \{3, 13,\u160  4,\u160  7, 15,\u160  2,\u160  8, 14, 12,\u160  0,\u160  1, 10,\u160  6,\u160  9, 11,\u160  5\},
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 \{0, 14,\u160  7, 11, 10,\u160  4, 13,\u160  1,\u160  5,\u160  8, 12,\u160  6,\u160  9,\u160  3,\u160  2, 15\},
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 \{13,\u160  8, 10,\u160  1,\u160  3, 15,\u160  4,\u160  2, 11,\u160  6,\u160  7, 12,\u160  0,\u160  5, 14,\u160  9\}
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 \},
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 \{
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 \{10,\u160  0,\u160  9, 14,\u160  6,\u160  3, 15,\u160  5,\u160  1, 13, 12,\u160  7, 11,\u160  4,\u160  2,\u160  8\},
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 \{13,\u160  7,\u160  0,\u160  9,\u160  3,\u160  4,\u160  6, 10,\u160  2,\u160  8,\u160  5, 14, 12, 11, 15,\u160  1\},
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 \{13,\u160  6,\u160  4,\u160  9,\u160  8, 15,\u160  3,\u160  0, 11,\u160  1,\u160  2, 12,\u160  5, 10, 14,\u160  7\},
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 \{1, 10, 13,\u160  0,\u160  6,\u160  9,\u160  8,\u160  7,\u160  4, 15, 14,\u160  3, 11,\u160  5,\u160  2, 12\}
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 \},
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 \{
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 \{7, 13, 14,\u160  3,\u160  0,\u160  6,\u160  9, 10,\u160  1,\u160  2,\u160  8,\u160  5, 11, 12,\u160  4, 15\},
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 \{13,\u160  8, 11,\u160  5,\u160  6, 15,\u160  0,\u160  3,\u160  4,\u160  7,\u160  2, 12,\u160  1, 10, 14,\u160  9\},
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 \{10,\u160  6,\u160  9,\u160  0, 12, 11,\u160  7, 13, 15,\u160  1,\u160  3, 14,\u160  5,\u160  2,\u160  8,\u160  4\},
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 \{3, 15,\u160  0,\u160  6, 10,\u160  1, 13,\u160  8,\u160  9,\u160  4,\u160  5, 11, 12,\u160  7,\u160  2, 14\}
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 \},
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 \{
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 \{2, 12,\u160  4,\u160  1,\u160  7, 10, 11,\u160  6,\u160  8,\u160  5,\u160  3, 15, 13,\u160  0, 14,\u160  9\},
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 \{14, 11,\u160  2, 12,\u160  4,\u160  7, 13,\u160  1,\u160  5,\u160  0, 15, 10,\u160  3,\u160  9,\u160  8,\u160  6\},
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 \{4,\u160  2,\u160  1, 11, 10, 13,\u160  7,\u160  8, 15,\u160  9, 12,\u160  5,\u160  6,\u160  3,\u160  0, 14\},
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 \{11,\u160  8, 12,\u160  7,\u160  1, 14,\u160  2, 13,\u160  6, 15,\u160  0,\u160  9, 10,\u160  4,\u160  5,\u160  3\}
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 \},
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 \{
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 \{12,\u160  1, 10, 15,\u160  9,\u160  2,\u160  6,\u160  8,\u160  0, 13,\u160  3,\u160  4, 14,\u160  7,\u160  5, 11\},
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 \{10, 15,\u160  4,\u160  2,\u160  7, 12,\u160  9,\u160  5,\u160  6,\u160  1, 13, 14,\u160  0, 11,\u160  3,\u160  8\},
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 \{9, 14, 15,\u160  5,\u160  2,\u160  8, 12,\u160  3,\u160  7,\u160  0,\u160  4, 10,\u160  1, 13, 11,\u160  6\},
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 \{4,\u160  3,\u160  2, 12,\u160  9,\u160  5, 15, 10, 11, 14,\u160  1,\u160  7,\u160  6,\u160  0,\u160  8, 13\}
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 \},
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 \{
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 \{4, 11,\u160  2, 14, 15,\u160  0,\u160  8, 13,\u160  3, 12,\u160  9,\u160  7,\u160  5, 10,\u160  6,\u160  1\},
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 \{13,\u160  0, 11,\u160  7,\u160  4,\u160  9,\u160  1, 10, 14,\u160  3,\u160  5, 12,\u160  2, 15,\u160  8,\u160  6\},
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 \{1,\u160  4, 11, 13, 12,\u160  3,\u160  7, 14, 10, 15,\u160  6,\u160  8,\u160  0,\u160  5,\u160  9,\u160  2\},
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 \{6, 11, 13,\u160  8,\u160  1,\u160  4, 10,\u160  7,\u160  9,\u160  5,\u160  0, 15, 14,\u160  2,\u160  3, 12\}
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 \},
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 \{
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 \{13,\u160  2,\u160  8,\u160  4,\u160  6, 15, 11,\u160  1, 10,\u160  9,\u160  3, 14,\u160  5,\u160  0, 12,\u160  7\},
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 \{1, 15, 13,\u160  8, 10,\u160  3,\u160  7,\u160  4, 12,\u160  5,\u160  6, 11,\u160  0, 14,\u160  9,\u160  2\},
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 \{7, 11,\u160  4,\u160  1,\u160  9, 12, 14,\u160  2,\u160  0,\u160  6, 10, 13, 15,\u160  3,\u160  5,\u160  8\},
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 \{2,\u160  1, 14,\u160  7,\u160  4, 10,\u160  8, 13, 15, 12,\u160  9,\u160  0,\u160  3,\u160  5,\u160  6, 11\}
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 \}
\f1 \

\f0 \};
\f1 \

\f0 \uc0\u160 
\f1 \uc0\u160 \

\f0 #define DES_GETBIT(data, i) ((data&(1<<(i))) ? 1 : 0)
\f1 \

\f0 #define DES_SETBIT(data, i) data |=\uc0\u160  (1<<(i))
\f1 \

\f0 #define DES_CLRBIT(data, i) data &= ~(1<<(i))
\f1 \

\f0 \uc0\u160 
\f1 \uc0\u160 \

\f0 void
\f1  
\f0 my_dump_hex(unsigned char
\f1  
\f0 *data, int
\f1  
\f0 length)
\f1 \

\f0 \{
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 int
\f1  
\f0 i;
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 for(i=0;i<length;i++) printf("%02x ", data[i]);
\f1 \

\f0 \}
\f1 \
\uc0\u160 \

\f0 void
\f1  
\f0 my_dump_bin(unsigned char
\f1  
\f0 *data, int
\f1  
\f0 length, int
\f1  
\f0 split)
\f1 \

\f0 \{
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 int
\f1  
\f0 i, j;
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 
\f1 \uc0\u160 \

\f0 \uc0\u160 \u160 \u160 \u160 for(i=0;i<length;)
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 \{
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 for(j=0; j<split; j++, i++)
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 \{
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 char
\f1  
\f0 c = data[i/8];
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 char
\f1  
\f0 b = (c >> (7-(i%8))) & 1;
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 printf("%d", b);
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 \}
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 printf(" ");
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 \}
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 printf("\\n");
\f1 \

\f0 \}
\f1 \

\f0 \uc0\u160 
\f1 \uc0\u160 \

\f0 void
\f1  
\f0 my_dump_int2bin(long
\f1  
\f0 data, int
\f1  
\f0 split)
\f1 \

\f0 \{
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 int
\f1  
\f0 i, j;
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 
\f1 \uc0\u160 \

\f0 \uc0\u160 \u160 \u160 \u160 for(i=0;i<32;)
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 \{
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 for(j=0; j<split; j++, i++)
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 \{
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 char
\f1  
\f0 b = (data >> (31-i)) & 1;
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 printf("%d", b);
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 \}
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 printf(" ");
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 \}
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 printf("\\n");
\f1 \

\f0 \}
\f1 \
\uc0\u160 \

\f0 void
\f1  
\f0 DES_ChangeBits(unsigned char
\f1  
\f0 *matrix, int
\f1  
\f0 destbitslength, unsigned char
\f1  
\f0 *source, unsigned char
\f1  
\f0 *dest)
\f1 \

\f0 \{
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 int
\f1  
\f0 i;
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 memset(dest, 0, destbitslength/8);
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 for(i=0;i<destbitslength;i++)
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 \{
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 int
\f1  
\f0 s = matrix[i];
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 int
\f1  
\f0 si = s / 8;
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 int
\f1  
\f0 sj = s % 8;
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 int
\f1  
\f0 di = i / 8;
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 int
\f1  
\f0 dj = i % 8;
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 if(DES_GETBIT(source[si], 7-sj))
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 DES_SETBIT(dest[di], 7-dj);
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 //else
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 //\u160 \u160 \u160  DES_CLRBIT(dest[di], dj);
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 \}
\f1 \

\f0 \}
\f1 \
\uc0\u160 \

\f0 void
\f1  
\f0 DES_ChangeBitsInverseInput(unsigned char
\f1  
\f0 *matrix, int
\f1  
\f0 destbitslength, unsigned char
\f1  
\f0 *source, unsigned char
\f1  
\f0 *dest)
\f1 \

\f0 \{
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 int
\f1  
\f0 i;
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 memset(dest, 0, destbitslength/8);
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 for(i=0;i<destbitslength;i++)
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 \{
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 int
\f1  
\f0 s = 31 - matrix[i];
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 int
\f1  
\f0 si = s / 8;
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 int
\f1  
\f0 sj = s % 8;
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 int
\f1  
\f0 d = i;
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 int
\f1  
\f0 di = d / 8;
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 int
\f1  
\f0 dj = d % 8;
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 if(DES_GETBIT(source[si], sj))
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 DES_SETBIT(dest[di], 7-dj);
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 //else
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 //\u160 \u160 \u160  DES_CLRBIT(dest[di], dj);
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 \}
\f1 \

\f0 \}
\f1 \
\uc0\u160 \

\f0 void
\f1  
\f0 DES_ChangeBitsInverseBoth(unsigned char
\f1  
\f0 *matrix, int
\f1  
\f0 destbitslength, unsigned char
\f1  
\f0 *source, unsigned char
\f1  
\f0 *dest)
\f1 \

\f0 \{
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 int
\f1  
\f0 i;
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 memset(dest, 0, destbitslength/8);
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 for(i=0;i<destbitslength;i++)
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 \{
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 int
\f1  
\f0 s = 31 - matrix[i];
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 int
\f1  
\f0 si = s / 8;
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 int
\f1  
\f0 sj = s % 8;
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 int
\f1  
\f0 d = 31 - i;
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 int
\f1  
\f0 di = d / 8;
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 int
\f1  
\f0 dj = d % 8;
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 if(DES_GETBIT(source[si], sj))
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 DES_SETBIT(dest[di], dj);
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 //else
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 //\u160 \u160 \u160  DES_CLRBIT(dest[di], dj);
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 \}
\f1 \

\f0 \}
\f1 \

\f0 \uc0\u160 
\f1 \uc0\u160 \

\f0 void
\f1  
\f0 DES_IP(unsigned char
\f1  
\f0 *source, unsigned char
\f1  
\f0 *dest)
\f1 \

\f0 \{
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 DES_ChangeBits(DES_IP_TABLE, 64, source, dest);
\f1 \

\f0 \}
\f1 \

\f0 \uc0\u160 
\f1 \uc0\u160 \

\f0 void
\f1  
\f0 DES_IP_inverse(unsigned char
\f1  
\f0 *source, unsigned char
\f1  
\f0 *dest)
\f1 \

\f0 \{
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 DES_ChangeBits(DES_IP_inverse_TABLE, 64, source, dest);
\f1 \

\f0 \}
\f1 \

\f0 \uc0\u160 
\f1 \uc0\u160 \

\f0 // Expansion
\f1 \

\f0 // Input\uc0\u160  : 32bit
\f1 \

\f0 // Output : 48bit
\f1 \

\f0 void
\f1  
\f0 DES_E(unsigned long
\f1  
\f0 source, unsigned char
\f1  
\f0 *dest)
\f1 \

\f0 \{
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 DES_ChangeBitsInverseInput(DES_E_TABLE, 48, (unsigned char
\f1  
\f0 *)&source, dest);
\f1 \

\f0 \}
\f1 \

\f0 \uc0\u160 
\f1 \uc0\u160 \

\f0 unsigned char
\f1  
\f0 DES_S(int
\f1  
\f0 index, unsigned char
\f1  
\f0 input)
\f1 \

\f0 \{
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 unsigned char
\f1  
\f0 i = (input>>4 & 0x02) | (input & 0x01);
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 unsigned char
\f1  
\f0 j = (input>>1)&0x0F;
\f1 \

\f0 \uc0\u160 
\f1 \uc0\u160 \

\f0 \uc0\u160 \u160 \u160 \u160 return
\f1  
\f0 DES_S_TABLE[index][i][j];
\f1 \

\f0 \}
\f1 \

\f0 \uc0\u160 
\f1 \uc0\u160 \

\f0 unsigned long
\f1  
\f0 DES_f(unsigned char
\f1  
\f0 *RoundKey, unsigned long
\f1  
\f0 input)
\f1 \

\f0 \{
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 unsigned char
\f1  
\f0 a[6] = \{0\};
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 unsigned long
\f1  
\f0 sbox = 0;
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 unsigned long
\f1  
\f0 P = 0;
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 int
\f1  
\f0 i, j, k;
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 
\f1 \uc0\u160 \

\f0 \uc0\u160 \u160 \u160 \u160 DES_E(input, a);
\f1 \
\uc0\u160 \

\f0 \uc0\u160 \u160 \u160 \u160 for(i=0; i<6; i++) a[i] ^= RoundKey[i];
\f1 \
\uc0\u160 \

\f0 \uc0\u160 \u160 \u160 \u160 for(i=0, k=0; i<48; k++)
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 \{
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 unsigned char
\f1  
\f0 b = 0, c;
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 for(j=0; j<6; j++, i++)
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 \{
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 int
\f1  
\f0 bytei = i / 8;
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 int
\f1  
\f0 biti = i % 8;
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 b <<= 1;
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 if((a[bytei] >> (7-biti)) & 1) b|=1;
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 \}
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 c = DES_S(k, b);
\f1 \
\uc0\u160 \

\f0 \uc0\u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 sbox <<= 4;
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 sbox |= c;
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 \}
\f1 \
\uc0\u160 \

\f0 \uc0\u160 \u160 \u160 \u160 DES_ChangeBitsInverseBoth((unsigned char*)DES_P, 32, (unsigned char*)&sbox, (unsigned char*)&P);
\f1 \
\uc0\u160 \

\f0 \uc0\u160 \u160 \u160 \u160 return
\f1  
\f0 P;
\f1 \

\f0 \}
\f1 \

\f0 \uc0\u160 
\f1 \uc0\u160 \

\f0 // Key : 64bit
\f1 \

\f0 // RoundKey : 48bit * 16
\f1 \

\f0 void
\f1  
\f0 DES_RoundKey(unsigned char
\f1  
\f0 *Key, unsigned char
\f1  
\f0 *RoundKey)
\f1 \

\f0 \{
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 int
\f1  
\f0 i;
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 unsigned char
\f1  
\f0 Key_PC1[7];
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 unsigned char
\f1  
\f0 Key_PC2[7];
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 unsigned long
\f1  
\f0 t, C=0, D=0; // 28bit (24+4)
\f1 \

\f0 \uc0\u160 
\f1 \uc0\u160 \

\f0 \uc0\u160 \u160 \u160 \u160 DES_ChangeBits((unsigned char
\f1  
\f0 *)DES_PC1_TABLE, 56, Key, Key_PC1);
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 /////////////////////////////
\f1 \
\uc0\u160 \

\f0 \uc0\u160 \u160 \u160 \u160 C\u160  = 0;
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 C |= ((unsigned long)Key_PC1[0] << 20);
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 C |= ((unsigned long)Key_PC1[1] << 12);
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 C |= ((unsigned long)Key_PC1[2] << 4);
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 C |= (((unsigned long)Key_PC1[3] >> 4) & 0x0F);
\f1 \

\f0 \uc0\u160 
\f1 \uc0\u160 \

\f0 \uc0\u160 \u160 \u160 \u160 D\u160  = 0;
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 D |= (((unsigned long)Key_PC1[3]&0x0F) << 24);
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 D |= ((unsigned long)Key_PC1[4] << 16);
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 D |= ((unsigned long)Key_PC1[5] << 8);
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 D |= ((unsigned long)Key_PC1[6]);
\f1 \

\f0 \uc0\u160 
\f1 \uc0\u160 \

\f0 \uc0\u160 \u160 \u160 \u160 for(i=0;i<16;i++)
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 \{
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 if(DES_SubkeyRotaion_TABLE[i]==1)
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 \{
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 //1
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 C = (C << 1);
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 t = C&0x10000000;
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 C &= 0x0FFFFFFE;
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 C |= t >> 28;
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 D = (D << 1);
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 t = D&0x10000000;
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 D &= 0x0FFFFFFE;
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 D |= t >> 28;
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 \}else\{
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 //2
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 C = (C << 2);
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 t = C&0x30000000;
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 C &= 0x0FFFFFFC;
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 C |= t >> 28;
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 D = (D << 2);
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 t = D&0x30000000;
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 D &= 0x0FFFFFFC;
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 D |= t >> 28;
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 \}
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 Key_PC2[0] = (unsigned char)(C >> 20);
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 Key_PC2[1] = (unsigned char)(C >> 12);
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 Key_PC2[2] = (unsigned char)(C >> 4);
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 Key_PC2[3] = (unsigned char)((C & 0x0F)<<4);
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 Key_PC2[3]|= (unsigned char)((D >> 24) & 0x0F);
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 Key_PC2[4] = (unsigned char)(D >> 16);
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 Key_PC2[5] = (unsigned char)(D >> 8);
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 Key_PC2[6] = (unsigned char)(D);
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 
\f1 \uc0\u160 \

\f0 \uc0\u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 DES_ChangeBits((unsigned char*)DES_PC2_TABLE, 48, Key_PC2, &RoundKey[i*6]);
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 \}
\f1 \

\f0 \}
\f1 \

\f0 \uc0\u160 
\f1 \uc0\u160 \

\f0 void
\f1  
\f0 DES_BlockEncrypt(unsigned char
\f1  
\f0 *RoundKey, unsigned char
\f1  
\f0 *PlainText, unsigned char
\f1  
\f0 *CipherText)
\f1 \

\f0 \{
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 int
\f1  
\f0 i;
\f1 \

\f0 \uc0\u160 
\f1 \uc0\u160 \

\f0 \uc0\u160 \u160 \u160 \u160 unsigned char
\f1  
\f0 PlainText2[8];
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 unsigned char
\f1  
\f0 CipherText2[8];
\f1 \

\f0 \uc0\u160 
\f1 \uc0\u160 \

\f0 \uc0\u160 \u160 \u160 \u160 unsigned long
\f1  
\f0 tmp;
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 unsigned long
\f1  
\f0 L, R;
\f1 \

\f0 \uc0\u160 
\f1 \uc0\u160 \

\f0 \uc0\u160 \u160 \u160 \u160 DES_IP(PlainText, PlainText2);
\f1 \

\f0 \uc0\u160 
\f1 \uc0\u160 \

\f0 \uc0\u160 \u160 \u160 \u160 L = (((unsigned long) PlainText2[0])<<24)|(((unsigned long) PlainText2[1])<<16)|
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 (((unsigned long) PlainText2[2])<<8)|(((unsigned long) PlainText2[3]) << 0);
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 R = (((unsigned long) PlainText2[4])<<24)|(((unsigned long) PlainText2[5])<<16)|
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 (((unsigned long) PlainText2[6])<<8)|(((unsigned long) PlainText2[7]) <<0);
\f1 \
\uc0\u160 \

\f0 \uc0\u160 \u160 \u160 \u160 for(i=0;i<16;i++)
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 \{
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 tmp = R;
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 R = L ^ DES_f(&RoundKey[i*6], tmp);
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 L = tmp;
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 \}
\f1 \
\uc0\u160 \

\f0 \uc0\u160 \u160 \u160 \u160 tmp = R;
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 R = L;
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 L = tmp;
\f1 \
\uc0\u160 \

\f0 \uc0\u160 \u160 \u160 \u160 CipherText2[0] = (unsigned char)((L >> 24) & 0xFF);
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 CipherText2[1] = (unsigned char)((L >> 16) & 0xFF);
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 CipherText2[2] = (unsigned char)((L >> 8) & 0xFF);
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 CipherText2[3] = (unsigned char)((L >> 0) & 0xFF);
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 CipherText2[4] = (unsigned char)((R >> 24) & 0xFF);
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 CipherText2[5] = (unsigned char)((R >> 16) & 0xFF);
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 CipherText2[6] = (unsigned char)((R >> 8) & 0xFF);
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 CipherText2[7] = (unsigned char)((R >> 0) & 0xFF);
\f1 \

\f0 \uc0\u160 
\f1 \uc0\u160 \

\f0 \uc0\u160 \u160 \u160 \u160 DES_IP_inverse(CipherText2, CipherText);
\f1 \

\f0 \}
\f1 \

\f0 \uc0\u160 
\f1 \uc0\u160 \

\f0 void
\f1  
\f0 DES_BlockDecrypt(unsigned char
\f1  
\f0 *RoundKey, unsigned char
\f1  
\f0 *PlainText, unsigned char
\f1  
\f0 *CipherText)
\f1 \

\f0 \{
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 int
\f1  
\f0 i;
\f1 \

\f0 \uc0\u160 
\f1 \uc0\u160 \

\f0 \uc0\u160 \u160 \u160 \u160 unsigned char
\f1  
\f0 PlainText2[8];
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 unsigned char
\f1  
\f0 CipherText2[8];
\f1 \

\f0 \uc0\u160 
\f1 \uc0\u160 \

\f0 \uc0\u160 \u160 \u160 \u160 unsigned long
\f1  
\f0 tmp;
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 unsigned long
\f1  
\f0 L, R;
\f1 \

\f0 \uc0\u160 
\f1 \uc0\u160 \

\f0 \uc0\u160 \u160 \u160 \u160 DES_IP(CipherText, CipherText2);
\f1 \

\f0 \uc0\u160 
\f1 \uc0\u160 \

\f0 \uc0\u160 \u160 \u160 \u160 L = (((unsigned long) CipherText2[0])<<24)|(((unsigned long) CipherText2[1])<<16)|
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 (((unsigned long) CipherText2[2])<<8)|(((unsigned long) CipherText2[3]) << 0);
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 R = (((unsigned long) CipherText2[4])<<24)|(((unsigned long) CipherText2[5])<<16)|
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 (((unsigned long) CipherText2[6])<<8)|(((unsigned long) CipherText2[7]) <<0);
\f1 \
\uc0\u160 \

\f0 \uc0\u160 \u160 \u160 \u160 for(i=0;i<16;i++)
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 \{
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 tmp = R;
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 R = L ^ DES_f(&RoundKey[(15-i)*6], tmp);
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160 L = tmp;
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 \}
\f1 \
\uc0\u160 \

\f0 \uc0\u160 \u160 \u160 \u160 tmp = R;
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 R = L;
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 L = tmp;
\f1 \
\uc0\u160 \

\f0 \uc0\u160 \u160 \u160 \u160 PlainText2[0] = (unsigned char)((L >> 24) & 0xFF);
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 PlainText2[1] = (unsigned char)((L >> 16) & 0xFF);
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 PlainText2[2] = (unsigned char)((L >> 8) & 0xFF);
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 PlainText2[3] = (unsigned char)((L >> 0) & 0xFF);
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 PlainText2[4] = (unsigned char)((R >> 24) & 0xFF);
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 PlainText2[5] = (unsigned char)((R >> 16) & 0xFF);
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 PlainText2[6] = (unsigned char)((R >> 8) & 0xFF);
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 PlainText2[7] = (unsigned char)((R >> 0) & 0xFF);
\f1 \

\f0 \uc0\u160 
\f1 \uc0\u160 \

\f0 \uc0\u160 \u160 \u160 \u160 DES_IP_inverse(PlainText2, PlainText);
\f1 \

\f0 \}
\f1 \

\f0 \uc0\u160 
\f1 \uc0\u160 \

\f0 int
\f1  
\f0 main()
\f1 \

\f0 \{
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 char
\f1  
\f0 PlainText[8] = \{0x02,0x46,0x8a,0xce,0xec,0xa8,0x64,0x20\};
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 char
\f1  
\f0 CipherText[8] = \{0\};
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 char
\f1  
\f0 DecodeText[8] = \{0\};
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 unsigned char
\f1  
\f0 Key[8] = \{0x0f,0x15,0x71,0xc9,0x47,0xd9,0xe8,0x59\};
\f1 \

\f0 \uc0\u160 
\f1 \uc0\u160 \

\f0 \uc0\u160 \u160 \u160 \u160 unsigned char
\f1  
\f0 RoundKey[96]; //16*6
\f1 \

\f0 \uc0\u160 
\f1 \uc0\u160 \

\f0 \uc0\u160 
\f1 \uc0\u160 \

\f0 \uc0\u160 \u160 \u160 \u160 DES_RoundKey(Key, RoundKey);
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 DES_BlockEncrypt(RoundKey, &PlainText[0], &CipherText[0]);
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 DES_BlockDecrypt(RoundKey, &DecodeText[0], &CipherText[0]);
\f1 \

\f0 \uc0\u160 
\f1 \uc0\u160 \

\f0 \uc0\u160 
\f1 \uc0\u160 \

\f0 \uc0\u160 \u160 \u160 \u160 printf("KEY\u160 \u160 \u160 \u160 \u160 \u160 \u160 \u160  : \\n");
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 my_dump_hex(Key, 8);
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 printf("\\n");
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 printf("\\n");
\f1 \
\uc0\u160 \

\f0 \uc0\u160 \u160 \u160 \u160 printf("ROUND KEY : ");
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 my_dump_hex(RoundKey, 96);
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 printf("\\n");
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 printf("\\n");
\f1 \

\f0 \uc0\u160 
\f1 \uc0\u160 \

\f0 \uc0\u160 \u160 \u160 \u160 printf("PLAIN\u160  TEXT : \\n");
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 my_dump_hex(PlainText, 8);
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 printf("\\n");
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 printf("\\n");
\f1 \

\f0 \uc0\u160 
\f1 \uc0\u160 \

\f0 \uc0\u160 \u160 \u160 \u160 printf("CIPHER TEXT : ");
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 my_dump_hex(CipherText, 8);
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 printf("\\n");
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 printf("\\n");
\f1 \

\f0 \uc0\u160 
\f1 \uc0\u160 \

\f0 \uc0\u160 \u160 \u160 \u160 printf("DECODE TEXT : \\n");
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 my_dump_hex(DecodeText, 8);
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 printf("\\n");
\f1 \

\f0 \uc0\u160 \u160 \u160 \u160 printf("\\n");
\f1 \

\f0 \uc0\u160 
\f1 \uc0\u160 \

\f0 \uc0\u160 \u160 \u160 \u160 return
\f1  
\f0 0;
\f1 \

\f0 \}
\f1 \
\
\
\'c3\'e2\'c3\'b3: {\field{\*\fldinst{HYPERLINK "http://ablog.jc-lab.net/66"}}{\fldrslt http://ablog.jc-lab.net/66}} [\'c1\'f6\'b5\'b9\'c0\'cc\'c0\'c7 \'ba\'ed\'b7\'ce\'b1\'d7 \'c0\'d4\'b4\'cf\'b4\'d9!]}