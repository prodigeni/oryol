#pragma once
//------------------------------------------------------------------------------
/**
    @class Oryol::_priv::texture
    @ingroup _priv
    @brief texture frontend class
    
    A texture object can be a normal 2D, 3D or cube texture, as well
    as a render target with optional depth buffer.
*/
#if ORYOL_OPENGL
#include "Gfx/gl/glTexture.h"
namespace Oryol {
namespace _priv {
class texture : public glTexture { };
} }
#else
#error "Target platform not yet supported!"
#endif



