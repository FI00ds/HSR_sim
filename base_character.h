/*
element->num: fire=1, wind=2, lightning=3, physical=4, ice=5, imaginary=6, quantum=7

path->num: destruction=1, erudition=2, hunt=3, nihility=4, harmony=5, preservation=6, abundance=7

Stats are for lv80 characters
*/
struct Base_Character{
    float ATK;
    float DEF;
    float HP;
    int SPD;
    float aggro;
    int element;
    int path;
};

struct Base_Character Trailblazer_des = {620.93, 460.84, 1203.5, 100, 125.00, 4, 1};

struct Base_Character Trailblazer_pre = {601.52, 606.38, 1241.86, 95, 150.00, 1, 6};

struct Base_Character Bailu = {562.72, 485.10, 1319.47, 98.00, 100.00, 3, 7};

struct Base_Character Yanqing = {679.14, 412.34, 892.58, 109.00, 75.00, 5, 3};

struct Base_Character Sushang = {564.48, 418.95, 917.28, 107.00, 75.00, 4, 3};

struct Base_Character Tingyun = {529.20, 396.90, 846.72, 112.00, 100.00, 3, 5};

struct Base_Character Qingque = {652.68, 441.00, 1023.12, 98.00, 75.00, 7, 2};

struct Base_Character Hook = {617.40, 352.80, 1340.64, 94.00, 125.00, 1, 1};

struct Base_Character Sampo = {617.40, 396.90, 1023.12, 102.00, 100.00, 2, 4};

struct Base_Character Clara = {737.35, 485.10, 1241.86, 90.00, 125.00, 4, 1};

struct Base_Character Pela = {546.84, 463.05, 987.84, 105.00, 100.00, 5, 4};

struct Base_Character Natasha = {476.28, 507.15, 1164.24, 98.00, 100.00, 4, 7};

struct Base_Character Gepard = {543.31, 654.89, 1397.09, 92.00, 150.00, 5, 6};

struct Base_Character Serval = {652.68, 374.85, 917.28, 104.00, 75.00, 3, 2};

struct Base_Character Seele = {640.33, 363.83, 931.39, 115.00, 75.00, 7, 3};

struct Base_Character Bronya = {582.12, 533.61, 1241.86, 99.00, 100.00 , 2, 5};

struct Base_Character Herta = {582.12, 396.90, 952.56, 100.00, 75.00 , 5, 2};

struct Base_Character Asta = {511.56, 463.05, 1023.12, 106.00, 100.00 , 1, 5};

struct Base_Character Arlan = {599.76, 330.75, 1199.52, 102.00, 125.00 , 3, 1};

struct Base_Character Welt = {620.93, 509.35, 1125.43, 102.00, 100.00 , 6, 4};

struct Base_Character Himeko = {756.76, 436.59, 1047.82, 96.00, 75.00 , 1, 2};

struct Base_Character Dan_Heng = {74.40, 54.00, 120.00, 110.00, 75.00 , 2, 3};

struct Base_Character March_7th = {511.56, 573.30, 1058.40, 101.00, 150.00 , 5, 6};

struct Base_Character Jing_Yuan = {698.54, 485.10, 1164.24, 99.00, 75.00 , 3, 2};

struct Base_Character Silver_Wolf = {640.33, 460.84, 1047.82, 107.00, 100.00 , 7, 4};

struct Base_Character Yukong = {599.76, 374.85, 917.28, 107.00, 100.00 , 6, 5};

struct Base_Character Luocha = {756.76, 363.83, 1280.66, 101.00, 100.00 , 6, 7};

struct Base_Character Blade = {543.31, 485.10, 1358.28, 97.00, 125.00 , 2, 1};

struct Base_Character Luka = {543.31, 485.10, 1358.28, 97.00, 125.00 , 4, 4};

struct Base_Character Kafka = {679.14, 485.10, 1086.62, 100.00, 100.00 , 3, 4};

struct Base_Character Dan_Heng_IL = {698.54, 363.83, 1241.86, 102.00, 125.00 , 6, 1};

struct Base_Character Fu_Xuan = {465.70, 606.38, 1474.70, 100.00, 150.00 , 7, 6};

struct Base_Character Lynx = {493.92, 551.25, 1058.40, 100.00, 100.00 , 7, 7};

struct Base_Character Jingliu = {679.14, 485.10, 1435.90, 96.00, 125.00 , 5, 1};

struct Base_Character Guinaifen = {582.12, 441.00, 882.00, 106.00, 100.00 , 1, 4};

struct Base_Character Topaz = {620.93, 412.34, 931.39, 110.00, 75.00 , 1, 3};

struct Base_Character Huohuo = {601.52, 509.35, 1358.28, 98.00, 100.00 , 2, 7};

struct Base_Character Argenti = {737.35, 363.83, 1047.82, 103.00, 75.00 , 4, 2};

struct Base_Character Hanya = {564.48, 352.80, 917.28, 110.00, 100.00 , 4, 5};

struct Base_Character Ruan_Mei = {659.74, 485.10, 1086.62, 104.00, 100.00 , 5, 5};

struct Base_Character Xueyi = {599.76, 396.90, 1058.40, 103.00, 125.00 , 7, 1};

struct Base_Character Dr_Ratio = {776.16, 460.84, 1047.82, 103.00, 75.00 , 6, 3};

struct Base_Character Black_Swan = {659.74, 485.10, 1086.62, 102.00, 100.00 , 2, 4};

struct Base_Character Sparkle = {523.91, 485.10, 1397.09, 101.00, 100.00 , 7, 5};

struct Base_Character Misha = {599.76, 396.90, 1270.08, 96.00, 125.00 , 5, 1};