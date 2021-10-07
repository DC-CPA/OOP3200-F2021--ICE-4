/**
 * Project OOP3200-F2021-ICE3
 * @author Katherine Bellman
 * @Student number: 100325825
 * @Course: OOP 3200
 *
 * @Date: Octorber 6th 2021
 * @version 1.0
 */

#pragma once
#ifndef  _GAME_OBJECT_
#define  _GAME_OBJECT_
#include "Vector2D.h"

class GameObject
{
public:
	//CONSTRUCTORS
	GameObject();
	GameObject(int id, float x, float y);
	GameObject(int id, const Vector2D& position);

	//RULE OF THREE
	~GameObject(); //Destructor
	GameObject(const GameObject& other_object); //Copy Constructor
	GameObject& operator=(const GameObject& other_object); //Assignment Operator

	//Accessors
	Vector2D GetPosition() const;
	int GetID() const;

	//Mutators
	void SetPosition(float x, float y);
	void SetPosition(const Vector2D& new_position);
	void SetID(int id);

	//Utility Functions
	std::string ToString() const;

private:
	Vector2D m_position;
	int m_id;
};
#endif/* defined (_GAME_OBJECT_) */

