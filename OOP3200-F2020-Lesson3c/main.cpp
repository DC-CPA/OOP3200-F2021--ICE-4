/**
 * Project OOP3200-F2021-ICE3
 * @author Katherine Bellman
 * @Student number: 100325825
 * @Course: OOP 3200
 *
 * @Date: Octorber 6th 2021
 * @version 1.0
 */

#include <iomanip>
#include <iostream>

#include "GameObject.h"
#include "Vector2D.h"

int main()
{
	GameObject	gameObject1;
	Vector2D point1;
    std::cout << "Enter the first point (x, y): ";
	std::cin >>  point1;
	std::cout << "\n--------------------------------------------------------------" << std::endl;
	std::cout << "You Entered " << point1 << " for the first point" << std::endl;
	std::cout << "--------------------------------------------------------------\n" << std::endl;
	gameObject1.SetPosition(point1);

	GameObject gameObject2;
	Vector2D point2;
	std::cout << "Enter the second point (x, y): ";
	std::cin >> point2;
	std::cout << "\n--------------------------------------------------------------" << std::endl;
	std::cout << "You Entered " << point2 << " for the second point" << std::endl;
	std::cout << "--------------------------------------------------------------\n" << std::endl;
	gameObject2.SetPosition(point2);

	std::cout << std::fixed << std::setprecision(3);
	std::cout << "Magnitude of first gameObject is: " << gameObject1.GetPosition().GetMagnitude() << std::endl;
	std::cout << "Magnitude of second gameObject is: " << gameObject2.GetPosition().GetMagnitude() << std::endl;
	std::cout << "Distance between first point and second point is: " << Vector2D::Distance(gameObject1.GetPosition(), gameObject2.GetPosition()) << std::endl;
	std::cout << "--------------------------------------------------------------\n" << std::endl;

	std::cout << "The angle (in degrees) from the first vector to the second vector is: " << Vector2D::SignedAngle(gameObject1.GetPosition(), gameObject2.GetPosition()) << std::endl;
	
}

