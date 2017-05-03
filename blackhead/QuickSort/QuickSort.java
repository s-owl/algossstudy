{\rtf1\ansi\ansicpg949\cocoartf1504\cocoasubrtf820
{\fonttbl\f0\fswiss\fcharset0 Helvetica;}
{\colortbl;\red255\green255\blue255;\red148\green6\blue75;\red52\green52\blue52;\red12\green84\blue219;
\red17\green134\blue192;\red83\green149\blue74;}
{\*\expandedcolortbl;;\cssrgb\c65490\c11373\c36471;\cssrgb\c26667\c26667\c26667;\cssrgb\c2353\c42745\c88627;
\cssrgb\c0\c60000\c80000;\cssrgb\c38824\c63922\c36078;}
\paperw11900\paperh16840\margl1440\margr1440\vieww25400\viewh16000\viewkind0
\deftab720
\pard\pardeftab720\partightenfactor0

\f0\fs28 \cf2 \expnd0\expndtw0\kerning0
public\cf3 \'a0\cf2 class\cf3 \'a0Quick\'a0\{\
\'a0\'a0\'a0\'a0\
\'a0\'a0\'a0\'a0\cf2 public\cf3 \'a0\cf2 void\cf3 \'a0sort(\cf4 int\cf3 []\'a0data,\'a0\cf4 int\cf3 \'a0l,\'a0\cf4 int\cf3 \'a0r)\{\
\'a0\'a0\'a0\'a0\'a0\'a0\'a0\'a0\cf4 int\cf3 \'a0left\'a0\cf2 =\cf3 \'a0l;\
\'a0\'a0\'a0\'a0\'a0\'a0\'a0\'a0\cf4 int\cf3 \'a0right\'a0\cf2 =\cf3 \'a0r;\
\'a0\'a0\'a0\'a0\'a0\'a0\'a0\'a0\cf4 int\cf3 \'a0pivot\'a0\cf2 =\cf3 \'a0data[(l\cf2 +\cf3 r)\cf2 /\cf5 2\cf3 ];\
\'a0\'a0\'a0\'a0\'a0\'a0\'a0\'a0\
\'a0\'a0\'a0\'a0\'a0\'a0\'a0\'a0\cf2 do\cf3 \{\
\'a0\'a0\'a0\'a0\'a0\'a0\'a0\'a0\'a0\'a0\'a0\'a0\cf2 while\cf3 (data[left]\'a0\cf2 <\cf3 \'a0pivot)\'a0left\cf2 ++\cf3 ;\
\'a0\'a0\'a0\'a0\'a0\'a0\'a0\'a0\'a0\'a0\'a0\'a0\cf2 while\cf3 (data[right]\'a0\cf2 >\cf3 \'a0pivot)\'a0right\cf2 --\cf3 ;\
\'a0\'a0\'a0\'a0\'a0\'a0\'a0\'a0\'a0\'a0\'a0\'a0\cf2 if\cf3 (left\'a0\cf2 <=\cf3 \'a0right)\{\'a0\'a0\'a0\'a0\
\'a0\'a0\'a0\'a0\'a0\'a0\'a0\'a0\'a0\'a0\'a0\'a0\'a0\'a0\'a0\'a0\cf4 int\cf3 \'a0temp\'a0\cf2 =\cf3 \'a0data[left];\
\'a0\'a0\'a0\'a0\'a0\'a0\'a0\'a0\'a0\'a0\'a0\'a0\'a0\'a0\'a0\'a0data[left]\'a0\cf2 =\cf3 \'a0data[right];\
\'a0\'a0\'a0\'a0\'a0\'a0\'a0\'a0\'a0\'a0\'a0\'a0\'a0\'a0\'a0\'a0data[right]\'a0\cf2 =\cf3 \'a0temp;\
\'a0\'a0\'a0\'a0\'a0\'a0\'a0\'a0\'a0\'a0\'a0\'a0\'a0\'a0\'a0\'a0left\cf2 ++\cf3 ;\
\'a0\'a0\'a0\'a0\'a0\'a0\'a0\'a0\'a0\'a0\'a0\'a0\'a0\'a0\'a0\'a0right\cf2 --\cf3 ;\
\'a0\'a0\'a0\'a0\'a0\'a0\'a0\'a0\'a0\'a0\'a0\'a0\}\
\'a0\'a0\'a0\'a0\'a0\'a0\'a0\'a0\}\cf2 while\cf3 \'a0(left\'a0\cf2 <=\cf3 \'a0right);\
\'a0\'a0\'a0\'a0\'a0\'a0\'a0\'a0\
\'a0\'a0\'a0\'a0\'a0\'a0\'a0\'a0\cf2 if\cf3 (l\'a0\cf2 <\cf3 \'a0right)\'a0sort(data,\'a0l,\'a0right);\
\'a0\'a0\'a0\'a0\'a0\'a0\'a0\'a0\cf2 if\cf3 (r\'a0\cf2 >\cf3 \'a0left)\'a0sort(data,\'a0left,\'a0r);\
\'a0\'a0\'a0\'a0\}\
\'a0\'a0\'a0\'a0\
\'a0\'a0\'a0\'a0\cf2 public\cf3 \'a0\cf2 static\cf3 \'a0\cf2 void\cf3 \'a0main(\cf4 String\cf3 []\'a0args)\'a0\{\
\'a0\'a0\'a0\'a0\'a0\'a0\'a0\'a0\
\'a0\'a0\'a0\'a0\'a0\'a0\'a0\'a0\cf4 int\cf3 \'a0data[]\'a0\cf2 =\cf3 \'a0\{\cf5 66\cf3 ,\'a0\cf5 10\cf3 ,\'a0\cf5 1\cf3 ,\'a0\cf5 34\cf3 ,\'a0\cf5 5\cf3 ,\'a0\cf2 -\cf5 10\cf3 \};\
\'a0\'a0\'a0\'a0\'a0\'a0\'a0\'a0\
\'a0\'a0\'a0\'a0\'a0\'a0\'a0\'a0Quick\'a0quick\'a0\cf2 =\cf3 \'a0\cf2 new\cf3 \'a0Quick();\
\'a0\'a0\'a0\'a0\'a0\'a0\'a0\'a0quick.sort(data,\'a0\cf5 0\cf3 ,\'a0data.\cf4 length\cf3 \'a0\cf2 -\cf3 \'a0\cf5 1\cf3 );\
\'a0\'a0\'a0\'a0\'a0\'a0\'a0\'a0\cf2 for\cf3 (\cf4 int\cf3 \'a0i\cf2 =\cf5 0\cf3 ;\'a0i\cf2 <\cf3 data.\cf4 length\cf3 ;\'a0i\cf2 ++\cf3 )\{\
\'a0\'a0\'a0\'a0\'a0\'a0\'a0\'a0\'a0\'a0\'a0\'a0\cf4 System\cf3 .\cf4 out\cf3 .\cf4 println\cf3 (\cf6 "data["\cf2 +\cf3 i\cf2 +\cf6 "]\'a0:\'a0"\cf2 +\cf3 data[i]);\
\'a0\'a0\'a0\'a0\'a0\'a0\'a0\'a0\}\
\'a0\'a0\'a0\'a0\}\
\}}