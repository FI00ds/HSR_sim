/*
element->num: fire=1, wind=2, lightning=3, physical=4, ice=5, imaginary=6, quantum=7

path->num: destruction=1, erudition=2, hunt=3, nihility=4, harmony=5, preservation=6, abundance=7

Stats are for lv80 characters
*/
struct Base_Character{
    char* NAME;
    float ATK;
    float DEF;
    float HP;
    float SPD;
    float aggro;
    int element;
    int path;
};

struct Base_Character id8002 = {"Destruction Trailblazer", 620.93, 460.84, 1203.5, 100.00, 125.00, 4, 1};

struct Base_Character id8004 = {"Preservation Trailblazer", 601.52, 606.38, 1241.86, 95.00, 150.00, 1, 6};

struct Base_Character id1211 = {"Bailu", 562.72, 485.10, 1319.47, 98.00, 100.00, 3, 7};

struct Base_Character id1209 = {"Yanqing", 679.14, 412.34, 892.58, 109.00, 75.00, 5, 3};

struct Base_Character id1206 = {"Sushang", 564.48, 418.95, 917.28, 107.00, 75.00, 4, 3};

struct Base_Character id1202 = {"Tingyun", 529.20, 396.90, 846.72, 112.00, 100.00, 3, 5};

struct Base_Character id1201 = {"Qingque", 652.68, 441.00, 1023.12, 98.00, 75.00, 7, 2};

struct Base_Character id1109 = {"Hook", 617.40, 352.80, 1340.64, 94.00, 125.00, 1, 1};

struct Base_Character id1108 = {"Sampo", 617.40, 396.90, 1023.12, 102.00, 100.00, 2, 4};

struct Base_Character id1107 = {"Clara", 737.35, 485.10, 1241.86, 90.00, 125.00, 4, 1};

struct Base_Character id1106 = {"Pela", 546.84, 463.05, 987.84, 105.00, 100.00, 5, 4};

struct Base_Character id1105 = {"Natasha", 476.28, 507.15, 1164.24, 98.00, 100.00, 4, 7};

struct Base_Character id1104 = {"Gepard", 543.31, 654.89, 1397.09, 92.00, 150.00, 5, 6};

struct Base_Character id1103 = {"Serval", 652.68, 374.85, 917.28, 104.00, 75.00, 3, 2};

struct Base_Character id1102 = {"Seele", 640.33, 363.83, 931.39, 115.00, 75.00, 7, 3};

struct Base_Character id1101 = {"bronya", 582.12, 533.61, 1241.86, 99.00, 100.00 , 2, 5};

struct Base_Character id1013 = {"Herta", 582.12, 396.90, 952.56, 100.00, 75.00 , 5, 2};

struct Base_Character id1009 = {"Asta", 511.56, 463.05, 1023.12, 106.00, 100.00 , 1, 5};

struct Base_Character id1008 = {"Arlan", 599.76, 330.75, 1199.52, 102.00, 125.00 , 3, 1};

struct Base_Character id1004 = {"Welt", 620.93, 509.35, 1125.43, 102.00, 100.00 , 6, 4};

struct Base_Character id1003 = {"Himeko", 756.76, 436.59, 1047.82, 96.00, 75.00 , 1, 2};

struct Base_Character id1002 = {"Dan Heng", 74.40, 54.00, 120.00, 110.00, 75.00 , 2, 3};

struct Base_Character id1001 = {"March 7th", 511.56, 573.30, 1058.40, 101.00, 150.00 , 5, 6};

struct Base_Character id1204 = {"Jing Yuan", 698.54, 485.10, 1164.24, 99.00, 75.00 , 3, 2};

struct Base_Character id1006 = {"Silver Wolf", 640.33, 460.84, 1047.82, 107.00, 100.00 , 7, 4};

struct Base_Character id1207 = {"Yukong", 599.76, 374.85, 917.28, 107.00, 100.00 , 6, 5};

struct Base_Character id1203 = {"Luocha", 756.76, 363.83, 1280.66, 101.00, 100.00 , 6, 7};

struct Base_Character id1205 = {"Blade", 543.31, 485.10, 1358.28, 97.00, 125.00 , 2, 1};

struct Base_Character id1111 = {"Luka", 543.31, 485.10, 1358.28, 97.00, 125.00 , 4, 4};

struct Base_Character id1005 = {"Kafka", 679.14, 485.10, 1086.62, 100.00, 100.00 , 3, 4};

struct Base_Character id1213 = {"Dan Heng • Imbibitor Lunae", 698.54, 363.83, 1241.86, 102.00, 125.00 , 6, 1};

struct Base_Character id1208 = {"Fu Xuan", 465.70, 606.38, 1474.70, 100.00, 150.00 , 7, 6};

struct Base_Character id1110 = {"Lynx", 493.92, 551.25, 1058.40, 100.00, 100.00 , 7, 7};

struct Base_Character id1212 = {"Jingliu", 679.14, 485.10, 1435.90, 96.00, 125.00 , 5, 1};

struct Base_Character id1210 = {"guinaifen", 582.12, 441.00, 882.00, 106.00, 100.00 , 1, 4};

struct Base_Character id1112 = {"Topaz & Numby", 620.93, 412.34, 931.39, 110.00, 75.00 , 1, 3};

struct Base_Character id1217 = {"Huohuo", 601.52, 509.35, 1358.28, 98.00, 100.00 , 2, 7};

struct Base_Character id1302 = {"Argenti", 737.35, 363.83, 1047.82, 103.00, 75.00 , 4, 2};

struct Base_Character id1215 = {"Hanya", 564.48, 352.80, 917.28, 110.00, 100.00 , 4, 5};

struct Base_Character id1303 = {"Ruan Mei", 659.74, 485.10, 1086.62, 104.00, 100.00 , 5, 5};

struct Base_Character id1214 = {"Xueyi", 599.76, 396.90, 1058.40, 103.00, 125.00 , 7, 1};

struct Base_Character id1305 = {"Dr Ratio", 776.16, 460.84, 1047.82, 103.00, 75.00 , 6, 3};

struct Base_Character id1307 = {"Black Swan", 659.74, 485.10, 1086.62, 102.00, 100.00 , 2, 4};

struct Base_Character id1306 = {"Sparkle", 523.91, 485.10, 1397.09, 101.00, 100.00 , 7, 5};

struct Base_Character id1312 = {"Misha", 599.76, 396.90, 1270.08, 96.00, 125.00 , 5, 1};