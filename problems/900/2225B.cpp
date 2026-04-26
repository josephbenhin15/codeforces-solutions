{\rtf1\ansi\ansicpg1252\cocoartf2759
\cocoatextscaling0\cocoaplatform0{\fonttbl\f0\fswiss\fcharset0 Helvetica;}
{\colortbl;\red255\green255\blue255;}
{\*\expandedcolortbl;;}
\paperw11900\paperh16840\margl1440\margr1440\vieww11520\viewh8400\viewkind0
\pard\tx720\tx1440\tx2160\tx2880\tx3600\tx4320\tx5040\tx5760\tx6480\tx7200\tx7920\tx8640\pardirnatural\partightenfactor0

\f0\fs24 \cf0 #include <iostream>\
#include <string>\
using namespace std;\
\
void solve() \{\
    string s;\
    cin >> s;\
\
    long long ans = 0;\
\
    for (int i = 0; i < (int)s.size() - 1; i++) \{\
        if (s[i] == s[i + 1]) \{\
            ans++;\
        \}\
    \}\
\
    if (ans <= 2)\
        cout << "YES\\n";\
    else\
        cout << "NO\\n";\
\}\
\
int main() \{\
    ios::sync_with_stdio(false);\
    cin.tie(nullptr);\
\
    int tests;\
    cin >> tests;\
\
    while (tests--) \{\
        solve();\
    \}\
\
    return 0;\
\}}