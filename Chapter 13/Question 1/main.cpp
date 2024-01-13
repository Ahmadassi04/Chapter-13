#include <iostream>

enum class Monstertype{
    ogre,
    dragon,
    orc,
    giant_spider,
    slime,

};

struct Monster{
    Monstertype type{};
    std::string name{};
    int hearts{};
};

std::string monstertype(Monstertype type){

    switch(type){
        case Monstertype::ogre: return "ogre"; break;
        case Monstertype::dragon: return "dragon"; break;
        case Monstertype::orc: return "orc"; break;
        case Monstertype::giant_spider: return "giant_spider"; break;
        case Monstertype::slime: return "slime"; break;
        default: return "ERROR"; break;}

}

void printMonster(const Monster& monster){

    std::cout << "This " << monstertype(monster.type) <<" is named " << monster.name <<" and has " << monster.hearts << " health." << '\n';


}

int main(){

    Monster ogre{ Monstertype::ogre, "Torg", 145 };
	Monster slime{ Monstertype::slime, "Blurp", 23 };

	printMonster(ogre);
	printMonster(slime);

    return 0;
}
