#pragma once

#include "Common.h"
#include "BWAPI.h"
#include "base/MetaType.h"

namespace UAlbertaBot
{
typedef std::vector<MetaType> MetaVector;

namespace OpeningBuildOrders
{

    MetaVector ProtossZealotRush();
    MetaVector ProtossDarkTemplarRush();
    MetaVector ProtossDragoonRush();
	MetaVector ProtossHighLevelSearch();
    MetaVector TerranMarineRush();
    MetaVector ZergLairRush();
};
}