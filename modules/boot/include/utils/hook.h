#include "libtww/include/dolphin/gctypes.h"

#define HOOK_AMNT 18
enum HookIndex {
    HK_LIB_INIT_INDEX = 0,
    HK_LIB_GAME_LOOP_INDEX = 1,
    HK_LIB_DRAW_INDEX = 2,
    HK_LIB_READ_CONTROLLER_INDEX = 3,
    HK_SUPER_CLAWSHOT_INDEX = 4,
    HK_DISABLE_GRAV_INDEX = 5,
    HK_UNRESTRICTED_ITEMS_INDEX = 6,
    HK_TRANSFORM_ANYWHERE_INDEX = 7,
    HK_INVINCIBLE_ENEMIES_INDEX = 8,
    HK_ONEVENTBIT_INDEX = 9,
    HK_OFFEVENTBIT_INDEX = 10,
    HK_ONSWITCH_INDEX = 11,
    HK_PUTSAVE_INDEX = 12,
    HK_MYEXCEPTIONCALLBACK_INDEX = 13
};

extern int spawn_id_input;
extern bool g_flagLogEnabled;
extern int g_lastValidPoint;
extern const char* g_stageName;
extern s8 g_roomNo;
extern bool g_save;
extern s16 g_point;

namespace Hook {
void applyHooks();
}  // namespace Hook