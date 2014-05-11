#ifndef CELL_ID_XML_TAG_9W8HRG9WHGOWHGLIHWG
#define CELL_ID_XML_TAG_9W8HRG9WHGOWHGLIHWG

#include "CellIdGenerator.hpp"

#include "tinyxml2.h"

class CellId_XmlTag{
    public:
        void create(tinyxml2::XMLDocument& doc, tinyxml2::XMLElement* const networkLocation);

    private:
        CellIdGenerator cellIdGenerator;
};

#endif //CELL_ID_XML_TAG_9W8HRG9WHGOWHGLIHWG
