#include "./TypeStructSkill.hpp"

SAS::F_SkillBasic::F_SkillBasic( const std::string p_SkillName , unsigned int p_SkillID , unsigned int p_SkillCount )
    : Name( std::move(p_SkillName) )
    , ID( p_SkillID )
    , Count( p_SkillCount )
{

}
