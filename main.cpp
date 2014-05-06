#include "tinyxml2.h"  
#include <iostream>
#include <vector>
#include <string>
#include <random>
#include <chrono>

using namespace std;
using namespace tinyxml2;

int main(int argc, const char *argv[]){
    
    vector<string> CELL_ID{"cell1", "cell2", "cell3", "cell4"};
    vector<string> IMSI{"imsi1", "imsi2", "imsi3", "imsi4", "imsi5", "imsi6"};
    vector<string> LOCALISATION_AREA{"LA1", "LA2"};

    cout<<endl;
    for(auto& i:CELL_ID) cout<<i<<endl;
    cout<<endl;
    for(auto& i:IMSI) cout<<i<<endl;
    cout<<endl;
    for(auto& i:LOCALISATION_AREA) cout<<i<<endl;
    cout<<endl;

    cout<<"============================"<<endl<<endl;

    const unsigned int seed = std::chrono::system_clock::now().time_since_epoch().count();

    default_random_engine random_generator(seed);
    std::uniform_int_distribution<unsigned int> distribution_cell_id(0,CELL_ID.size()-1);
    std::uniform_int_distribution<unsigned int> distribution_imsi(0,IMSI.size()-1);
    std::uniform_int_distribution<unsigned int> distribution_localisation_area(0,LOCALISATION_AREA.size()-1);

    const unsigned int random_cell_id_index = distribution_cell_id(random_generator);
    const unsigned int random_imsi_index = distribution_imsi(random_generator);
    const unsigned int random_loacalisation_area_index = distribution_localisation_area(random_generator);

    cout<<"cell_id: "<<CELL_ID[random_cell_id_index]<<endl;
    cout<<"imsi: "<<IMSI[random_imsi_index]<<endl;
    cout<<"localisation area: "<<LOCALISATION_AREA[random_loacalisation_area_index]<<endl;

    cout<<"+++++++++++++++++++++++++++++"<<endl<<endl;

    XMLDocument doc;

    /*XML declaration*/
    XMLDeclaration * decl = doc.NewDeclaration();
    doc.LinkEndChild(decl); 

    XMLPrinter printer;
    doc.Print();

    return 0;
}
