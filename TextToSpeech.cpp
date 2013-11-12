#include <festival/festival.h>
#include "TextToSpeech.h"

TextToSpeech::TextToSpeech()
{
  int heap_size = 210000;
  int load_init_files = 1;

  festival_initialize(load_init_files, heap_size);
}

TextToSpeech::~TextToSpeech()
{
}

int	TextToSpeech::Say(const char *str)
{
  festival_say_text(str);
  return (0);
}

int	TextToSpeech::Say_file(const char *filename)
{
  festival_say_file(filename);
  festival_wait_for_spooler();
  return (0);
}


int	TextToSpeech::Text_to_wave(const char *str, const char *destination)
{
  EST_Wave wave;

  festival_text_to_wave(str, wave);
  wave.save(destination, "riff");

  return (0);
}
