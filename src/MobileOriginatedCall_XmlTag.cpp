
#include "MobileOriginatedCall_XmlTag.hpp"

using namespace tinyxml2;

void MobileOriginatedCall_XmlTag::create_mobileOriginatedCall_XMLTAG(XMLDocument& doc, XMLElement* const callEventDetails){
    XMLElement* mobileOriginatedCall = doc.NewElement("mobileOriginatedCall");

    basicCallInformation.create_basicCallInformation_XMLTAG(doc, mobileOriginatedCall);
    locationInformation.create_locationInformation_XMLTAG(doc, mobileOriginatedCall);
    basicServiceUsedList.create_basicServiceUsedList_XMLTAG(doc, mobileOriginatedCall);
    operatorSpecInformation.create_operatorSpecInformation_XMLTAG(doc, mobileOriginatedCall);

    callEventDetails->LinkEndChild(mobileOriginatedCall);
}



