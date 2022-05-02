#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>

using namespace std;

typedef struct Worker {
	string surname;
	string initials[2];
	double number;
	int date[3];
	bool found;
} Worker;

int search_train(System::String^ path, System::String^ sur);