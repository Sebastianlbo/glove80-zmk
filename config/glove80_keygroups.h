#ifndef GLOVE80_KEY_GROUPS_H
#define GLOVE80_KEY_GROUPS_H

/* System rows (no QWERTY equivalent) */
#define FIRST_ROW_SYSTEM  0 1 2 3 4 5 6 7 8 9
#define SECOND_ROW_SYSTEM 10 11 12 13 14 15 16 17 18 19 20 21

/* Home rows used by HRM hold-trigger tuning (outer pinky and inner index excluded per side) */
#define LEFT_HOME_ROW  35 36 37 38
#define RIGHT_HOME_ROW 41 42 43 44

/* QWERTY area without home rows */
#define LEFT_QWERTY_NO_HOME  22 23 24 25 26 27 34 39 46 47 48 49 50 51
#define RIGHT_QWERTY_NO_HOME 28 29 30 31 32 33 40 45 58 59 60 61 62 63

/* Full QWERTY area including home rows */
#define LEFT_QWERTY  22 23 24 25 26 27 34 35 36 37 38 39 46 47 48 49 50 51
#define RIGHT_QWERTY 28 29 30 31 32 33 40 41 42 43 44 45 58 59 60 61 62 63

/* Thumb clusters (the curved inner key arcs) */
#define LEFT_THUMB_TOP      52 53 54
#define RIGHT_THUMB_TOP     55 56 57
#define LEFT_THUMB_BOT      69 70 71
#define RIGHT_THUMB_BOT     72 73 74
#define LEFT_THUMB_CLUSTER  52 53 54 69 70 71
#define RIGHT_THUMB_CLUSTER 55 56 57 72 73 74
#define THUMB_CLUSTER       52 53 54 55 56 57 69 70 71 72 73 74

/* Nav / extra clusters (bottom outer rows) */
#define LEFT_NAV_CLUSTER  64 65 66 67 68
#define RIGHT_NAV_CLUSTER 75 76 77 78 79

/* All non-alpha bottom keys (thumb arcs + nav rows) */
#define LAST_ROW 52 53 54 55 56 57 64 65 66 67 68 69 70 71 72 73 74 75 76 77 78 79

/* HRM hold-trigger sets (mirrors go60 pattern, anchored on home row) */
#define GLOVE80_HRM_LEFT_OPPOSING_KEYS  LAST_ROW RIGHT_QWERTY
#define GLOVE80_HRM_RIGHT_OPPOSING_KEYS LAST_ROW LEFT_QWERTY

#endif /* GLOVE80_KEY_GROUPS_H */
