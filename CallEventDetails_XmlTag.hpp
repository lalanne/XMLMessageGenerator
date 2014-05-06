#ifndef CALL_EVENT_DETAILS_XML_TAG_AIUEHFIUHERGIUHG876876
#define CALL_EVENT_DETAILS_XML_TAG_AIUEHFIUHERGIUHG876876

#include "tinyxml2.h"

class CallEventDetails_XmlTag{
    public:
        void create_callEventDetails_XMLTAG(tinyxml2::XMLDocument& doc, tinyxml2::XMLElement* const transferBatch);

    private:
        void create_chargeableSubscriber_XMLTAG(tinyxml2::XMLDocument& doc, tinyxml2::XMLElement* const basicCallInformation);
        void create_callEventStartTimeStamp_XMLTAG(tinyxml2::XMLDocument& doc, tinyxml2::XMLElement* const basicCallInformation);
        void create_totalCallEventDuration_XMLTAG(tinyxml2::XMLDocument& doc, tinyxml2::XMLElement* const basicCallInformation);
        void create_basicCallInformation_XMLTAG(tinyxml2::XMLDocument& doc, tinyxml2::XMLElement* const mobileOriginatedCall);
        void create_locationInformation_XMLTAG(tinyxml2::XMLDocument& doc, tinyxml2::XMLElement* const mobileOriginatedCall);
        void create_basicServiceUsedList_XMLTAG(tinyxml2::XMLDocument& doc, tinyxml2::XMLElement* const mobileOriginatedCall);
        void create_operatorSpecInformation_XMLTAG(tinyxml2::XMLDocument& doc, tinyxml2::XMLElement* const mobileOriginatedCall);
        void create_mobileOriginatedCall_XMLTAG(tinyxml2::XMLDocument& doc, tinyxml2::XMLElement* const callEventDetails);
};

#endif //CALL_EVENT_DETAILS_XML_TAG_AIUEHFIUHERGIUHG876876
