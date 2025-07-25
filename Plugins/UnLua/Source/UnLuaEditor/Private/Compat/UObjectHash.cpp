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

#include "UObject/UObjectHash.h"

#if ENGINE_MAJOR_VERSION <= 4 && ENGINE_MINOR_VERSION < 26
void ForEachObjectWithPackage(const class UPackage* Package, TFunctionRef<bool(UObject*)> Operation, bool bIncludeNestedObjects, EObjectFlags ExclusionFlags, EInternalObjectFlags ExclusionInternalFlags)
{
    check(Package != nullptr);
    auto WrappedOperation = [Operation](UObject* Obj) { Operation(Obj); };
    ForEachObjectWithOuter(Package, WrappedOperation, bIncludeNestedObjects, ExclusionFlags, ExclusionInternalFlags);
}
#endif
