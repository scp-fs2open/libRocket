#pragma once

#include "lua.hpp"

namespace Rocket {
namespace Core {
namespace Lua {

class ROCKETCORE_API LuaSystemInterface {
  public:
	virtual ~LuaSystemInterface() = default;

	virtual void PrepareFunction(lua_State* L, int funcIdx, Element* context) = 0;

	virtual void ReportError(lua_State* L, const String& location) = 0;

    virtual int ErrorHandler(lua_State* L) = 0;
};

} // namespace Lua
} // namespace Core
} // namespace Rocket
