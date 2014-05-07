
#include "CallEventStartTimeStamp_XmlTag.hpp"

using namespace tinyxml2;

void CallEventStartTimeStamp_XmlTag::create_callEventStartTimeStamp_XMLTAG(XMLDocument& doc, XMLElement* const basicCallInformation){
    XMLElement* callEventStartTimeStamp = doc.NewElement("callEventStartTimeStamp");
    XMLText* callEventStartTimeStampText = doc.NewText("");
    callEventStartTimeStamp->LinkEndChild(callEventStartTimeStampText);
    basicCallInformation->LinkEndChild(callEventStartTimeStamp);
}

