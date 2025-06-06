/*
 *
 *    Copyright (c) 2022 Project CHIP Authors
 *
 *    Licensed under the Apache License, Version 2.0 (the "License");
 *    you may not use this file except in compliance with the License.
 *    You may obtain a copy of the License at
 *
 *        http://www.apache.org/licenses/LICENSE-2.0
 *
 *    Unless required by applicable law or agreed to in writing, software
 *    distributed under the License is distributed on an "AS IS" BASIS,
 *    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *    See the License for the specific language governing permissions and
 *    limitations under the License.
 */

// THIS FILE IS GENERATED BY ZAP
// This file is generated from clusters-Commands.h.zapt

#pragma once

#include <app/data-model/DecodableList.h>
#include <app/data-model/List.h>
#include <app/data-model/NullObject.h>
#include <app/data-model/Nullable.h>
#include <lib/core/DataModelTypes.h>
#include <lib/core/Optional.h>
#include <lib/core/TLV.h>
#include <lib/support/BitMask.h>

#include <clusters/shared/Enums.h>
#include <clusters/shared/Structs.h>

#include <clusters/ZoneManagement/ClusterId.h>
#include <clusters/ZoneManagement/CommandIds.h>
#include <clusters/ZoneManagement/Enums.h>
#include <clusters/ZoneManagement/Structs.h>

#include <cstdint>

namespace chip {
namespace app {
namespace Clusters {
namespace ZoneManagement {
namespace Commands {
// Forward-declarations so we can reference these later.

namespace CreateTwoDCartesianZone {
struct Type;
struct DecodableType;
} // namespace CreateTwoDCartesianZone

namespace CreateTwoDCartesianZoneResponse {
struct Type;
struct DecodableType;
} // namespace CreateTwoDCartesianZoneResponse

namespace UpdateTwoDCartesianZone {
struct Type;
struct DecodableType;
} // namespace UpdateTwoDCartesianZone

namespace GetTwoDCartesianZone {
struct Type;
struct DecodableType;
} // namespace GetTwoDCartesianZone

namespace GetTwoDCartesianZoneResponse {
struct Type;
struct DecodableType;
} // namespace GetTwoDCartesianZoneResponse

namespace RemoveZone {
struct Type;
struct DecodableType;
} // namespace RemoveZone

} // namespace Commands

namespace Commands {
namespace CreateTwoDCartesianZone {
enum class Fields : uint8_t
{
    kZone = 0,
};

struct Type
{
public:
    // Use GetCommandId instead of commandId directly to avoid naming conflict with CommandIdentification in ExecutionOfACommand
    static constexpr CommandId GetCommandId() { return Commands::CreateTwoDCartesianZone::Id; }
    static constexpr ClusterId GetClusterId() { return Clusters::ZoneManagement::Id; }
    static constexpr bool kIsFabricScoped = false;

    Structs::TwoDCartesianZoneStruct::Type zone;

    CHIP_ERROR Encode(TLV::TLVWriter & aWriter, TLV::Tag aTag) const;

    using ResponseType = Clusters::ZoneManagement::Commands::CreateTwoDCartesianZoneResponse::DecodableType;

    static constexpr bool MustUseTimedInvoke() { return false; }
};

struct DecodableType
{
public:
    static constexpr CommandId GetCommandId() { return Commands::CreateTwoDCartesianZone::Id; }
    static constexpr ClusterId GetClusterId() { return Clusters::ZoneManagement::Id; }
    static constexpr bool kIsFabricScoped = false;

    Structs::TwoDCartesianZoneStruct::DecodableType zone;

    CHIP_ERROR Decode(TLV::TLVReader & reader);
};
}; // namespace CreateTwoDCartesianZone
namespace CreateTwoDCartesianZoneResponse {
enum class Fields : uint8_t
{
    kZoneID = 0,
};

struct Type
{
public:
    // Use GetCommandId instead of commandId directly to avoid naming conflict with CommandIdentification in ExecutionOfACommand
    static constexpr CommandId GetCommandId() { return Commands::CreateTwoDCartesianZoneResponse::Id; }
    static constexpr ClusterId GetClusterId() { return Clusters::ZoneManagement::Id; }
    static constexpr bool kIsFabricScoped = false;

    uint16_t zoneID = static_cast<uint16_t>(0);

    CHIP_ERROR Encode(TLV::TLVWriter & aWriter, TLV::Tag aTag) const;

    using ResponseType = DataModel::NullObjectType;

    static constexpr bool MustUseTimedInvoke() { return false; }
};

struct DecodableType
{
public:
    static constexpr CommandId GetCommandId() { return Commands::CreateTwoDCartesianZoneResponse::Id; }
    static constexpr ClusterId GetClusterId() { return Clusters::ZoneManagement::Id; }
    static constexpr bool kIsFabricScoped = false;

    uint16_t zoneID = static_cast<uint16_t>(0);

    CHIP_ERROR Decode(TLV::TLVReader & reader);
};
}; // namespace CreateTwoDCartesianZoneResponse
namespace UpdateTwoDCartesianZone {
enum class Fields : uint8_t
{
    kZoneID = 0,
    kZone   = 1,
};

struct Type
{
public:
    // Use GetCommandId instead of commandId directly to avoid naming conflict with CommandIdentification in ExecutionOfACommand
    static constexpr CommandId GetCommandId() { return Commands::UpdateTwoDCartesianZone::Id; }
    static constexpr ClusterId GetClusterId() { return Clusters::ZoneManagement::Id; }
    static constexpr bool kIsFabricScoped = false;

    uint16_t zoneID = static_cast<uint16_t>(0);
    Structs::TwoDCartesianZoneStruct::Type zone;

    CHIP_ERROR Encode(TLV::TLVWriter & aWriter, TLV::Tag aTag) const;

    using ResponseType = DataModel::NullObjectType;

    static constexpr bool MustUseTimedInvoke() { return false; }
};

struct DecodableType
{
public:
    static constexpr CommandId GetCommandId() { return Commands::UpdateTwoDCartesianZone::Id; }
    static constexpr ClusterId GetClusterId() { return Clusters::ZoneManagement::Id; }
    static constexpr bool kIsFabricScoped = false;

    uint16_t zoneID = static_cast<uint16_t>(0);
    Structs::TwoDCartesianZoneStruct::DecodableType zone;

    CHIP_ERROR Decode(TLV::TLVReader & reader);
};
}; // namespace UpdateTwoDCartesianZone
namespace GetTwoDCartesianZone {
enum class Fields : uint8_t
{
    kZoneID = 0,
};

struct Type
{
public:
    // Use GetCommandId instead of commandId directly to avoid naming conflict with CommandIdentification in ExecutionOfACommand
    static constexpr CommandId GetCommandId() { return Commands::GetTwoDCartesianZone::Id; }
    static constexpr ClusterId GetClusterId() { return Clusters::ZoneManagement::Id; }
    static constexpr bool kIsFabricScoped = false;

    Optional<DataModel::Nullable<uint16_t>> zoneID;

    CHIP_ERROR Encode(TLV::TLVWriter & aWriter, TLV::Tag aTag) const;

    using ResponseType = Clusters::ZoneManagement::Commands::GetTwoDCartesianZoneResponse::DecodableType;

    static constexpr bool MustUseTimedInvoke() { return false; }
};

struct DecodableType
{
public:
    static constexpr CommandId GetCommandId() { return Commands::GetTwoDCartesianZone::Id; }
    static constexpr ClusterId GetClusterId() { return Clusters::ZoneManagement::Id; }
    static constexpr bool kIsFabricScoped = false;

    Optional<DataModel::Nullable<uint16_t>> zoneID;

    CHIP_ERROR Decode(TLV::TLVReader & reader);
};
}; // namespace GetTwoDCartesianZone
namespace GetTwoDCartesianZoneResponse {
enum class Fields : uint8_t
{
    kZones = 0,
};

struct Type
{
public:
    // Use GetCommandId instead of commandId directly to avoid naming conflict with CommandIdentification in ExecutionOfACommand
    static constexpr CommandId GetCommandId() { return Commands::GetTwoDCartesianZoneResponse::Id; }
    static constexpr ClusterId GetClusterId() { return Clusters::ZoneManagement::Id; }
    static constexpr bool kIsFabricScoped = false;

    DataModel::List<const Structs::TwoDCartesianZoneStruct::Type> zones;

    CHIP_ERROR Encode(TLV::TLVWriter & aWriter, TLV::Tag aTag) const;

    using ResponseType = DataModel::NullObjectType;

    static constexpr bool MustUseTimedInvoke() { return false; }
};

struct DecodableType
{
public:
    static constexpr CommandId GetCommandId() { return Commands::GetTwoDCartesianZoneResponse::Id; }
    static constexpr ClusterId GetClusterId() { return Clusters::ZoneManagement::Id; }
    static constexpr bool kIsFabricScoped = false;

    DataModel::DecodableList<Structs::TwoDCartesianZoneStruct::DecodableType> zones;

    CHIP_ERROR Decode(TLV::TLVReader & reader);
};
}; // namespace GetTwoDCartesianZoneResponse
namespace RemoveZone {
enum class Fields : uint8_t
{
    kZoneID = 0,
};

struct Type
{
public:
    // Use GetCommandId instead of commandId directly to avoid naming conflict with CommandIdentification in ExecutionOfACommand
    static constexpr CommandId GetCommandId() { return Commands::RemoveZone::Id; }
    static constexpr ClusterId GetClusterId() { return Clusters::ZoneManagement::Id; }
    static constexpr bool kIsFabricScoped = false;

    uint16_t zoneID = static_cast<uint16_t>(0);

    CHIP_ERROR Encode(TLV::TLVWriter & aWriter, TLV::Tag aTag) const;

    using ResponseType = DataModel::NullObjectType;

    static constexpr bool MustUseTimedInvoke() { return false; }
};

struct DecodableType
{
public:
    static constexpr CommandId GetCommandId() { return Commands::RemoveZone::Id; }
    static constexpr ClusterId GetClusterId() { return Clusters::ZoneManagement::Id; }
    static constexpr bool kIsFabricScoped = false;

    uint16_t zoneID = static_cast<uint16_t>(0);

    CHIP_ERROR Decode(TLV::TLVReader & reader);
};
}; // namespace RemoveZone
} // namespace Commands
} // namespace ZoneManagement
} // namespace Clusters
} // namespace app
} // namespace chip
