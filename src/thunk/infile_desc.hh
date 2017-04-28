/* -*-mode:c++; tab-width: 2; indent-tabs-mode: nil; c-basic-offset: 2 -*- */

#pragma once

#include <string>
#include <cajun/json/elements.h>

class InFileDescriptor
{
private:

  std::string filename_;
  std::string hash_;
  int order_;

  static std::string compute_hash( std::string filename );

  void is_thunk();

  void get_thunk_order();

public:

  // TODO : This currently does not check the order (if it is a thunk or not)
  InFileDescriptor( std::string filename );

  ~InFileDescriptor();

  json::Object to_json();
};