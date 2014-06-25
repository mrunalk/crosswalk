// Copyright (c) 2014 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#include "xwalk/tizen/browser/speech/tts_tizen.h"

#include <gio/gio.h>
#include <string>

// static
TtsPlatformImpl* TtsPlatformImpl::GetInstance() {
  return TtsPlatformImplTizen::GetInstance();
}

TtsPlatformImplTizen::TtsPlatformImplTizen()
  : utterance_id_(0) {
}

TtsPlatformImplTizen::~TtsPlatformImplTizen() {
}

bool TtsPlatformImplTizen::PlatformImplAvailable() {
  return true;
}

bool TtsPlatformImplTizen::Speak(
    int utterance_id,
    const std::string& utterance,
    const std::string& lang,
    const VoiceData& voice,
    const UtteranceContinuousParameters& params) {

}

// static
TtsPlatformImplTizen* TtsPlatformImplTizen::GetInstance() {
  return Singleton<TtsPlatformImplTizen>::get();
}
