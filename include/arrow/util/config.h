// Licensed to the Apache Software Foundation (ASF) under one
// or more contributor license agreements.  See the NOTICE file
// distributed with this work for additional information
// regarding copyright ownership.  The ASF licenses this file
// to you under the Apache License, Version 2.0 (the
// "License"); you may not use this file except in compliance
// with the License.  You may obtain a copy of the License at
//
//   http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing,
// software distributed under the License is distributed on an
// "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
// KIND, either express or implied.  See the License for the
// specific language governing permissions and limitations
// under the License.

#define ARROW_VERSION_MAJOR 4
#define ARROW_VERSION_MINOR 0
#define ARROW_VERSION_PATCH 0
#define ARROW_VERSION ((ARROW_VERSION_MAJOR * 1000) + ARROW_VERSION_MINOR) * 1000 + ARROW_VERSION_PATCH

#define ARROW_VERSION_STRING "4.0.0"

#define ARROW_SO_VERSION "400"
#define ARROW_FULL_SO_VERSION "400.0.0"

#define ARROW_CXX_COMPILER_ID "GNU"
#define ARROW_CXX_COMPILER_VERSION "9.3.0"
#define ARROW_CXX_COMPILER_FLAGS "-fvisibility-inlines-hidden -std=c++17 -fmessage-length=0 -march=nocona -mtune=haswell -ftree-vectorize -fPIC -fstack-protector-strong -fno-plt -O2 -ffunction-sections -pipe -isystem /home/matchstix/anaconda3/envs/stock_predictor/include -fdebug-prefix-map=/home/conda/feedstock_root/build_artifacts/arrow-cpp-ext_1619593364969/work=/usr/local/src/conda/arrow-cpp-4.0.0 -fdebug-prefix-map=/home/matchstix/anaconda3/envs/stock_predictor=/usr/local/src/conda-prefix -fdiagnostics-color=always -fuse-ld=gold -O3 -DNDEBUG"

#define ARROW_GIT_ID "03e6666fd053433cc732aa7709bfc051e5fa6f30"
#define ARROW_GIT_DESCRIPTION ""

#define ARROW_PACKAGE_KIND ""

#define ARROW_COMPUTE
#define ARROW_CSV
#define ARROW_DATASET
#define ARROW_FILESYSTEM
#define ARROW_FLIGHT
#define ARROW_IPC
#define ARROW_JSON

#define ARROW_S3
#define ARROW_USE_NATIVE_INT128

#define GRPCPP_PP_INCLUDE
