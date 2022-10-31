#define BLACK 0
#define WHITE 1

class Player:
Player(); vector<Figure>
public:
private:
int 

class Area: // просто занятые клетки
public:
void Modification();
void updateArea();
private:
vector<vector<int>> warplace; // add ghosts for calculating position;
//vector<vector<bool>> warplace;
 

class Figure:
Figure(Area& warplace); // we can`t do this because i want to add vector figures to Area? for what?

public:
void changePosition();
void Die();
private:
int type; //BLACK or WHITE
int x;
int y;
bool isLive; 
//как хранить возможные шаги
void updateAbilityPosition();


class Scene:
Scene(Player player1, Player player2):

class Write:
//
