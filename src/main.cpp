
#include "XMLMessageGenerator.hpp"

#include "tinyxml2.h"  

#include <iostream>

using namespace tinyxml2;
using namespace std;

const unsigned int CORRECT_NUMBER_OF_ARGUMENTS = 2;
const unsigned int NUMBER_OF_MESSAGES_POSITION = 1;

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
    if(argc != CORRECT_NUMBER_OF_ARGUMENTS) print_error_message();
    else generate_x_number_of_messages(atoi(argv[NUMBER_OF_MESSAGES_POSITION]));
    
    return 0;
}
