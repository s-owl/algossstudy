{\rtf1\ansi\ansicpg949\cocoartf1504\cocoasubrtf820
{\fonttbl\f0\fnil\fcharset0 Monaco;\f1\fnil\fcharset129 AppleSDGothicNeo-Regular;}
{\colortbl;\red255\green255\blue255;\red221\green40\blue103;\red217\green232\blue247;\red230\green230\blue250;
\red18\green144\blue195;\red249\green250\blue244;\red30\green181\blue64;\red121\green171\blue255;\red237\green127\blue72;
\red167\green236\blue33;\red141\green218\blue248;\red104\green151\blue187;\red255\green191\blue38;\red23\green198\blue163;
\red102\green225\blue248;}
{\*\expandedcolortbl;;\csgenericrgb\c86667\c15686\c40392;\csgenericrgb\c85098\c90980\c96863;\csgenericrgb\c90196\c90196\c98039;
\csgenericrgb\c7059\c56471\c76471;\csgenericrgb\c97647\c98039\c95686;\csgenericrgb\c11765\c70980\c25098;\csgenericrgb\c47451\c67059\c100000;\csgenericrgb\c92941\c49804\c28235;
\csgenericrgb\c65490\c92549\c12941;\csgenericrgb\c55294\c85490\c97255;\csgenericrgb\c40784\c59216\c73333;\csgenericrgb\c100000\c74902\c14902;\csgenericrgb\c9020\c77647\c63922;
\csgenericrgb\c40000\c88235\c97255;}
\paperw11900\paperh16840\margl1440\margr1440\vieww10800\viewh8400\viewkind0
\deftab720
\pard\pardeftab720\partightenfactor0

\f0\fs38 \cf2 import\cf3  java\cf4 .\cf3 util\cf4 .*;\cf0 \
\
\cf2 public\cf3  \cf2 class\cf3  \cf5 test\cf6 \{\cf0 \
\pard\pardeftab720\partightenfactor0
\cf3     \cf2 public\cf3  \cf2 static\cf3  \cf2 void\cf3  \cf7 main\cf6 (\cf5 String\cf6 []\cf3  \cf8 args\cf6 )\{\cf0 \
\cf3     	\cf0 \
\cf3     		\cf5 Scanner\cf3  \cf9 \ul \ulc9 scan\cf3 \ulnone  \cf4 =\cf3  \cf2 new\cf3  \cf10 Scanner\cf6 (\cf5 System\cf4 .\cf11 in\cf6 )\cf4 ;\cf0 \
\cf3     		\cf2 int\cf3  \cf9 arr\cf6 [\cf3  \cf6 ]\cf3  \cf4 =\cf3  \cf2 new\cf3  \cf2 int\cf6 [\cf12 10\cf6 ]\cf4 ;\cf0 \
\cf3     		\cf2 for\cf6 (\cf2 int\cf3  \cf9 i\cf4 =\cf12 0\cf3  \cf4 ;\cf3  \cf13 i\cf4 <\cf12 10\cf3  \cf4 ;\cf3  \cf13 i\cf4 ++\cf6 )\{\cf0 \
\cf3     			\cf2 if\cf6 (\cf13 i\cf4 ==\cf12 0\cf6 )\cf0 \
\cf3     				\cf5 System\cf4 .\cf11 out\cf4 .\cf10 println\cf6 (\cf14 "input"\cf6 )\cf4 ;\cf0 \
\cf3     			\cf13 arr\cf6 [\cf13 i\cf6 ]\cf3  \cf4 =\cf3  \cf13 scan\cf4 .\cf10 nextInt\cf6 ()\cf4 ;\cf0 \
\cf3     		\cf6 \}\cf0 \
\cf3     		\cf0 \
\cf3     		\cf5 System\cf4 .\cf11 out\cf4 .\cf10 println\cf6 (\cf14 "
\f1 \'bc\'b1\'c5\'c3\'c1\'a4\'b7\'c4\'c0\'cc\'bf\'a1\'bf\'b0
\f0  
\f1 \'bf\'a9\'b7\'af\'ba\'d0
\f0 ~ 
\f1 \'bb\'d1\'c0\'d7\'bb\'d1\'c0\'d7
\f0  
\f1 \'c2\'6d\'c2\'6d\'c2\'6d
\f0  
\f1 \'c2\'c9\'b2\'bf\'b6\'d1\'b0\'a1
\f0  
\f1 \'b5\'b5\'bf\'cd\'c1\'df
\f0  
\f1 \'bf\'ec\'bf\'d5\'b1\'bb
\f0 ~~~"\cf6 )\cf4 ;\cf0 \
\cf3        \cf0 \
\cf3         \cf2 for\cf6 (\cf2 int\cf3  \cf9 i\cf4 =\cf6 (\cf13 arr\cf4 .\cf15 length\cf4 -\cf12 1\cf6 )\cf3  \cf4 ;\cf3  \cf13 i\cf4 >\cf12 0\cf3  \cf4 ;\cf3  \cf13 i\cf4 --\cf6 )\{\cf0 \
\cf3         		\cf2 int\cf3  \cf9 temp\cf3  \cf4 =\cf13 arr\cf6 [\cf12 0\cf6 ]\cf4 ;\cf0 \
\cf3     	   		\cf2 int\cf3  \cf9 dex\cf3  \cf4 =\cf3  \cf12 0\cf4 ;\cf0 \
\cf3     	   		\cf0 \
\cf3         		\cf2 for\cf6 (\cf2 int\cf3  \cf9 j\cf4 =\cf12 1\cf3  \cf4 ;\cf3  \cf13 j\cf4 <\cf13 i\cf4 +\cf12 1\cf3  \cf4 ;\cf3  \cf13 j\cf4 ++\cf6 )\{\cf0 \
\cf3         			\cf2 if\cf6 (\cf13 arr\cf6 [\cf13 j\cf6 ]\cf4 >\cf13 temp\cf6 )\{\cf0 \
\cf3         				\cf13 temp\cf3  \cf4 =\cf3  \cf13 arr\cf6 [\cf13 j\cf6 ]\cf4 ;\cf0 \
\cf3         				\cf13 dex\cf3  \cf4 =\cf3  \cf13 j\cf4 ;\cf0 \
\cf3     	   			\cf6 \}\cf0 \
\cf3     	   		\cf6 \}\cf0 \
\cf3         		\cf13 arr\cf6 [\cf13 dex\cf6 ]\cf4 =\cf13 arr\cf6 [\cf13 i\cf6 ]\cf4 ;\cf0 \
\cf3         		\cf13 arr\cf6 [\cf13 i\cf6 ]\cf3  \cf4 =\cf3  \cf13 temp\cf4 ;\cf0 \
\cf3        \cf6 \}\cf0 \
\cf3         \cf0 \
\cf3        \cf5 System\cf4 .\cf11 out\cf4 .\cf10 println\cf6 ()\cf4 ;\cf0 \
\cf3        \cf5 System\cf4 .\cf11 out\cf4 .\cf10 println\cf6 ()\cf4 ;\cf0 \
\cf3        \cf5 System\cf4 .\cf11 out\cf4 .\cf10 println\cf6 ()\cf4 ;\cf0 \
\cf3        \cf0 \
\cf3        \cf2 for\cf6 (\cf2 int\cf3  \cf9 i\cf4 =\cf12 0\cf3  \cf4 ;\cf3  \cf13 i\cf4 <\cf13 arr\cf4 .\cf15 length\cf3  \cf4 ;\cf3  \cf13 i\cf4 ++\cf6 )\{\cf0 \
\cf3     	   		\cf2 if\cf6 (\cf13 i\cf4 <\cf13 arr\cf4 .\cf15 length\cf4 -\cf12 1\cf6 )\cf0 \
\cf3     	   			\cf5 System\cf4 .\cf11 out\cf4 .\cf10 print\cf6 (\cf13 arr\cf6 [\cf13 i\cf6 ]\cf3  \cf4 +\cf3  \cf14 ", "\cf6 )\cf4 ;\cf0 \
\cf3     	   		\cf2 else\cf0 \
\cf3     	   			\cf5 System\cf4 .\cf11 out\cf4 .\cf10 print\cf6 (\cf13 arr\cf6 [\cf13 i\cf6 ])\cf4 ;\cf0 \
\cf3        \cf6 \}\cf0 \
\cf3     	\cf0 \
\cf3     \cf6 \}\cf0 \
\pard\pardeftab720\partightenfactor0
\cf6 \}}