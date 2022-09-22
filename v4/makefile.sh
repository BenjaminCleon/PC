#!/bin/bash

gcc -c generateur/generateur.c
gcc -c suite/suite.c -Igenerateur
gcc -c principale/app.c -Isuite -Igenerateur

gcc -o generateur/generateur.o suite/suite.o principale/app.o -o app.exe

./principale/app.exe 
