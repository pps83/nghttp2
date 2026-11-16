#ifndef NGHTTP2_STATICLIB
#define NGHTTP2_STATICLIB 1
#endif

#ifdef _WIN32
#define HAVE_WINDOWS_H 1
#define HAVE_GETTICKCOUNT64 1
#ifdef _MSC_VER
#pragma warning(disable: 4244 4267)
#ifdef _WIN64
#define ssize_t __int64
#else
#define ssize_t int
#endif
#endif
#else
#define HAVE_ARPA_INET_H 1
#define HAVE_NETINET_IN_H 1
#define HAVE_CLOCK_GETTIME 1
#define HAVE_DECL_CLOCK_MONOTONIC 1
#endif

#include "lib/nghttp2_alpn.c"
#include "lib/nghttp2_buf.c"
#include "lib/nghttp2_callbacks.c"
#include "lib/nghttp2_debug.c"
#include "lib/nghttp2_extpri.c"
#include "lib/nghttp2_frame.c"
#include "lib/nghttp2_hd.c"
#include "lib/nghttp2_hd_huffman.c"
#include "lib/nghttp2_hd_huffman_data.c"
#include "lib/nghttp2_helper.c"
#define VALID_AUTHORITY_CHARS VALID_AUTHORITY_CHARS_http
#include "lib/nghttp2_http.c"
#undef VALID_AUTHORITY_CHARS
#include "lib/nghttp2_map.c"
#include "lib/nghttp2_mem.c"
#include "lib/nghttp2_option.c"
#include "lib/nghttp2_outbound_item.c"
#include "lib/nghttp2_pq.c"
#include "lib/nghttp2_priority_spec.c"
#include "lib/nghttp2_queue.c"
#include "lib/nghttp2_ratelim.c"
#include "lib/nghttp2_rcbuf.c"
#include "lib/nghttp2_session.c"
#include "lib/nghttp2_stream.c"
#include "lib/nghttp2_submit.c"
#include "lib/nghttp2_time.c"
#include "lib/nghttp2_version.c"
#include "lib/sfparse.c"
