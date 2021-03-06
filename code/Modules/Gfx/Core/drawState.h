#pragma once
//------------------------------------------------------------------------------
/**
    @class Oryol::_priv::drawState
    @ingroup _priv
    @brief bundles pre-compiled state for drawing operations
*/
#include "Resource/resourceBase.h"
#include "Gfx/Setup/DrawStateSetup.h"

namespace Oryol {
namespace _priv {

class mesh;
class programBundle;

class drawState : public resourceBase<DrawStateSetup> {
public:
    /// constructor
    drawState();
    /// destructor
    ~drawState();
    
    /// clear the object
    void clear();
    
    /// set mesh pointer
    void setMesh(mesh* msh);
    /// get mesh pointer
    mesh* getMesh() const;
    /// set program bundle pointer
    void setProgramBundle(programBundle* pb);
    /// get program bundle pointer
    programBundle* getProgramBundle() const;
    
private:
    mesh* mesh_;
    programBundle* programBundle_;
};

//------------------------------------------------------------------------------
inline mesh*
drawState::getMesh() const {
    return this->mesh_;
}

//------------------------------------------------------------------------------
inline programBundle*
drawState::getProgramBundle() const {
    return this->programBundle_;
}

} // namespace _priv
} // namespace Oryol