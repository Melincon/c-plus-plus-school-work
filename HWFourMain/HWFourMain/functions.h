#include <iostream>
#include <string>
using namespace std;
#include "taxicab.h"
#include "carClass.h"
using namespace taxic;
double yearlyfaremoney(taxicab taxi);
double yearlyprofit(double cpg, taxicab taxi);
void load(string fn, taxicab &taxi);
void store(string fn, taxicab taxi);
void show(taxicab taxi);
