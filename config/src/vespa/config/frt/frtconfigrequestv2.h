// Copyright 2016 Yahoo Inc. Licensed under the terms of the Apache 2.0 license. See LICENSE in the project root.
#pragma once

#include "slimeconfigrequest.h"

class FRT_Values;
class FRT_RPCRequest;

namespace config {

class ConfigKey;
class Connection;
class Trace;

class FRTConfigRequestV2 : public SlimeConfigRequest {
public:
    FRTConfigRequestV2(Connection * connection,
                       const ConfigKey & key,
                       const vespalib::string & configMd5,
                       int64_t currentGeneration,
                       int64_t wantedGeneration,
                       const vespalib::string & hostName,
                       int64_t serverTimeout,
                       const Trace & trace);
    ConfigResponse::UP createResponse(FRT_RPCRequest * request) const override;
};

}

