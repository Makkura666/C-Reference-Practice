/**
 * OverridingBoss.cpp
 * Contributors:
 *  * Jens Ackou
 * Description:
 * demonstrates calling and overriding base member functions
 */

#include <iostream>
using namespace std;

class Enemy {
public:
  Enemy(int damage = 10);
  void virtual Taunt() const;     // made virtual to be overridden
  void virtual Attack() const;    // made virtual to be overridden

private:
  int m_Damage;
};

Enemy::Enemy(int damage):
  m_Damage(damage)
{}

void Enemy::Taunt() const {
  cout << "The enemy says he will fight you." << endl;
}

void Enemy::Attack() const {
  cout << "Attack inflicts " << m_Damage << " damage points!" << endl;
}

class Boss : public Enemy {
public:
  Boss(int damage = 30);
  void virtual Taunt() const;   // optional use of keyword virtual
  void virtual Attack() const;  // optional use of keyword virtual
};

Boss::Boss(int damage):
  Enemy(damage)                 // call base class constructor with argument
{}

void Boss::Taunt() const {      // override base class member function
  cout << "The boss says he will end your pitiful existence." << endl;
}

void Boss::Attack() const {
  Enemy::Attack();              // override base class member function
  cout << " And laughs hearily at you." << endl;
}

int main() {
  cout << "Enemy object:" << endl;
  Enemy anEnemy;
  anEnemy.Taunt();
  anEnemy.Attack();

  cout << endl << endl << "Boss object:" << endl;
  Boss aBoss;
  aBoss.Taunt();
  aBoss.Attack();
  
  return 0;
}
