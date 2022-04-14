#include <iostream>
#include <fstream>
#include "library/input.h"
#include "library/proses.h"
#include "library/output.h"

int main(){
	input input;
	input.cetak();
	input.toFile();

	Proses proses;
	proses.getData();
	proses.toFile();

	output output;
	output.getData();
	output.cetak();

	return 0;