#ifndef BASIC_CALL_INFORMATION_XML_TAG_W8E9H9W8HF9W8HEF98WHEF9
#define BASIC_CALL_INFORMATION_XML_TAG_W8E9H9W8HF9W8HEF98WHEF9

#include "ChargeableSubscriber_XmlTag.hpp"
#include "CallEventStartTimeStamp_XmlTag.hpp"
#include "TotalCallEventDuration_XmlTag.hpp"

#include "tinyxml2.h"

class BasicCallInformation_XmlTag{
    public:
        void create(tinyxml2::XMLDocument& doc, tinyxml2::XMLElement* const mobileOriginatedCall);

    private:
        ChargeableSubscriber_XmlTag chargeableSubscriber;
        CallEventStartTimeStamp_XmlTag callEventStartTimeStamp;
        TotalCallEventDuration_XmlTag totalCallEventDuration;

};

#endif //BASIC_CALL_INFORMATION_XML_TAG_W8E9H9W8HF9W8HEF98WHEF9
