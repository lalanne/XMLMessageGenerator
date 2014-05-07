
#include "SimChargeableSubscriber_XmlTag.hpp"

using namespace tinyxml2;

void SimChargeableSubscriber_XmlTag::create_simChargeableSubscriber_XMLTAG(XMLDocument& doc, XMLElement* const chargeableSubscriber){
    XMLElement* simChargeableSubscriber = doc.NewElement("simChargeableSubscriber");
    imsi.create_imsi_XMLTAG(doc, simChargeableSubscriber);
    chargeableSubscriber->LinkEndChild(simChargeableSubscriber);
}

