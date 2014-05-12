
#include "XMLMessageGenerator.hpp"

#include "tinyxml2.h"  

#include <iostream>

using namespace tinyxml2;
using namespace std;


void generate_message(){
    XMLDocument doc;
    XMLMessageGenerator generator;
    generator.create_message(doc);
    XMLPrinter printer;
    doc.Print();
}

void print_error_message(){
    cerr<<"ERROR: invalid number of arguments."<<endl;
    cerr<<"usage: ./generator <number of messages>"<<endl;
}

void generate_x_number_of_messages(const unsigned int number_of_messages){
    for(unsigned int i=0; i<number_of_messages; ++i) generate_message();
}

int main(int argc, const char *argv[]){
    if(argc != 2) print_error_message();
    else generate_x_number_of_messages(atoi(argv[1]));
    
    return 0;
}
