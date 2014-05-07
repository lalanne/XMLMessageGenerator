
#include "SimChargeableSubscriber_XmlTag.hpp"

using namespace tinyxml2;

void SimChargeableSubscriber_XmlTag::create_simChargeableSubscriber_XMLTAG(XMLDocument& doc, XMLElement* const chargeableSubscriber){
    XMLElement* simChargeableSubscriber = doc.NewElement("simChargeableSubscriber");
    XMLText* simChargeableSubscriberText = doc.NewText("");
    simChargeableSubscriber->LinkEndChild(simChargeableSubscriberText);
    chargeableSubscriber->LinkEndChild(simChargeableSubscriber);
}

