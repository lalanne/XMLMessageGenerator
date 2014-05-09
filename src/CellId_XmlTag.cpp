
#include "CellId_XmlTag.hpp"
#include "CellIdGenerator.hpp"

using namespace tinyxml2;

void CellId_XmlTag::create(XMLDocument& doc, XMLElement* const networkLocation){
    XMLElement* cellId = doc.NewElement("cellId");
    CellIdGenerator cellIdGenerator;
    XMLText* cellIdText = doc.NewText(cellIdGenerator.cellId());
    cellId->LinkEndChild(cellIdText);
    networkLocation->LinkEndChild(cellId);
}

