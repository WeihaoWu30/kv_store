#pragma once
#include <string>
#include <vector>
#include <variant>
#include "../common.hpp"

namespace kv
{
   struct OkResponse
   {
   };

   struct ErrorResponse
   {
      std::string message;
   };

   struct StringResponse
   {
      Value value;
   };

   struct VectorSearchResponse
   {
      std::vector<std::pair<Key, float>> results;
   };

   using Response = std::variant<OkResponse, ErrorResponse, StringResponse, VectorSearchResponse>;
}