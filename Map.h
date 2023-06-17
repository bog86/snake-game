#include <iostream>
#include "Snake.h"

class Map {
public:
  int sx, sy; // Map window 생성 위치
  int s1_h, s1_w; // Map1의 가로 세로 길이
  int Goal[4][4] = {
    {4, 2, 1, 1},
    {4, 2, 1, 1},
    {4, 2, 1, 1},
    {4, 2, 1, 1}
  };

  Map(); // 생성자
  void InitHome(); // 처음 시작 화면 (윈도우 생성)
  void Start(int step); // 첫 번째 스테이지 실행
  void Map_msg(WINDOW* clear, int condition);
  void Home();
};
