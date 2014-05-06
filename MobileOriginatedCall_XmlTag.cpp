
#include "MobileOriginatedCall_XmlTag.hpp"

using namespace tinyxml2;

void MobileOriginatedCall_XmlTag::create_mobileOriginatedCall_XMLTAG(XMLDocument& doc, XMLElement* const callEventDetails){
    XMLElement* mobileOriginatedCall = doc.NewElement("mobileOriginatedCall");

    basicCallInformation.create_basicCallInformation_XMLTAG(doc, mobileOriginatedCall);
    locationInformation.create_locationInformation_XMLTAG(doc, mobileOriginatedCall);

    create_basicServiceUsedList_XMLTAG(doc, mobileOriginatedCall);
    create_operatorSpecInformation_XMLTAG(doc, mobileOriginatedCall);

    callEventDetails->LinkEndChild(mobileOriginatedCall);
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


