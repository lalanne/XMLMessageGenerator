#include "tinyxml2.h"  
#include <iostream>
#include <vector>
#include <string>
#include <random>
#include <chrono>

using namespace std;
using namespace tinyxml2;

void create_batchControlInfo_XMLTAG(XMLDocument& doc, XMLElement* const transferBatch){
    XMLElement* batchControlInfo = doc.NewElement("batchControlInfo");  
    XMLElement* sender = doc.NewElement("sender");  
    XMLText* senderText = doc.NewText("");
    sender->LinkEndChild(senderText);
	batchControlInfo->LinkEndChild(sender);
	transferBatch->LinkEndChild(batchControlInfo);
}

void create_accountingInfo_XMLTAG(XMLDocument& doc, XMLElement* const transferBatch){
    XMLElement* accountingInfo = doc.NewElement("accountingInfo");  
    XMLElement* tapDecimalPlaces = doc.NewElement("tapDecimalPlaces");
    XMLText* tapDecimalPlacesText = doc.NewText("");
    tapDecimalPlaces->LinkEndChild(tapDecimalPlacesText);
	accountingInfo->LinkEndChild(tapDecimalPlaces);
	transferBatch->LinkEndChild(accountingInfo);
}

void create_message(XMLDocument& doc){
    /*XML declaration*/
    XMLDeclaration* decl = doc.NewDeclaration();
    doc.LinkEndChild(decl); 

    XMLElement* dataInterChange = doc.NewElement("DataInterChange");  
    XMLElement* transferBatch = doc.NewElement("transferBatch");  

    create_batchControlInfo_XMLTAG(doc, transferBatch);
    create_accountingInfo_XMLTAG(doc, transferBatch);

    /*networkInfo*/
    XMLElement* networkInfo = doc.NewElement("networkInfo");  
    XMLText* networkInfoText = doc.NewText("");
    networkInfo->LinkEndChild(networkInfoText);
	transferBatch->LinkEndChild(networkInfo);

    /*callEventDetails*/
    XMLElement* callEventDetails = doc.NewElement("callEventDetails");  
    XMLText* callEventDetailsText = doc.NewText("");
    callEventDetails->LinkEndChild(callEventDetailsText);
	transferBatch->LinkEndChild(callEventDetails);

    /*auditControlInfo*/
    XMLElement* auditControlInfo = doc.NewElement("auditControlInfo");  
    XMLText* auditControlInfoText = doc.NewText("");
    auditControlInfo->LinkEndChild(auditControlInfoText);
	transferBatch->LinkEndChild(auditControlInfo);
    

	dataInterChange->LinkEndChild(transferBatch);
	doc.LinkEndChild(dataInterChange);
}

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
    create_message(doc);

    XMLPrinter printer;
    doc.Print();

    cout<<endl;

    return 0;
}
