struct stat_boost{
    char* type;
    float amount;
};

struct traces{
    int id;
    struct stat_boost trace1;
    struct stat_boost trace2;
    struct stat_boost trace3;
    struct stat_boost trace4;
    struct stat_boost trace5;
    struct stat_boost trace6;
    struct stat_boost trace7;
    struct stat_boost trace8;
    struct stat_boost trace9;
    struct stat_boost trace10;
};

struct traces trid8002 = {8002, {"ATK", 0.04}, {"HP", 0.04}, {"ATK", 0.04}, {"DEF", 0.05}, {"ATK", 0.06}, {"HP", 0.06}, {"ATK", 0.06}, {"DEF", 0.075}, {"HP", 0.08}, {"ATK", 0.08}};

struct traces trid8004 = {8004, {"DEF", 0.05}, {"ATK", 0.04}, {"DEF", 0.05}, {"HP", 0.04}, {"DEF", 0.075}, {"ATK", 0.06}, {"DEF", 0.075}, {"HP", 0.06}, {"ATK", 0.08}, {"DEF", 0.10}};

struct traces trid1211 = {1211, {"HP", 0.04}, {"DEF", 0.05}, {"HP", 0.04}, {"EFRES", 0.04}, {"HP", 0.06}, {"DEF", 0.075}, {"HP", 0.06}, {"EFRES", 0.06}, {"DEF", 0.10}, {"HP", 0.08}};

struct traces trid1209 = {1209, {"ATK", 0.04}, {"ICE_DMG", 0.032}, {"ATK", 0.04}, {"HP", 0.04}, {"ATK", 0.06}, {"ICE_DMG", 0.048}, {"ATK", 0.06}, {"HP", 0.06}, {"ICE_DMG", 0.064}, {"ATK", 0.08}};

struct traces trid1206 = {1206, {"ATK", 0.04}, {"HP", 0.04}, {"ATK", 0.04}, {"DEF", 0.05}, {"ATK", 0.06}, {"HP", 0.06}, {"ATK", 0.06}, {"DEF", 0.075}, {"HP", 0.08}, {"ATK", 0.08}};

struct traces trid1202 = {1202, {"ATK", 0.04}, {"DEF", 0.05}, {"ATK", 0.04}, {"LIG_DMG", 0.032}, {"ATK", 0.06}, {"DEF", 0.075}, {"ATK", 0.06}, {"LIG_DMG", 0.048}, {"DEF", 0.10}, {"ATK", 0.08}};

struct traces trid1201 = {1201, {"ATK", 0.04}, {"QUA_DMG", 0.032}, {"ATK", 0.04}, {"DEF", 0.05}, {"ATK", 0.06}, {"QUA_DMG", 0.048}, {"ATK", 0.06}, {"DEF", 0.075}, {"QUA_DMG", 0.064}, {"ATK", 0.08}};

struct traces trid1109 = {1109, {"ATK", 0.04}, {"HP", 0.04}, {"ATK", 0.04}, {"CD", 0.053}, {"ATK", 0.06}, {"HP", 0.06}, {"ATK", 0.05}, {"CD", 0.08}, {"HP", 0.08}, {"ATK", 0.08}};

struct traces trid1108 = {1108, {"ATK", 0.04}, {"EHR", 0.04}, {"ATK", 0.04}, {"EFRES", 0.04}, {"ATK", 0.06}, {"EHR", 0.06}, {"ATK", 0.06}, {"EFRES", 0.06}, {"EHR", 0.08}, {"ATK", 0.08}};

struct traces trid1107 = {1107, {"ATK", 0.04}, {"PHY_DMG", 0.032}, {"ATK", 0.04}, {"HP", 0.04}, {"ATK", 0.06}, {"PHY_DMG", 0.048}, {"ATK", 0.06}, {"HP", 0.06}, {"PHY_DMG", 0.064}, {"ATK", 0.08}};

struct traces trid1106 = {1106, {"ICE_DMG", 0.032}, {"ATK", 0.04}, {"ICE_DMG", 0.023}, {"EHR", 0.04}, {"ICE_DMG", 0.048}, {"ATK", 0.06}, {"ICE_DMG", 0.048}, {"EHR", 0.06}, {"ATK", 0.08}, {"ICE_DMG", 0.064}};

struct traces trid1105 = {1105, {"HP", 0.04}, {"EFRES", 0.04}, {"HP", 0.04}, {"DEF", 0.05}, {"HP", 0.06}, {"EFRES", 0.06}, {"HP", 0.06}, {"DEF", 0.075}, {"EFRES", 0.08}, {"HP", 0.08}};

struct traces trid1104 = {1104, {"ICE_DMG", 0.032}, {"EFRES", 0.04}, {"ICE_DMG", 0.032}, {"DEF", 0.05}, {"ICE_DMG", 0.048}, {"EFRES", 0.06}, {"ICE_DMG", 0.048}, {"DEF", 0.075}, {"EFRES", 0.08}, {"ICE_DMG", 0.064}};

struct traces trid1103 = {1103, {"CR", 0.027}, {"EHR", 0.04}, {"CR", 0.027}, {"EFRES", 0.04}, {"CR", 0.04}, {"EHR", 0.06}, {"CR", 0.04}, {"EFRES", 0.06}, {"EHR", 0.08}, {"CR", 0.053}};

struct traces trid1102 = {1102, {"ATK", 0.04}, {"CD", 0.053}, {"ATK", 0.04}, {"DEF", 0.05}, {"ATK", 0.06}, {"CD", 0.08}, {"ATK", 0.06}, {"DEF", 0.075}, {"CD", 0.107}, {"ATK", 0.08}};

struct traces trid1101 = {1101, {"WIN_DMG", 0.032}, {"CD", 0.053}, {"WIN_DMG", 0.032}, {"EFRES", 0.04}, {"WIN_DMG", 0.048}, {"CD", 0.08}, {"WIN_DMG", 0.048}, {"EFRES", 0.06}, {"CD", 0.107}, {"WIN_DMG", 0.064}};

struct traces trid1013 = {1013, {"ICE_DMG", 0.032}, {"DEF", 0.05}, {"ICE_DMG", 0.032}, {"CR", 0.027}, {"ICE_DMG", 0.048}, {"DEF", 0.075}, {"ICE_DMG", 0.048}, {"CR", 0.04}, {"DEF", 0.10}, {"ICE_DMG", 0.064}};

struct traces trid1009 = {1009, {"FIR_DMG", 0.032}, {"DEF", 0.05}, {"FIR_DMG", 0.032}, {"CR", 0.027}, {"FIR_DMG", 0.048}, {"DEF", 0.075}, {"FIR_DMG", 0.048}, {"CR", 0.04}, {"DEF", 0.10}, {"FIR_DMG", 0.064}};

struct traces trid1008 = {1008, {"ATK", 0.04}, {"EFRES", 0.04}, {"ATK", 0.04}, {"HP", 0.04}, {"ATK", 0.06}, {"EFRES", 0.06}, {"ATK", 0.06}, {"HP", 0.06}, {"EFRES", 0.08}, {"ATK", 0.08}};

struct traces trid1004 = {1004, {"ATK", 0.04}, {"IMA_DMG", 0.032}, {"ATK", 0.04}, {"EFRES", 0.04}, {"ATK", 0.06}, {"IMA_DMG", 0.048}, {"ATK", 0.06}, {"EFRES", 0.06}, {"IMA_DMG", 0.064}, {"ATK", 0.08}};

struct traces trid1003 = {1003, {"FIR_DMG", 0.032}, {"ATK", 0.04}, {"FIR_DMG", 0.032}, {"EFRES", 0.04}, {"FIR_DMG", 0.048}, {"ATK", 0.06}, {"FIR_DMG", 0.048}, {"EFRES", 0.06}, {"ATK", 0.08}, {"FIR_DMG", 0.064}};

struct traces trid1002 = {1002, {"WIN_DMG", 0.32}, {"ATK", 0.04}, {"WIN_DMG", 0.032}, {"DEF", 0.05}, {"WIN_DMG", 0.048}, {"ATK", 0.06}, {"WIN_DMG", 0.048}, {"DEF", 0.075}, {"ATK", 0.08}, {"WIN_DMG", 0.064}};

struct traces trid1001 = {1001, {"DEF", 0.075}, {"DEF", 0.05}, {"ICE_DMG", 0.05}, {"EFRES", 0.04}, {"ICE_DMG", 0.048}, {"EFRES", 0.06}, {"DEF", 0.075}, {"ICE_DMG", 0.048}, {"ICE_DMG", 0.064}, {"DEF", 0.10}};

struct traces trid1204 = {1204, {"ATK", 0.04}, {"CR", 0.027}, {"ATK", 0.04}, {"DEF", 0.05}, {"ATK", 0.06}, {"CR", 0.04}, {"ATK", 0.06}, {"DEF", 0.075}, {"CR", 0.053}, {"ATK", 0.08}};

struct traces trid1006 = {1006, {"ATK", 0.04}, {"EHR", 0.04}, {"ATK", 0.04}, {"QUA_DMG", 0.032}, {"ATK", 0.06}, {"EHR", 0.06}, {"ATK", 0.06}, {"QUA_DMG", 0.048}, {"EHR", 0.08}, {"ATK", 0.08}};

struct traces trid1207 = {1207, {"IMA_DMG", 0.032}, {"HP", 0.04}, {"IMA_DMG", 0.032}, {"ATK", 0.04}, {"IMA_DMG", 0.048}, {"HP", 0.06}, {"IMA_DMG", 0.048}, {"ATK", 0.06}, {"HP", 0.08}, {"IMA_DMG", 0.064}};

struct traces trid1203 = {1203, {"ATK", 0.04}, {"HP", 0.04}, {"ATK", 0.04}, {"DEF", 0.05}, {"ATK", 0.06}, {"HP", 0.06}, {"ATK", 0.06}, {"DEF", 0.075}, {"HP", 0.08}, {"ATK", 0.08}};

struct traces trid1205 = {1205, {"HP", 0.04}, {"CR", 0.027}, {"HP", 0.04}, {"EFRES", 0.04}, {"HP", 0.06}, {"CR", 0.04}, {"HP", 0.06}, {"EFRES", 0.06}, {"CR", 0.053}, {"HP", 0.08}};

struct traces trid1111 = {1111, {"ATK", 0.04}, {"EHR", 0.04}, {"ATK", 0.04}, {"DEF", 0.05}, {"ATK", 0.06}, {"EHR", 0.06}, {"ATK", 0.06}, {"DEF", 0.075}, {"EHR", 0.08}, {"ATK", 0.08}};

struct traces trid1005 = {1005, {"ATK", 0.04}, {"EHR", 0.04}, {"ATK", 0.04}, {"HP", 0.04}, {"ATK", 0.06}, {"EHR", 0.06}, {"ATK", 0.06}, {"HP", 0.06}, {"EHR", 0.08}, {"ATK", 0.08}};

struct traces trid1213 = {1213, {"IMA_DMG", 0.032}, {"CR", 0.027}, {"IMA_DMG", 0.032}, {"HP", 0.04}, {"IMA_DMG", 0.048}, {"CR", 0.04}, {"IMA_DMG", 0.048}, {"HP", 0.06}, {"CR", 0.053}, {"IMA_DMG", 0.064}};

struct traces trid1208 = {1208, {"CR", 0.027}, {"HP", 0.04}, {"CR", 0.027}, {"EFRES", 0.04}, {"CR", 0.04}, {"HP", 0.06}, {"CR", 0.04}, {"EFRES", 0.06}, {"HP", 0.08}, {"CR", 0.053}};

struct traces trid1110 = {1110, {"HP", 0.04}, {"DEF", 0.05}, {"HP", 0.04}, {"EFRES", 0.04}, {"HP", 0.06}, {"DEF", 0.075}, {"HP", 0.06}, {"EFRES", 0.06}, {"DEF", 0.10}, {"HP", 0.08}};

struct traces trid1212 = {1212, {"CD", 0.053}, {"SPD", 2.0}, {"CD", 0.053}, {"HP", 0.04}, {"CD", 0.08}, {"SPD", 3.0}, {"CD", 0.08}, {"HP", 0.06}, {"SPD", 4.0}, {"CD", 0.107}};

struct traces trid1210 = {1210, {"FIR_DMG", 0.032}, {"BRK", 0.053}, {"FIR_DMG", 0.032}, {"EHR", 0.04}, {"FIR_DMG", 0.048}, {"BRK", 0.08}, {"FIR_DMG", 0.048}, {"EHR", 0.06}, {"BRK", 0.107}, {"FIR_DMG", 0.064}};

struct traces trid1112 = {1112, {"FIR_DMG", 0.032}, {"CR", 0.027}, {"FIR_DMG", 0.032}, {"HP", 0.04}, {"FIR_DMG", 0.048}, {"CR", 0.04}, {"FIR_DMG", 0.048}, {"HP", 0.06}, {"CR", 0.053}, {"FIR_DMG", 0.064}};

struct traces trid1217 = {1217, {"HP", 0.04}, {"EFRES", 0.04}, {"HP", 0.04}, {"SPD", 2.0}, {"HP", 0.06}, {"EFRES", 0.06}, {"HP", 0.06}, {"SPD", 3.0}, {"EFRES", 0.08}, {"HP", 0.08}};

struct traces trid1302 = {1302, {"ATK", 0.04}, {"PHY_DMG", 0.032}, {"ATK", 0.04}, {"HP", 0.04}, {"ATK", 0.06}, {"PHY_DMG", 0.048}, {"ATK", 0.06}, {"HP", 0.06}, {"PHY_DMG", 0.064}, {"ATK", 0.08}};

struct traces trid1215 = {1215, {"ATK", 0.04}, {"SPD", 2.0}, {"ATK", 0.04}, {"HP", 0.04}, {"ATK", 0.06}, {"SPD", 3.0}, {"ATK", 0.06}, {"HP", 0.06}, {"SPD", 4.0}, {"ATK", 0.08}};

struct traces trid1303 = {1303, {"BRK", 0.053}, {"DEF", 0.05}, {"BRK", 0.053}, {"SPD", 2.0}, {"BRK", 0.08}, {"DEF", 0.075}, {"BRK", 0.08}, {"SPD", 3.0}, {"DEF", 0.10}, {"BRK", 0.107}};

struct traces trid1214 = {1214, {"BRK", 0.053}, {"HP", 0.04}, {"BRK", 0.053}, {"QUA_DMG", 0.032}, {"BRK", 0.08}, {"HP", 0.06}, {"BRK", 0.08}, {"QUA_DMG", 0.048}, {"HP", 0.08}, {"BRK", 0.107}};

struct traces trid1305 = {1305, {"ATK", 0.04}, {"CR", 0.027}, {"ATK", 0.04}, {"DEF", 0.05}, {"ATK", 0.06}, {"CR", 0.04}, {"ATK", 0.06}, {"DEF", 0.075}, {"CR", 0.053}, {"ATK", 0.08}};

struct traces trid1307 = {1307, {"ATK", 0.04}, {"WIN_DMG", 0.032}, {"ATK", 0.04}, {"EHR", 0.04}, {"ATK", 0.06}, {"WUB_DMG", 0.048}, {"ATK", 0.06}, {"EHR", 0.06}, {"WIN_DMG", 0.064}, {"ATK", 0.08}};

struct traces trid1306 = {1306, {"HP", 0.04}, {"CD", 0.053}, {"HP", 0.04}, {"EFRES", 0.04}, {"HP", 0.06}, {"CD", 0.08}, {"HP", 0.06}, {"EFRES", 0.06}, {"CD", 0.107}, {"HP", 0.08}};

struct traces trid1312 = {1312, {"ICE_DMG", 0.032}, {"DEF", 0.05}, {"ICE_DMG", 0.032}, {"CR", 0.027}, {"ICE_DMG", 0.048}, {"DEF", 0.075}, {"ICE_DMG", 0.048}, {"CR", 0.04}, {"DEF", 0.10}, {"ICE_DMG", 0.064}};