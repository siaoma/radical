/******************************************************************************
 * Copyright (c) 2016 Sergey Alexandrov
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to
 * deal in the Software without restriction, including without limitation the
 * rights to use, copy, modify, merge, publish, distribute, sublicense, and/or
 * sell copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 ******************************************************************************/

#pragma once

#include <string>
#include <functional>
#include <initializer_list>

#include <opencv2/core/core.hpp>

namespace utils {

class Check {
 public:
  Check(const std::string& name, cv::InputArray m);

  const Check& notEmpty() const;

  const Check& hasSize(cv::Size size) const;

  const Check& hasSize(int width, int height) const;

  const Check& hasSize(int total) const;

  const Check& hasType(int type) const;

  const Check& hasType(std::initializer_list<int> types) const;

  const Check& hasChannels(int channels) const;

 private:
  std::string name_;
  std::reference_wrapper<const cv::_InputArray> m_;
};

}  // namespace utils
