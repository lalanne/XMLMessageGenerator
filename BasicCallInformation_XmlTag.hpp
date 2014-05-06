#ifndef BASIC_CALL_INFORMATION_XML_TAG_W8E9H9W8HF9W8HEF98WHEF9
#define BASIC_CALL_INFORMATION_XML_TAG_W8E9H9W8HF9W8HEF98WHEF9

#include "tinyxml2.h"

class BasicCallInformation_XmlTag{
    public:
        void create_basicCallInformation_XMLTAG(tinyxml2::XMLDocument& doc, tinyxml2::XMLElement* const mobileOriginatedCall);

    private:
        void create_chargeableSubscriber_XMLTAG(tinyxml2::XMLDocument& doc, tinyxml2::XMLElement* const basicCallInformation);
        void create_callEventStartTimeStamp_XMLTAG(tinyxml2::XMLDocument& doc, tinyxml2::XMLElement* const basicCallInformation);
        void create_totalCallEventDuration_XMLTAG(tinyxml2::XMLDocument& doc, tinyxml2::XMLElement* const basicCallInformation);
};

#endif //BASIC_CALL_INFORMATION_XML_TAG_W8E9H9W8HF9W8HEF98WHEF9
