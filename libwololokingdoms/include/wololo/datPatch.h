#ifndef DATPATCH_H
#define DATPATCH_H
#include "genie/dat/DatFile.h"
#include <map>

namespace wololo {

struct DatPatch {
    void (*patch)(genie::DatFile*);
	std::string name;
};

}



#endif // DATPATCH_H
