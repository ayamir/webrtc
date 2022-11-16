#include "rtc_base/logging.h"
#include "rtc_base/log_sinks.h"

int main(int argc, char* argv[]) {
  rtc::FileRotatingLogSink log_sink("D:\\MM", "webrtc.log", 1000000, 3);
  log_sink.Init();
  rtc::LogMessage::AddLogToStream(&log_sink, rtc::LS_INFO);
  RTC_LOG(LS_INFO) << "Hello, WebRTC!";

  return 0;
}