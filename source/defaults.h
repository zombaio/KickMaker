/*
 *  KickMaker - defaults.h
 *  Created by Nik Reiman on 03.02.06
 *  Copyright (c) 2006 Teragon Audio, All rights reserved
 */

#ifndef __defaults_h
#define __defaults_H

#define DEF_PRODUCT "KickMaker"
#define MAJ_VERSION 2
#define MIN_VERSION 1
#define PATCH_VERSION 1
#define REL_BRANCH 'r'
#define VERSION ((MAJ_VERSION * 1000) + (MIN_VERSION * 10) + (PATCH_VERSION))

#define FEATURE_LFO 0

enum {
  PRM_1_ENABLED,
  PRM_1_FREQ,
  PRM_1_FREQ_FINE,
  PRM_1_FREQ_EXPAND,
  PRM_1_FREQ_EXPAND_RATE,
  PRM_1_PHASE,
  PRM_1_NOISE,
  PRM_1_ATTACK,
  PRM_1_ATTACK_AMP,
  PRM_1_DECAY,
  PRM_1_DECAY_AMP,
  PRM_1_SUSTAIN,
  PRM_1_SUSTAIN_AMP,
  PRM_1_RELEASE,
  PRM_1_VOLUME,

  PRM_2_ENABLED,
  PRM_2_FREQ,
  PRM_2_FREQ_FINE,
  PRM_2_FREQ_EXPAND,
  PRM_2_FREQ_EXPAND_RATE,
  PRM_2_PHASE,
  PRM_2_NOISE,
  PRM_2_ATTACK,
  PRM_2_ATTACK_AMP,
  PRM_2_DECAY,
  PRM_2_DECAY_AMP,
  PRM_2_SUSTAIN,
  PRM_2_SUSTAIN_AMP,
  PRM_2_RELEASE,
  PRM_2_VOLUME,
  
  PRM_3_ENABLED,
  PRM_3_FREQ,
  PRM_3_FREQ_FINE,
  PRM_3_FREQ_EXPAND,
  PRM_3_FREQ_EXPAND_RATE,
  PRM_3_PHASE,
  PRM_3_NOISE,
  PRM_3_ATTACK,
  PRM_3_ATTACK_AMP,
  PRM_3_DECAY,
  PRM_3_DECAY_AMP,
  PRM_3_SUSTAIN,
  PRM_3_SUSTAIN_AMP,
  PRM_3_RELEASE,
  PRM_3_VOLUME,
  
  PRM_4_ENABLED,
  PRM_4_FREQ,
  PRM_4_FREQ_FINE,
  PRM_4_FREQ_EXPAND,
  PRM_4_FREQ_EXPAND_RATE,
  PRM_4_PHASE,
  PRM_4_NOISE,
  PRM_4_ATTACK,
  PRM_4_ATTACK_AMP,
  PRM_4_DECAY,
  PRM_4_DECAY_AMP,
  PRM_4_SUSTAIN,
  PRM_4_SUSTAIN_AMP,
  PRM_4_RELEASE,
  PRM_4_VOLUME,
  
  PRM_ALL_ATTACK,
  PRM_ALL_ATTACK_AMP,
  PRM_ALL_DECAY,
  PRM_ALL_DECAY_AMP,
  PRM_ALL_SUSTAIN,
  PRM_ALL_SUSTAIN_AMP,
  PRM_ALL_RELEASE,
  PRM_ALL_VOLUME,
  
  PRM_COMP_ATTACK,
  PRM_COMP_RELEASE,
  PRM_COMP_RATIO,
  PRM_COMP_THRESH,
  
  PRM_LOPASS_FREQ,
  PRM_LOPASS_RESONANCE,
  
  PRM_1_WAVE_TYPE,
  PRM_2_WAVE_TYPE,
  PRM_3_WAVE_TYPE,
  PRM_4_WAVE_TYPE,

#if FEATURE_LFO
  PRM_LFO_1_ENABLE,
  PRM_LFO_1_RATE,
  PRM_LFO_1_AMOUNT,
  PRM_LFO_1_TARGET,
  
  PRM_LFO_2_ENABLE,
  PRM_LFO_2_RATE,
  PRM_LFO_2_AMOUNT,
  PRM_LFO_2_TARGET,
  
  PRM_LFO_3_ENABLE,
  PRM_LFO_3_RATE,
  PRM_LFO_3_AMOUNT,
  PRM_LFO_3_TARGET,
#endif
   
  PRM_SAMPLE_RATE,
  NUM_PARAMS
};

enum {
#ifdef MAC
  REZ_BACKGROUND = 10001,
#else
  REZ_BACKGROUND = 1,
#endif
  REZ_BUTTON,
  REZ_KNOB_BIG,
  REZ_KNOB_SMALL,
  REZ_SLIDER_BG,
  REZ_SLIDER_HANDLE,
  REZ_SAVE_BUTTON,
  REZ_DELETE_BUTTON,
  REZ_NEXT_BUTTON,
  REZ_PREV_BUTTON,
  REZ_METER_HANDLE,
  REZ_OSC_SWITCH,
  REZ_BITMAP_FONT,
  REZ_NUMBER_FONT,
  REZ_EFFECT_KNOB,
  REZ_EFFECT_FONT,
  REZ_DEMO_SPLASH,
  REZ_DEMO_DISABLED,
  REZ_HELP_SPLASH,
  REZ_ABOUT_SPLASH,
  REZ_OSC_SW_1,
  REZ_OSC_SW_2
};

enum {
  TAG_1_SWITCH = 100,
  TAG_1_EFFECT_LABEL1,
  TAG_1_EFFECT_METER1,
  TAG_1_EFFECT_METER_VU1,
  TAG_1_EFFECT_LABEL2,
  TAG_1_EFFECT_METER2,
  TAG_1_EFFECT_METER_VU2,
  TAG_1_EFFECT_LABEL3,
  TAG_1_EFFECT_METER3,
  TAG_1_EFFECT_METER_VU3,
  TAG_1_ADSR,
  
  TAG_2_SWITCH,
  TAG_2_EFFECT_LABEL1,
  TAG_2_EFFECT_METER1,
  TAG_2_EFFECT_METER_VU1,
  TAG_2_EFFECT_LABEL2,
  TAG_2_EFFECT_METER2,
  TAG_2_EFFECT_METER_VU2,
  TAG_2_EFFECT_LABEL3,
  TAG_2_EFFECT_METER3,
  TAG_2_EFFECT_METER_VU3,
  TAG_2_ADSR,
  
  TAG_1_EFFECT_KNOB1,
  TAG_1_EFFECT_KNOB2,
  TAG_1_EFFECT_KNOB3,
  TAG_2_EFFECT_KNOB1,
  TAG_2_EFFECT_KNOB2,
  TAG_2_EFFECT_KNOB3,
  
  TAG_PRESET_DISPLAY,
  TAG_PRESET_MENU,
  TAG_SAVE_BUTTON,
  TAG_DELETE_BUTTON,
  TAG_NEXT_BUTTON,
  TAG_PREV_BUTTON,
  TAG_ALL_ADSR,
  
  TAG_HELP_SPLASH,
  TAG_ABOUT_SPLASH
};

#define DEF_NUM_FRAMES 128
#define DEF_SPACE 5
#define DEF_ADSR_WIDTH 132
#define DEF_ADSR_HEIGHT 20
#define DEF_EFFECT_LABEL_WIDTH 85
#define DEF_EFFECT_LABEL_HEIGHT 15
#define DEF_DISPLAY_OFFSET_X 10
#define DEF_DISPLAY_OFFSET_Y 2
#define DEF_SLIDER_AMOUNT 55
#define DEF_TICKS 2000
#define DEF_NUM_JUMP_POINTS 100

#define MIN_FREQ -10.0
#define MAX_FREQ 10.0
#define MIN_FILTER_FREQ 20.0
#define MAX_FILTER_FREQ 10000.0
#define MAX_FRAME_BUFFER 8192

#define MAX_VOL 1.0
#define MIN_VOL 0.0

#define MAX_ATTACK 0.50
#define MIN_ATTACK 0.05
#define DEF_ATTACK 0.05
#define DEF_ATTACK_AMP 0.840000

#define MAX_DECAY 0.50
#define DEF_DECAY 0.25
#define DEF_DECAY_AMP 0.475000

#define MAX_SUSTAIN 0.50
#define DEF_SUSTAIN 0.25
#define DEF_SUSTAIN_AMP 0.145000

#define MAX_RELEASE 0.50
#define MIN_RELEASE 0.005
#define DEF_RELEASE 0.5

#define MAX_LFOS 3
#define MAX_VOICES 4
#define MAX_NOISE 0.25
#define MAX_PHASE 6.28318530718
#define MAX_FREQ_EXPAND 6
#define MAX_FREQ_EXPAND_RATE 60.0

#define MAX_COMP_ATTACK 2.0
#define MIN_COMP_ATTACK 0.0
#define MAX_COMP_RELEASE 1.0
#define MIN_COMP_RELEASE 0.0
#define MAX_COMP_RATIO 3.0
#define MIN_COMP_RATIO 1.0
#define MAX_COMP_THRESH 1.0
#define MIN_COMP_THRESH 0.0

#define NUM_INPUTS 0
#define NUM_OUTPUTS 2

// PluginCore features
#define USE_PC_EVENTS 1
#define USE_PC_PRESET 1
#define USE_PC_MIDI 1
#define USE_PC_EFFECTS 1

#ifdef USE_PC_AU
#define KickMaker_COMP_SUBTYPE 'KkMk'
#define KickMaker_COMP_MANF 'Tera'
#define kKickMakerVersion 0x00010000	

#define PRP_CORE 64000
#define PRP_EDITOR 64001
#define DEF_BUNDLE_IDENT "org.teragon.KickMaker.AU"
#endif

#ifdef USE_PC_VST
#define UNIQUE_ID 'KkMk'
#define DEF_BUNDLE_IDENT "org.teragon.KickMaker.VST"
#endif
#endif
