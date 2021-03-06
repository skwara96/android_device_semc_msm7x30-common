/****************************************************************************
 ****************************************************************************
 ***
 ***   This header was automatically generated from a Linux kernel header
 ***   of the same name, to make information necessary for userspace to
 ***   call into the kernel available to libc.  It contains only constants,
 ***   structures, and macros generated from the original header, and thus,
 ***   contains no copyrightable information.
 ***
 ***   To edit the content of this header, modify the corresponding
 ***   source file (e.g. under external/kernel-headers/original/) then
 ***   run bionic/libc/kernel/tools/update_all.py
 ***
 ***   Any manual change here will be lost the next time this script will
 ***   be run. You've been warned!
 ***
 ****************************************************************************
 ****************************************************************************/
#ifndef __MSM_AUDIO_MVS_H
#define __MSM_AUDIO_MVS_H
#include <linux/msm_audio.h>
#define AUDIO_GET_MVS_CONFIG _IOW(AUDIO_IOCTL_MAGIC,   (AUDIO_MAX_COMMON_IOCTL_NUM + 0), unsigned)
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define AUDIO_SET_MVS_CONFIG _IOR(AUDIO_IOCTL_MAGIC,   (AUDIO_MAX_COMMON_IOCTL_NUM + 1), unsigned)
#define MVS_MODE_IS127 2
#define MVS_MODE_AMR 5
#define MVS_MODE_LINEAR_PCM 9
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define MVS_MODE_PCM 12
#define MVS_MODE_AMR_WB 13
enum msm_audio_amr_mode {
 MVS_AMR_MODE_0475,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 MVS_AMR_MODE_0515,
 MVS_AMR_MODE_0590,
 MVS_AMR_MODE_0670,
 MVS_AMR_MODE_0740,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 MVS_AMR_MODE_0795,
 MVS_AMR_MODE_1020,
 MVS_AMR_MODE_1220,
 MVS_AMR_MODE_0660,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 MVS_AMR_MODE_0885,
 MVS_AMR_MODE_1265,
 MVS_AMR_MODE_1425,
 MVS_AMR_MODE_1585,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 MVS_AMR_MODE_1825,
 MVS_AMR_MODE_1985,
 MVS_AMR_MODE_2305,
 MVS_AMR_MODE_2385,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 MVS_AMR_MODE_UNDEF
};
enum msm_audio_voc_rate {
 MVS_VOC_0_RATE,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 MVS_VOC_8_RATE,
 MVS_VOC_4_RATE,
 MVS_VOC_2_RATE,
 MVS_VOC_1_RATE
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
};
enum msm_audio_amr_frame_type {
 MVS_AMR_SPEECH_GOOD,
 MVS_AMR_SPEECH_DEGRADED,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 MVS_AMR_ONSET,
 MVS_AMR_SPEECH_BAD,
 MVS_AMR_SID_FIRST,
 MVS_AMR_SID_UPDATE,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 MVS_AMR_SID_BAD,
 MVS_AMR_NO_DATA,
 MVS_AMR_SPEECH_LOST
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct msm_audio_mvs_config {
 uint32_t mvs_mode;
 uint32_t rate_type;
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#define MVS_MAX_VOC_PKT_SIZE 320
struct msm_audio_mvs_frame {
 uint32_t frame_type;
 uint32_t len;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 uint8_t voc_pkt[MVS_MAX_VOC_PKT_SIZE];
};
#define Q5V2_MVS_MAX_VOC_PKT_SIZE 320
struct q5v2_msm_audio_mvs_frame {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 uint32_t frame_type;
 uint32_t len;
 uint8_t voc_pkt[Q5V2_MVS_MAX_VOC_PKT_SIZE];
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
#endif
