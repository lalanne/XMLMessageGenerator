
#include "BasicCallInformation_XmlTag.hpp"

using namespace tinyxml2;

void BasicCallInformation_XmlTag::create_basicCallInformation_XMLTAG(XMLDocument& doc, XMLElement* const mobileOriginatedCall){
    XMLElement* basicCallInformation = doc.NewElement("basicCallInformation");

    chargeableSubscriber.create_chargeableSubscriber_XMLTAG(doc, basicCallInformation);
    callEventStartTimeStamp.create_callEventStartTimeStamp_XMLTAG(doc, basicCallInformation);
    totalCallEventDuration.create_totalCallEventDuration_XMLTAG(doc, basicCallInformation);

    mobileOriginatedCall->LinkEndChild(basicCallInformation);
}




