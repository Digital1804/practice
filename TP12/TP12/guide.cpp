#include "guide.h"
#include <msclr\marshal_cppstd.h>

using namespace std;

Worker* worker;

int search_train(System::String^ path, System::String^ sur) {
	worker = new Worker[6];
	Worker* nul = NULL;
	msclr::interop::marshal_context context;
	msclr::interop::marshal_context context1;
	string way = context.marshal_as<std::string>(path);
	string fam = context1.marshal_as<std::string>(sur);
	string end;
	ifstream file;
	file.open(way);
	for (int i = 0; i < 6; i++) {
		getline(file, worker[i].surname, ' ');
		getline(file, worker[i].initials[0], ' ');
		getline(file, worker[i].initials[1], ' ');
		file >> worker[i].number >> worker[i].date[0] >> worker[i].date[1] >> worker[i].date[2] >> end;
		worker[i].found = 0;
	}
	for (int i = 0; i < 6; i++) {
		if ((worker[i].surname == fam) && (worker[i].found == 0)) {
			worker[i].found = 1;
			return i;
		}
	}
	return -1;
}

void found_to_zero() {
	for (int i = 0; i < 6; i++)
		if (worker[i].found == 1)	worker[i].found = 0;
}

