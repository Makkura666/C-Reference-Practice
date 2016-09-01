/**
 * PolymorphicBadGuy.cpp
 * Contributors:
 *  * Jens Ackou
 * Description:
 * calling member functions dynamically
 */

#include <iostream>
using namespace std;

class Enemy {
public:
  Enemy(int damage = 10);
  virtual ~Enemy();
  void virtual Attack() const;    // made virtual to be overridden

protected:
  int* m_pDamage;
};

Enemy::Enemy(int damage)
{
  m_pDamage = new int(damage);
}

Enemy::~Enemy() {
  cout << "In enemy destructor, deleting m_pDamage" << endl;
  delete m_pDamage;
  m_pDamage = 0;
}

void Enemy::Attack() const {
  cout << "Attack inflicts " << m_pDamage << " damage points!" << endl;
}

class Boss : public Enemy {
public:
  Boss(int damage = 3);
  virtual ~Boss();
  void virtual Attack() const;  // optional use of keyword virtual

protected:
  int* m_pMultiplier;
};

Boss::Boss(int multiplier) {
  m_pMultiplier = new int(multiplier);
}

Boss::~Boss() {
  cout << "In Boss destructor, deleting m_pMultiplier." << endl;
  delete m_pMultiplier;
  m_pMultiplier = 0;
}

void Boss::Attack() const {
  cout << "A boss attacks and inflicts " << (*m_pDamage) * (*m_pMultiplier)
       << " damage points.";
}

int main() {
  cout << "Calling Attack() on Boss object through pointer to Enemy:" << endl;
  Enemy* pBadGuy = new Boss();
  pBadGuy->Attack();

  cout << endl << endl << "Deleting pointer to Enemy:" << endl;
  delete pBadGuy;
  pBadGuy = 0;

  return 0;
}
