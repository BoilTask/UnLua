// Tencent is pleased to support the open source community by making UnLua available.
// 
// Copyright (C) 2019 Tencent. All rights reserved.
//
// Licensed under the MIT License (the "License"); 
// you may not use this file except in compliance with the License. You may obtain a copy of the License at
//
// http://opensource.org/licenses/MIT
//
// Unless required by applicable law or agreed to in writing, 
// software distributed under the License is distributed on an "AS IS" BASIS, 
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. 
// See the License for the specific language governing permissions and limitations under the License.

#include "UnLuaDelegates.h"

FUnLuaDelegates::FOnLuaStateCreated FUnLuaDelegates::OnLuaStateCreated;
FUnLuaDelegates::FOnLuaContextInitialized FUnLuaDelegates::OnLuaContextInitialized;
FUnLuaDelegates::FOnLuaContextCleanup FUnLuaDelegates::OnPreLuaContextCleanup;
FUnLuaDelegates::FOnLuaContextCleanup FUnLuaDelegates::OnPostLuaContextCleanup;
FUnLuaDelegates::FOnPreStaticallyExport FUnLuaDelegates::OnPreStaticallyExport;
FUnLuaDelegates::FOnObjectBinded FUnLuaDelegates::OnObjectBinded;
FUnLuaDelegates::FOnObjectUnbinded FUnLuaDelegates::OnObjectUnbinded;
FUnLuaDelegates::FGenericLuaDelegate FUnLuaDelegates::HotfixLua;
FUnLuaDelegates::FGenericLuaDelegate FUnLuaDelegates::ReportLuaCallError;
FUnLuaDelegates::FGenericLuaDelegate FUnLuaDelegates::ConfigureLuaGC;
FUnLuaDelegates::FCustomLuaFileLoader FUnLuaDelegates::CustomLoadLuaFile;
