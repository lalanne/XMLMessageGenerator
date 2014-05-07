
#include "Imsi_XmlTag.hpp"

using namespace tinyxml2;

void Imsi_XmlTag::create_imsi_XMLTAG(XMLDocument& doc, XMLElement* const simChargeableSubscriber){
    XMLElement* imsi = doc.NewElement("imsi");
    XMLText* imsiText = doc.NewText("");
    imsi->LinkEndChild(imsiText);
    simChargeableSubscriber->LinkEndChild(imsi);
}

