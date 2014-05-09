
#include "XMLMessageGenerator.hpp"

#include "tinyxml2.h"  

using namespace std;
using namespace tinyxml2;

int main(int argc, const char *argv[]){
    XMLDocument doc;

    XMLMessageGenerator generator;
    generator.create_message(doc);

    XMLPrinter printer;
    doc.Print();

    return 0;
}
