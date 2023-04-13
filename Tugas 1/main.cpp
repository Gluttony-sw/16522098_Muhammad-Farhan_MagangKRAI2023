#include <iostream>
using namespace std;

// Include Class
#include "header/Company.hpp"

int main(){
    Company Company1 = Company();
    Company Company2 = Company("Farhan.inc", "Bandung", "090", "@", "IT", true);

    Company1.printInfo();
    Company2.printInfo();
}