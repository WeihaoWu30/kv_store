#pragma once
#include "commands.hpp"
#include <variant>

namespace kv
{
   using Request = std::variant<SetCmd, GetCmd, DelCmd, VSetCmd, VSearchCmd>;
}