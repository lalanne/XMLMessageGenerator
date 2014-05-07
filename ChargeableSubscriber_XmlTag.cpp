
#include "ChargeableSubscriber_XmlTag.hpp"

using namespace tinyxml2;

void ChargeableSubscriber_XmlTag::create_chargeableSubscriber_XMLTAG(XMLDocument& doc, XMLElement* const basicCallInformation){
    XMLElement* chargeableSubscriber = doc.NewElement("chargeableSubscriber");
    simChargeableSubscriber.create_simChargeableSubscriber_XMLTAG(doc, chargeableSubscriber);
    basicCallInformation->LinkEndChild(chargeableSubscriber);
}

