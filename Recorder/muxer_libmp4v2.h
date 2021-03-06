#pragma once

#include <atomic>
#include <thread>
#include <list>
#include <functional>
#include <math.h>
#include <mutex>
#include <condition_variable>

#include "headers_ffmpeg.h"

#include <mp4v2\mp4v2.h>

namespace am {

	/*
	class record_audio;
	class record_desktop;

	struct MUX_STREAM_T;
	typedef struct MUX_SETTING_T MUX_SETTING;

	class muxer_libmp4v2
	{
	public:
		muxer_libmp4v2();
		~muxer_libmp4v2();
		
		int init(
			const char *output_file,
			record_desktop *source_desktop,
			record_audio ** source_audios,
			const int source_audios_nb,
			const MUX_SETTING_T &setting
		);

		int start();
		int stop();

		int pause();
		int resume();

	private:
		void on_desktop_data(const uint8_t *data, int len, AVFrame *frame);

		void on_desktop_error(int error);

		void on_audio_data(AVFrame *frame, int index);

		void on_audio_error(int error, int index);

		void on_enc_264_data(AVPacket *packet);

		void on_enc_264_error(int error);

		void on_enc_aac_data(AVPacket *packet);

		void on_enc_aac_error(int error);

		int add_video_stream(const MUX_SETTING_T &setting, record_desktop *source_desktop);

		int add_audio_stream(const MUX_SETTING_T &setting, record_audio ** source_audios, const int source_audios_nb);

		int open_output(const char *output_file, const MUX_SETTING_T &setting);

		void cleanup_video();
		void cleanup_audio();
		void cleanup();

		int write_video(const uint8_t *data, int len, bool key_frame);

		int write_audio(const uint8_t *data, int len);

	private:
		std::atomic_bool _inited;
		std::atomic_bool _running;

		bool _have_v, _have_a;

		std::string _output_file;

		struct MUX_STREAM_T *_v_stream, *_a_stream;
		AVOutputFormat *_fmt;
		AVFormatContext *_fmt_ctx;

		MP4FileHandle _mp4v2_file;
		MP4TrackId _mp4v2_v_track;
		MP4TrackId _mp4v2_a_track;

		int64_t _base_time;
		
	};
	*/

}