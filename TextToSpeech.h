class TextToSpeech
{
public:
  TextToSpeech();
  ~TextToSpeech();

public:
  int Say(const char *str);
  int Say_file(const char *filename);
  int Text_to_wave(const char *str, const char *destination);
};
