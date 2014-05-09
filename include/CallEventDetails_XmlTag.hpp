#ifndef CALL_EVENT_DETAILS_XML_TAG_AIUEHFIUHERGIUHG876876
#define CALL_EVENT_DETAILS_XML_TAG_AIUEHFIUHERGIUHG876876

#include "MobileOriginatedCall_XmlTag.hpp"

#include "tinyxml2.h"

class CallEventDetails_XmlTag{
    public:
        void create(tinyxml2::XMLDocument& doc, tinyxml2::XMLElement* const transferBatch);

    private:
        void mobileOriginatedCallGenerator(tinyxml2::XMLDocument& doc, tinyxml2::XMLElement* const transferBatch);

    private:
        MobileOriginatedCall_XmlTag mobileOriginatedCall;
};

#endif //CALL_EVENT_DETAILS_XML_TAG_AIUEHFIUHERGIUHG876876
