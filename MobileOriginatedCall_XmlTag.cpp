
#include "MobileOriginatedCall_XmlTag.hpp"

using namespace tinyxml2;

void MobileOriginatedCall_XmlTag::create_mobileOriginatedCall_XMLTAG(XMLDocument& doc, XMLElement* const callEventDetails){
    XMLElement* mobileOriginatedCall = doc.NewElement("mobileOriginatedCall");

    create_basicCallInformation_XMLTAG(doc, mobileOriginatedCall);
    create_locationInformation_XMLTAG(doc, mobileOriginatedCall);
    create_basicServiceUsedList_XMLTAG(doc, mobileOriginatedCall);
    create_operatorSpecInformation_XMLTAG(doc, mobileOriginatedCall);

    callEventDetails->LinkEndChild(mobileOriginatedCall);
}

void MobileOriginatedCall_XmlTag::create_chargeableSubscriber_XMLTAG(XMLDocument& doc, XMLElement* const basicCallInformation){
    XMLElement* chargeableSubscriber = doc.NewElement("chargeableSubscriber");
    XMLText* chargeableSubscriberText = doc.NewText("");
    chargeableSubscriber->LinkEndChild(chargeableSubscriberText);
    basicCallInformation->LinkEndChild(chargeableSubscriber);
}

void MobileOriginatedCall_XmlTag::create_callEventStartTimeStamp_XMLTAG(XMLDocument& doc, XMLElement* const basicCallInformation){
    XMLElement* callEventStartTimeStamp = doc.NewElement("callEventStartTimeStamp");
    XMLText* callEventStartTimeStampText = doc.NewText("");
    callEventStartTimeStamp->LinkEndChild(callEventStartTimeStampText);
    basicCallInformation->LinkEndChild(callEventStartTimeStamp);
}

void MobileOriginatedCall_XmlTag::create_totalCallEventDuration_XMLTAG(XMLDocument& doc, XMLElement* const basicCallInformation){
    XMLElement* totalCallEventDuration = doc.NewElement("totalCallEventDuration");
    XMLText* totalCallEventDurationText = doc.NewText("");
    totalCallEventDuration->LinkEndChild(totalCallEventDurationText);
    basicCallInformation->LinkEndChild(totalCallEventDuration);
}

void MobileOriginatedCall_XmlTag::create_basicCallInformation_XMLTAG(XMLDocument& doc, XMLElement* const mobileOriginatedCall){
    XMLElement* basicCallInformation = doc.NewElement("basicCallInformation");

    create_chargeableSubscriber_XMLTAG(doc, basicCallInformation);
    create_callEventStartTimeStamp_XMLTAG(doc, basicCallInformation);
    create_totalCallEventDuration_XMLTAG(doc, basicCallInformation);

    mobileOriginatedCall->LinkEndChild(basicCallInformation);
}

void MobileOriginatedCall_XmlTag::create_locationInformation_XMLTAG(XMLDocument& doc, XMLElement* const mobileOriginatedCall){
    XMLElement* locationInformation = doc.NewElement("locationInformation");
    XMLText* locationInformationText = doc.NewText("");
    locationInformation->LinkEndChild(locationInformationText);
    mobileOriginatedCall->LinkEndChild(locationInformation);
}

void MobileOriginatedCall_XmlTag::create_basicServiceUsedList_XMLTAG(XMLDocument& doc, XMLElement* const mobileOriginatedCall){
    XMLElement* basicServiceUsedList = doc.NewElement("basicServiceUsedList");
    XMLText* basicServiceUsedListText = doc.NewText("");
    basicServiceUsedList->LinkEndChild(basicServiceUsedListText);
    mobileOriginatedCall->LinkEndChild(basicServiceUsedList);
}

void MobileOriginatedCall_XmlTag::create_operatorSpecInformation_XMLTAG(XMLDocument& doc, XMLElement* const mobileOriginatedCall){
    XMLElement* operatorSpecInformation = doc.NewElement("operatorSpecInformation");
    XMLText* operatorSpecInformationText = doc.NewText("");
    operatorSpecInformation->LinkEndChild(operatorSpecInformationText);
    mobileOriginatedCall->LinkEndChild(operatorSpecInformation);
}


