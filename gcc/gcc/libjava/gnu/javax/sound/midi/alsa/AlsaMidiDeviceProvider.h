
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_javax_sound_midi_alsa_AlsaMidiDeviceProvider__
#define __gnu_javax_sound_midi_alsa_AlsaMidiDeviceProvider__

#pragma interface

#include <javax/sound/midi/spi/MidiDeviceProvider.h>
#include <gcj/array.h>

extern "Java"
{
  namespace gnu
  {
    namespace javax
    {
      namespace sound
      {
        namespace midi
        {
          namespace alsa
          {
              class AlsaMidiDeviceProvider;
              class AlsaMidiDeviceProvider$AlsaInfo;
          }
        }
      }
    }
  }
  namespace javax
  {
    namespace sound
    {
      namespace midi
      {
          class MidiDevice;
          class MidiDevice$Info;
      }
    }
  }
}

class gnu::javax::sound::midi::alsa::AlsaMidiDeviceProvider : public ::javax::sound::midi::spi::MidiDeviceProvider
{

  static JArray< ::gnu::javax::sound::midi::alsa::AlsaMidiDeviceProvider$AlsaInfo * > * getInputDeviceInfo_();
  static JArray< ::gnu::javax::sound::midi::alsa::AlsaMidiDeviceProvider$AlsaInfo * > * getOutputDeviceInfo_();
  static void init_();
public:
  AlsaMidiDeviceProvider();
  virtual JArray< ::javax::sound::midi::MidiDevice$Info * > * getDeviceInfo();
  virtual ::javax::sound::midi::MidiDevice * getDevice(::javax::sound::midi::MidiDevice$Info *);
private:
  static JArray< ::gnu::javax::sound::midi::alsa::AlsaMidiDeviceProvider$AlsaInfo * > * infos;
public:
  static ::java::lang::Class class$;
};

#endif // __gnu_javax_sound_midi_alsa_AlsaMidiDeviceProvider__