
#include "XMLMessageGenerator.hpp"

#include "tinyxml2.h"  

#include <iostream>
#include <vector>
#include <string>
#include <random>
#include <chrono>

using namespace std;
using namespace tinyxml2;

int main(int argc, const char *argv[]){

    vector<string> LOCALISATION_AREA{"LA1", "LA2"};

    for(auto& i:LOCALISATION_AREA) cout<<i<<endl;
    cout<<endl;

    cout<<"============================"<<endl<<endl;

    const unsigned int seed = std::chrono::system_clock::now().time_since_epoch().count();

    default_random_engine random_generator(seed);
    std::uniform_int_distribution<unsigned int> distribution_localisation_area(0,LOCALISATION_AREA.size()-1);

    const unsigned int random_loacalisation_area_index = distribution_localisation_area(random_generator);

    cout<<"localisation area: "<<LOCALISATION_AREA[random_loacalisation_area_index]<<endl;

    cout<<"+++++++++++++++++++++++++++++"<<endl<<endl;

    XMLDocument doc;

    XMLMessageGenerator generator;
    generator.create_message(doc);

    XMLPrinter printer;
    doc.Print();

    cout<<endl;

    return 0;
}
