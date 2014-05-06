
#include "BasicCallInformation_XmlTag.hpp"

using namespace tinyxml2;

void BasicCallInformation_XmlTag::create_basicCallInformation_XMLTAG(XMLDocument& doc, XMLElement* const mobileOriginatedCall){
    XMLElement* basicCallInformation = doc.NewElement("basicCallInformation");

    create_chargeableSubscriber_XMLTAG(doc, basicCallInformation);
    create_callEventStartTimeStamp_XMLTAG(doc, basicCallInformation);
    create_totalCallEventDuration_XMLTAG(doc, basicCallInformation);

    mobileOriginatedCall->LinkEndChild(basicCallInformation);
}

void BasicCallInformation_XmlTag::create_chargeableSubscriber_XMLTAG(XMLDocument& doc, XMLElement* const basicCallInformation){
    XMLElement* chargeableSubscriber = doc.NewElement("chargeableSubscriber");
    XMLText* chargeableSubscriberText = doc.NewText("");
    chargeableSubscriber->LinkEndChild(chargeableSubscriberText);
    basicCallInformation->LinkEndChild(chargeableSubscriber);
}

void BasicCallInformation_XmlTag::create_callEventStartTimeStamp_XMLTAG(XMLDocument& doc, XMLElement* const basicCallInformation){
    XMLElement* callEventStartTimeStamp = doc.NewElement("callEventStartTimeStamp");
    XMLText* callEventStartTimeStampText = doc.NewText("");
    callEventStartTimeStamp->LinkEndChild(callEventStartTimeStampText);
    basicCallInformation->LinkEndChild(callEventStartTimeStamp);
}

void BasicCallInformation_XmlTag::create_totalCallEventDuration_XMLTAG(XMLDocument& doc, XMLElement* const basicCallInformation){
    XMLElement* totalCallEventDuration = doc.NewElement("totalCallEventDuration");
    XMLText* totalCallEventDurationText = doc.NewText("");
    totalCallEventDuration->LinkEndChild(totalCallEventDurationText);
    basicCallInformation->LinkEndChild(totalCallEventDuration);
}


