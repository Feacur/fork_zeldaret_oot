#include "global.h"
#include "z64quest_hint_commands.h"

QuestHintCmd gOverworldNaviQuestHints[] = {
    QUEST_HINT_FLAG(CHECK, EVENTCHKINF_05, false, 0x40),
    QUEST_HINT_FLAG(CHECK, EVENTCHKINF_HAS_KOKIRI_EMERALD, false, 0x41),
    QUEST_HINT_FLAG(CHECK, EVENTCHKINF_RECEIVED_WEIRD_EGG, false, 0x42),
    QUEST_HINT_FLAG(CHECK, EVENTCHKINF_TALON_RETURNED_FROM_CASTLE, false, 0x43),
    QUEST_HINT_FLAG(CHECK, EVENTCHKINF_40, false, 0x44),
    QUEST_HINT_SONG(CHECK, ITEM_SONG_SARIA, false, 0x45),
    QUEST_HINT_STRENGTH_UPG(CHECK, 0, true, 0x46),
    QUEST_HINT_FLAG(CHECK, EVENTCHKINF_HAS_GORON_RUBY, false, 0x47),
    QUEST_HINT_MAGIC(CHECK, false, 0x48),
    QUEST_HINT_FLAG(CHECK, EVENTCHKINF_33, false, 0x49),
    QUEST_HINT_FLAG(CHECK, EVENTCHKINF_HAS_ZORA_SAPPHIRE, false, 0x4A),
    QUEST_HINT_FLAG(CHECK, EVENTCHKINF_80, false, 0x4B),
    QUEST_HINT_FLAG(CHECK, EVENTCHKINF_43, false, 0x4C),
    QUEST_HINT_FLAG(CHECK, EVENTCHKINF_GOT_MASTER_SWORD, false, 0x4D),
    QUEST_HINT_ITEM(CHECK, ITEM_HOOKSHOT, ITEM_NONE, true, 0x4E),
    QUEST_HINT_MEDALLION(CHECK, ITEM_MEDALLION_FOREST, false, 0x50),
    QUEST_HINT_MEDALLION(CHECK, ITEM_MEDALLION_FIRE, false, 0x51),
    QUEST_HINT_BOOTS(CHECK, ITEM_BOOTS_IRON, false, 0x52),
    QUEST_HINT_MEDALLION(CHECK, ITEM_MEDALLION_WATER, false, 0x53),
    QUEST_HINT_FLAG(CHECK, EVENTCHKINF_AA, false, 0x54),
    QUEST_HINT_ITEM(CHECK, ITEM_LENS_OF_TRUTH, ITEM_NONE, true, 0x55),
    QUEST_HINT_MEDALLION(CHECK, ITEM_MEDALLION_SHADOW, false, 0x57),
    QUEST_HINT_SONG(CHECK, ITEM_SONG_REQUIEM, false, 0x58),
    QUEST_HINT_STRENGTH_UPG(CHECK, 1, true, 0x56),
    QUEST_HINT_MEDALLION(CHECK, ITEM_MEDALLION_SPIRIT, false, 0x5A),
    QUEST_HINT_ITEM(CHECK, ITEM_ARROW_LIGHT, ITEM_NONE, true, 0x5B),
    QUEST_HINT_FLAG(CHECK, EVENTCHKINF_DISPELED_TOWER_BARRIER, false, 0x5C),
    QUEST_HINT_END(0x5F),
};
