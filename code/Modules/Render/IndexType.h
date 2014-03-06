#pragma once
//------------------------------------------------------------------------------
/**
    @class Oryol::Render::IndexType
    @brief selects 16- or 32-bit indices
*/
#include "Core/Types.h"

namespace Oryol {
namespace Render {
    
class IndexType {
public:
    /// type enum
    enum Code {
        Index16 = 0,        ///> 16-bit indices
        Index32,            ///> 32-bit indices
        
        NumIndexTypes,      ///> number of index types
        InvalidIndexType,   ///> the invalid index type value
    };
    
    /// convert to string
    static const char* ToString(Code c);
    /// convert from string
    static Code FromString(const char* str);
    /// get byte size of index type
    static int32 ByteSize(IndexType::Code c);
};
    
} // namespace Render
} // namespace Oryol
 