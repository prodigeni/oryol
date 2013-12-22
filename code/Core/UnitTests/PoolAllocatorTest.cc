//------------------------------------------------------------------------------
//  PoolAllocatorTest.cc
//  Test pool allocator functionality and performance.
//------------------------------------------------------------------------------
#include "Pre.h"
#include "UnitTest++/src/unittest++.h"
#include "Core/Log.h"
#include "Core/Types.h"
#include "Core/Macros.h"
#include "Core/RefCounted.h"
#include "Core/Ptr.h"
#include "Core/Memory/poolAllocator.h"

using namespace Oryol;
using namespace Core;
using namespace Memory;

TEST(PoolAllocator) {

    // an allocator with a pool size of one
    poolAllocator<RefCounted, 1> allocatorOne;
    
    // allocating and releasing the same object twice should return the same pointer
    RefCounted* obj = allocatorOne.Create();
    CHECK(0 != obj);
    CHECK(obj->GetRefCount() == 0);
    allocatorOne.Destroy(obj);
    
    RefCounted* obj1 = allocatorOne.Create();
    CHECK(0 != obj1);
    CHECK(obj == obj1);
    allocatorOne.Destroy(obj1);
}