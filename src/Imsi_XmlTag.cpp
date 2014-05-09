
#include "Imsi_XmlTag.hpp"

using namespace tinyxml2;

void Imsi_XmlTag::create_imsi_XMLTAG(XMLDocument& doc, XMLElement* const simChargeableSubscriber){
    XMLElement* imsi = doc.NewElement("imsi");
    ImsiGenerator imsiGenerator;

    XMLText* imsiText = doc.NewText(imsiGenerator.imsi());
    imsi->LinkEndChild(imsiText);
    simChargeableSubscriber->LinkEndChild(imsi);
}

