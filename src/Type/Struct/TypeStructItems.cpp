#include "./TypeStructItems.hpp"


SAS::F_ItemsBasic::F_ItemsBasic( const std::string p_ItemName , unsigned int p_ItemID , unsigned int p_ItemCount )
    : Name( std::move(p_ItemName) )
    , ID( p_ItemID )
    , Count( p_ItemCount )
{

}

