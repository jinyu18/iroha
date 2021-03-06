/*
Copyright Soramitsu Co., Ltd. 2016 All Rights Reserved.

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

     http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.
*/

#ifndef __LOGGER_HPP_
#define __LOGGER_HPP_

#include <string>
#include <iostream>

namespace logger{

  enum class LogLevel{
    DEBUG,
    INFO,
    WARNING,
    ERROR,
    FITAL
  };

  const LogLevel LOG_LEVEL = LogLevel::DEBUG;

  void debug(
    const std::string &name,
    const std::string &message,
    std::ostream &out = std::cout);

  void info(
    const std::string &name,
    const std::string &message,
    std::ostream &out = std::cout);

  void warning(
    const std::string &name,
    const std::string &message,
    std::ostream &out = std::cout);

  void error(
    const std::string &name,
    const std::string &message,
    std::ostream &out = std::cout);

  void fital(
    const std::string &name,
    const std::string &message,
    std::ostream& out = std::cout);

};
#endif
