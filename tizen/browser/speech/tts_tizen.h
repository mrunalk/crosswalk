// Copyright (c) 2014 Intel Corporation. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef XWALK_TIZEN_BROWSER_SPEECH_TTS_TIZEN_H
#define XWALK_TIZEN_BROWSER_SPEECH_TTS_TIZEN_H

#include "chrome/browser/speech/tts_platform.h"

class TtsPlatformImplTizen : public TtsPlatformImpl {
 public:
  // TtsPlatformImpl implementation.
  virtual bool PlatformImplAvailable() OVERRIDE;
  virtual bool Speak(
      int utterance_id,
      const std::string& utterance,
      const std::string& lang,
      const VoiceData& voice,
      const UtteranceContinuousParameters& params) OVERRIDE;
  virtual bool StopSpeaking() OVERRIDE;
  virtual void Pause() OVERRIDE;
  virtual void Resume() OVERRIDE;
  virtual bool IsSpeaking() OVERRIDE;
  virtual void GetVoices(std::vector<VoiceData>* out_voices) OVERRIDE;


  // Static functions.
  static TtsPlatformImplTizen* GetInstance();

 private:
  TtsPlatformImplTizen();
  virtual ~TtsPlatformImplTizen();

  friend struct DefaultSingletonTraits<TtsPlatformImplTizen>;

  int utterance_id_;
  std::string utterance_;

  DISALLOW_COPY_AND_ASSIGN(TtsPlatformImplTizen);
};

#endif  // XWALK_TIZEN_BROWSER_SPEECH_TTS_TIZEN_H
