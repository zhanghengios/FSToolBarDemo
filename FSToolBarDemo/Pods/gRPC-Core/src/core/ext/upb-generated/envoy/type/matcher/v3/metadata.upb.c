/* This file was generated by upbc (the upb compiler) from the input
 * file:
 *
 *     envoy/type/matcher/v3/metadata.proto
 *
 * Do not edit -- your changes will be discarded when the file is
 * regenerated. */

#include <stddef.h>
#if COCOAPODS==1
  #include  "third_party/upb/upb/msg.h"
#else
  #include  "upb/msg.h"
#endif
#if COCOAPODS==1
  #include  "src/core/ext/upb-generated/envoy/type/matcher/v3/metadata.upb.h"
#else
  #include  "envoy/type/matcher/v3/metadata.upb.h"
#endif
#if COCOAPODS==1
  #include  "src/core/ext/upb-generated/envoy/type/matcher/v3/value.upb.h"
#else
  #include  "envoy/type/matcher/v3/value.upb.h"
#endif
#if COCOAPODS==1
  #include  "src/core/ext/upb-generated/udpa/annotations/status.upb.h"
#else
  #include  "udpa/annotations/status.upb.h"
#endif
#if COCOAPODS==1
  #include  "src/core/ext/upb-generated/udpa/annotations/versioning.upb.h"
#else
  #include  "udpa/annotations/versioning.upb.h"
#endif
#if COCOAPODS==1
  #include  "src/core/ext/upb-generated/validate/validate.upb.h"
#else
  #include  "validate/validate.upb.h"
#endif

#if COCOAPODS==1
  #include  "third_party/upb/upb/port_def.inc"
#else
  #include  "upb/port_def.inc"
#endif

static const upb_msglayout *const envoy_type_matcher_v3_MetadataMatcher_submsgs[2] = {
  &envoy_type_matcher_v3_MetadataMatcher_PathSegment_msginit,
  &envoy_type_matcher_v3_ValueMatcher_msginit,
};

static const upb_msglayout_field envoy_type_matcher_v3_MetadataMatcher__fields[3] = {
  {1, UPB_SIZE(0, 0), 0, 0, 9, 1},
  {2, UPB_SIZE(12, 24), 0, 0, 11, 3},
  {3, UPB_SIZE(8, 16), 0, 1, 11, 1},
};

const upb_msglayout envoy_type_matcher_v3_MetadataMatcher_msginit = {
  &envoy_type_matcher_v3_MetadataMatcher_submsgs[0],
  &envoy_type_matcher_v3_MetadataMatcher__fields[0],
  UPB_SIZE(16, 32), 3, false,
};

static const upb_msglayout_field envoy_type_matcher_v3_MetadataMatcher_PathSegment__fields[1] = {
  {1, UPB_SIZE(0, 0), UPB_SIZE(-9, -17), 0, 9, 1},
};

const upb_msglayout envoy_type_matcher_v3_MetadataMatcher_PathSegment_msginit = {
  NULL,
  &envoy_type_matcher_v3_MetadataMatcher_PathSegment__fields[0],
  UPB_SIZE(16, 32), 1, false,
};

#if COCOAPODS==1
  #include  "third_party/upb/upb/port_undef.inc"
#else
  #include  "upb/port_undef.inc"
#endif
