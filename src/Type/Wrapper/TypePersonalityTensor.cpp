#include "./TypePersonalityTensor.hpp"

SAS::PersonalityTensor::PersonalityTensor( const int p_EmbeddingDimension )
    : m_PersonalityTensor( p_EmbeddingDimension , 0.0f)
    , m_PersonalityWeightTensor( p_EmbeddingDimension , 0.0f )
{

}