#ifndef MOBILE_ORIGINATED_CALL_XML_TAG_98EWHF9W8HEF98WHEF9HWF
#define MOBILE_ORIGINATED_CALL_XML_TAG_98EWHF9W8HEF98WHEF9HWF

#include "tinyxml2.h"

class MobileOriginatedCall_XmlTag{
    public:
        void create_mobileOriginatedCall_XMLTAG(tinyxml2::XMLDocument& doc, tinyxml2::XMLElement* const callEventDetails);

    private:
        void create_chargeableSubscriber_XMLTAG(tinyxml2::XMLDocument& doc, tinyxml2::XMLElement* const basicCallInformation);
        void create_callEventStartTimeStamp_XMLTAG(tinyxml2::XMLDocument& doc, tinyxml2::XMLElement* const basicCallInformation);
        void create_totalCallEventDuration_XMLTAG(tinyxml2::XMLDocument& doc, tinyxml2::XMLElement* const basicCallInformation);
        void create_basicCallInformation_XMLTAG(tinyxml2::XMLDocument& doc, tinyxml2::XMLElement* const mobileOriginatedCall);
        void create_locationInformation_XMLTAG(tinyxml2::XMLDocument& doc, tinyxml2::XMLElement* const mobileOriginatedCall);
        void create_basicServiceUsedList_XMLTAG(tinyxml2::XMLDocument& doc, tinyxml2::XMLElement* const mobileOriginatedCall);
        void create_operatorSpecInformation_XMLTAG(tinyxml2::XMLDocument& doc, tinyxml2::XMLElement* const mobileOriginatedCall);
};

#endif //MOBILE_ORIGINATED_CALL_XML_TAG_98EWHF9W8HEF98WHEF9HWF
