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
#define MVS_MODE_G729A 14
#define MVS_MODE_G711A 15
#define MVS_MODE_PCM_WB 0x80000000
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
enum msm_audio_amr_mode {
 MVS_AMR_MODE_0475,
 MVS_AMR_MODE_0515,
 MVS_AMR_MODE_0590,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 MVS_AMR_MODE_0670,
 MVS_AMR_MODE_0740,
 MVS_AMR_MODE_0795,
 MVS_AMR_MODE_1020,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 MVS_AMR_MODE_1220,
 MVS_AMR_MODE_0660,
 MVS_AMR_MODE_0885,
 MVS_AMR_MODE_1265,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 MVS_AMR_MODE_1425,
 MVS_AMR_MODE_1585,
 MVS_AMR_MODE_1825,
 MVS_AMR_MODE_1985,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 MVS_AMR_MODE_2305,
 MVS_AMR_MODE_2385,
 MVS_AMR_MODE_UNDEF
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
enum msm_audio_voc_rate {
 MVS_VOC_0_RATE,
 MVS_VOC_8_RATE,
 MVS_VOC_4_RATE,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 MVS_VOC_2_RATE,
 MVS_VOC_1_RATE
};
enum msm_audio_amr_frame_type {
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 MVS_AMR_SPEECH_GOOD,
 MVS_AMR_SPEECH_DEGRADED,
 MVS_AMR_ONSET,
 MVS_AMR_SPEECH_BAD,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 MVS_AMR_SID_FIRST,
 MVS_AMR_SID_UPDATE,
 MVS_AMR_SID_BAD,
 MVS_AMR_NO_DATA,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 MVS_AMR_SPEECH_LOST
};
enum msm_audio_g711a_mode {
 MVS_G711A_MODE_MULAW,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 MVS_G711A_MODE_ALAW
};
enum msm_audio_g711a_frame_type {
 MVS_G711A_SPEECH_GOOD,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 MVS_G711A_SID,
 MVS_G711A_NO_DATA,
 MVS_G711A_ERASURE
};
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
enum msm_audio_g729a_frame_type {
 MVS_G729A_NO_DATA,
 MVS_G729A_SPEECH_GOOD,
 MVS_G729A_SID,
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 MVS_G729A_ERASURE
};
struct msm_audio_mvs_config {
 uint32_t mvs_mode;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 uint32_t rate_type;
 uint32_t dtx_mode;
};
#define MVS_MAX_VOC_PKT_SIZE 320
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
struct msm_audio_mvs_frame {
 uint32_t frame_type;
 uint32_t frame_rate;
 uint32_t len;
/* WARNING: DO NOT EDIT, AUTO-GENERATED CODE - SEE TOP FOR INSTRUCTIONS */
 uint8_t voc_pkt[MVS_MAX_VOC_PKT_SIZE];
};
#endif

