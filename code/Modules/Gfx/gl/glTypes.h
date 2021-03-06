#pragma once
//------------------------------------------------------------------------------
/**
    @class Oryol::_priv::glTypes
    @ingroup _priv
    @brief OpenGL type conversion helpers
*/
#include "Core/Types.h"
#include "Gfx/Core/Enums.h"
#include "Gfx/gl/gl_decl.h"

namespace Oryol {
namespace _priv {
    
class glTypes {
public:
    /// convert Oryol pixel format to glTexImage format
    static GLenum AsGLTexImageFormat(PixelFormat::Code c);
    /// convert Oryol pixel format to glTexImage format, this is == TexImageFormat on GLES but may be different on desktop GL
    static GLenum AsGLTexImageInternalFormat(PixelFormat::Code c);
    /// convert Oryol pixel format to glTexImage type
    static GLenum AsGLTexImageType(PixelFormat::Code c);
    /// convert Oryol pixel format to renderbuffer format
    static GLenum AsGLRenderbufferFormat(PixelFormat::Code c);
};
    
} // namespace _priv
} // namespace Oryol