// Copyright (c) 2019 PaddlePaddle Authors. All Rights Reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#pragma once
#include "paddle/fluid/lite/core/tensor.h"
#include "paddle/fluid/lite/utils/all.h"

/*
 * This file contains all the argument parameter data structure for operators.
 */

namespace paddle {
namespace lite {
namespace operators {

struct FcParam {
  Tensor* input{};
  Tensor* w{};
  Tensor* bias{};
  Tensor* output{};
  DDim in_mat_dims;
  int in_num_col_dims{0};
};

struct ReluParam {
  Tensor* input{};
  Tensor* output{};
};

using param_t = variant<FcParam, ReluParam>;

}  // namespace operators
}  // namespace lite
}  // namespace paddle
