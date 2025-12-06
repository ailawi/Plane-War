#ifndef GLOBAL_H
#define GLOBAL_H

#include <graphics.h>
#include <vector>
#include <string>
#include <unordered_map>
#include "Player.h"


using namespace std;

/*
* 窗口尺寸全局常量
*/
#define WINDOW_WIDTH 720
#define WINDOW_HEIGHT 960

//是否正在进行游戏
extern bool is_Playing;




// 菜单背景图片
extern IMAGE menu_bk_image;
// 设置背景
extern IMAGE setting_bk_image;


extern IMAGE background_img;		// 背景图资源

extern Player player;



//游玩中暂停
extern IMAGE pause_img;
extern IMAGE return_game_img;
extern IMAGE return_menu_img;
extern IMAGE go_set_img;


//11.13(音乐更新)
//音乐别名和路径
const char MusicPath[][2][128] = {
    "M00","空",
    "M01","fall",
    "M02","spring",
    "M03","summer",
    "M04","winter",
    "M08","LavaChicken",
    "M10","空"
};

//音效别名和路径
const char SoundPath[][2][128] = {
    {"S00", "点击音效"},
    
    
};//音乐开关
extern int ifMusic;
//音效开关
extern int ifSound;
//音乐音量
extern int MusicVolume;
//音效音量
extern int SoundVolume;
//音乐选择
extern int MusicNum;
#endif
