#ifndef CELLID_GENERATOR_QWGE87QWGEF87GWEF
#define CELLID_GENERATOR_QWGE87QWGEF87GWEF

#include <string>
#include <vector>

class CellIdContainer{
    public:
        unsigned int size() const;
        const std::string& operator[](const unsigned int i) const;

    private:
        std::vector<std::string> cellIds{"37107", 
                                        "4969"};
};

#endif //CELLID_GENERATOR_QWGE87QWGEF87GWEF
