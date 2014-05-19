#ifndef CELL_ID_XML_TAG_9W8HRG9WHGOWHGLIHWG
#define CELL_ID_XML_TAG_9W8HRG9WHGOWHGLIHWG

#include "Generator.hpp"
#include "CellIdContainer.hpp"

#include "tinyxml2.h"

class CellId_XmlTag{
    public:
        void create(tinyxml2::XMLDocument& doc, tinyxml2::XMLElement* const networkLocation);

    private:
        Generator<CellIdContainer> cellIdGenerator;
};

#endif //CELL_ID_XML_TAG_9W8HRG9WHGOWHGLIHWG
