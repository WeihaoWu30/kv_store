#pragma once
#include "../common.hpp"

namespace kv
{
   enum class CommandType
   {
      SET,
      GET,
      DEL,
      VSET,
      VSEARCH
   };

   struct SetCmd
   {
      Key key;
      Value value;
   };

   struct GetCmd
   {
      Key key;
   };

   struct DelCmd
   {
      Key key;
   };

   struct VSetCmd
   {
      Key key;
      Vector embedding;
   };

   struct VSearchCmd
   {
      Vector query;
      int k;
   };
}