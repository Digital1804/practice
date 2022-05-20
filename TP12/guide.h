#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>
#include <msclr\marshal_cppstd.h>

using namespace std;

typedef struct Worker {
	string name[3];
	double number;
	string date;
} Worker;