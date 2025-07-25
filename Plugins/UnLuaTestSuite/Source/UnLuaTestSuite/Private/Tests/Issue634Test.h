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

#pragma once

#include "Issue634Test.generated.h"

USTRUCT(BlueprintTYpe)
struct FIssue634Struct : public FTableRowBase
{
    GENERATED_BODY()

    FIssue634Struct()
        : OverTime(0)
    {
    }

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString BuffID;

    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float OverTime;

    FORCEINLINE bool operator==(const FIssue634Struct& Other) const
    {
        return this->BuffID == Other.BuffID;
    }

    FORCEINLINE bool operator!=(const FIssue634Struct& Other) const
    {
        return this->BuffID != Other.BuffID;
    }
};
