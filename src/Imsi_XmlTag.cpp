
#include "Imsi_XmlTag.hpp"

#include <string>

using namespace tinyxml2;
using namespace std;

void Imsi_XmlTag::create_imsi_XMLTAG(XMLDocument& doc, XMLElement* const simChargeableSubscriber){
    XMLElement* imsi = doc.NewElement("imsi");
    ImsiGenerator imsiGenerator;

    XMLText* imsiText = doc.NewText(imsiGenerator.imsi().c_str());
    imsi->LinkEndChild(imsiText);
    simChargeableSubscriber->LinkEndChild(imsi);
}

