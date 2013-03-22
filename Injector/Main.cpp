/*
	This file is part of Injector.

    Injector is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Injector is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with Foobar.  If not, see <http://www.gnu.org/licenses/>.
*/

// Main.cpp - Entry Point of Application

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
#include <Windows.h>

#include "Syringe.h"

using namespace std;

int main (int argc, char** argv)
{
	string DLL;
	DWORD Proc;
	SetConsoleTitle(L"Injector by Joshua Kennedy");
	printf("Injector: DLL Injection Utility\nCopyright 2010-2011 Joshua Kennedy\n\n");
	cout << "DLL File: ";
	cin >> DLL;
	cout << "Process ID: ";
	cin >> Proc;
	printf("\nInjecting...");
	insertDll(Proc, DLL);
	return 0;
}
