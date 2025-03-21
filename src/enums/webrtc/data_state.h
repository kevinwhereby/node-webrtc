#pragma once

#include <webrtc/api/data_channel_interface.h>

// IWYU pragma: no_include "src/enums/macros/impls.h"

#define DATA_STATE webrtc::DataChannelInterface::DataState
#define DATA_STATE_NAME "RTCDataChannelState"
#define DATA_STATE_LIST                                                        \
  ENUM_SUPPORTED(DATA_STATE::kClosed, "closed")                                \
  ENUM_SUPPORTED(DATA_STATE::kClosing, "closing")                              \
  ENUM_SUPPORTED(DATA_STATE::kConnecting, "connecting")                        \
  ENUM_SUPPORTED(DATA_STATE::kOpen, "open")

#define ENUM(X) DATA_STATE##X
#include "src/enums/macros/decls.h"
#undef ENUM
