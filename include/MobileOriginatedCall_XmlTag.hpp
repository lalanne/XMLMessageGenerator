#ifndef MOBILE_ORIGINATED_CALL_XML_TAG_98EWHF9W8HEF98WHEF9HWF
#define MOBILE_ORIGINATED_CALL_XML_TAG_98EWHF9W8HEF98WHEF9HWF

#include "BasicCallInformation_XmlTag.hpp"
#include "LocationInformation_XmlTag.hpp"
#include "BasicServiceUsedList_XmlTag.hpp"
#include "OperatorSpecInformation_XmlTag.hpp"

#include "tinyxml2.h"

class MobileOriginatedCall_XmlTag{
    public:
        void create(tinyxml2::XMLDocument& doc, tinyxml2::XMLElement* const callEventDetails);

    private:
        BasicCallInformation_XmlTag basicCallInformation;
        LocationInformation_XmlTag locationInformation;
        BasicServiceUsedList_XmlTag basicServiceUsedList;
        OperatorSpecInformation_XmlTag operatorSpecInformation;
};

#endif //MOBILE_ORIGINATED_CALL_XML_TAG_98EWHF9W8HEF98WHEF9HWF
