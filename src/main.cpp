
#include "XMLMessageGenerator.hpp"

#include "tinyxml2.h"  

using namespace tinyxml2;

int main(int argc, const char *argv[]){
    const unsigned int number_of_messages = atoi(argv[1]);

    for(unsigned int i=0; i<number_of_messages; ++i){
        XMLDocument doc;
        XMLMessageGenerator generator;
        generator.create_message(doc);
        XMLPrinter printer;
        doc.Print();
    }

    return 0;
}
