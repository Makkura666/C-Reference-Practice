/**
 * SimpleBoss2.cpp
 * Contributors:
 *  * Jens Ackou
 * Description:
 * demonstrates access control under inheritence
 */

#include <iostream>
using namespace std;

class Enemy {
public:
  Enemy();
  void Attack() const;

protected:
  int m_Damage;
};

Enemy::Enemy():
  m_Damage(10)
{}

void Enemy::Attack() const {
  cout << "Attack inflicts " << m_Damage << " damage points!" << endl;
}

class Boss : public Enemy {
public:
  Boss();
  void SpecialAttack() const;

private:
  int m_DamageMultiplier;
};

Boss::Boss():
  m_DamageMultiplier(3)
{}

void Boss::SpecialAttack() const {
  cout << "Special Attack inflicts " << (m_DamageMultiplier * m_Damage);
  cout << " damage points!" << endl;
}

int main() {
  cout << "Creating an enemy." << endl;
  Enemy enemy1;
  enemy1.Attack();

  cout << "Creating an enemy." << endl;
  Boss boss1;
  boss1.Attack();
  boss1.SpecialAttack();

  return 0;
}
