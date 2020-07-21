#include <napi.h>
#include "blur.h"
#include "blurple.h"
//#include "caption.h"
//#include "caption2.h"
#include "circle.h"
#include "explode.h"
#include "flag.h"
#include "flip.h"
#include "flop.h"
#include "freeze.h"
#include "gamexplain.h"
#include "globe.h"
#include "homebrew.h"
#include "invert.h"
#include "jpeg.h"
#include "leak.h"
#include "magik.h"
#include "meme.h"
#include "mirror.h"
#include "watermark.h"

Napi::Object Init(Napi::Env env, Napi::Object exports)
{
  exports.Set(Napi::String::New(env, "blur"), Napi::Function::New(env, Blur));
  exports.Set(Napi::String::New(env, "blurple"), Napi::Function::New(env, Blurple));
  //exports.Set(Napi::String::New(env, "caption"), Napi::Function::New(env, Caption));
  //exports.Set(Napi::String::New(env, "captionTwo"), Napi::Function::New(env, CaptionTwo));
  exports.Set(Napi::String::New(env, "circle"), Napi::Function::New(env, Circle));
  exports.Set(Napi::String::New(env, "explode"), Napi::Function::New(env, Explode));
  exports.Set(Napi::String::New(env, "flag"), Napi::Function::New(env, Flag));
  exports.Set(Napi::String::New(env, "flip"), Napi::Function::New(env, Flip));
  exports.Set(Napi::String::New(env, "flop"), Napi::Function::New(env, Flop));
  exports.Set(Napi::String::New(env, "freeze"), Napi::Function::New(env, Freeze));
  exports.Set(Napi::String::New(env, "gamexplain"), Napi::Function::New(env, Gamexplain));
  exports.Set(Napi::String::New(env, "globe"), Napi::Function::New(env, Globe));
  exports.Set(Napi::String::New(env, "homebrew"), Napi::Function::New(env, Homebrew));
  exports.Set(Napi::String::New(env, "invert"), Napi::Function::New(env, Invert));
  exports.Set(Napi::String::New(env, "jpeg"), Napi::Function::New(env, Jpeg));
  exports.Set(Napi::String::New(env, "leak"), Napi::Function::New(env, Leak));
  exports.Set(Napi::String::New(env, "magik"), Napi::Function::New(env, Magik));
  exports.Set(Napi::String::New(env, "meme"), Napi::Function::New(env, Meme));
  exports.Set(Napi::String::New(env, "mirror"), Napi::Function::New(env, Mirror));
  exports.Set(Napi::String::New(env, "watermark"), Napi::Function::New(env, Watermark));
  return exports;
}

NODE_API_MODULE(addon, Init);