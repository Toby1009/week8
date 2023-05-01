#pragma once
//************************************************************
// The location in the board
//************************************************************
class Position {
public:
	int x, y; // X, y Coordinate

	Position() : x(0), y(0) {}
	Position(int x, int y) : x(x), y(y) {}
	Position(const Position& ref) { *this = ref; }

	// Operator overloading
	/*Please implement your code here*/
	//define operator +
	friend Position operator+(const Position& lhs,const Position& rhs);
	//define operator +=
	Position& operator+=(const Position& other);
	//define operator -
	friend Position operator-(const Position& lhs, const Position& rhs);
	//define operator -=
	Position& operator-=(const Position& other);
	//define operator * int
	friend Position operator*(const Position& pos, const int& num);
	//define int * operator
	friend Position operator*(const int& num, const Position& pos);
	//define operator ==
	friend bool operator==(const Position& lhs, const Position& rhs);
	//define operator !=
	friend bool operator!=(const Position& lhs, const Position& rhs);
	/************************************************************************/
};
//Intent:Imp operator +
//Pre:two Position 
//Pos:sum two Position,and return result
Position operator+(const Position& lhs, const Position& rhs)
{
	Position sum;
	sum.x = lhs.x + rhs.x;
	sum.y = lhs.y + rhs.y;
	return sum;
}
//Intent:Imp operator -
//Pre:two Position 
//Pos:sub two Position,and return result
Position operator-(const Position& lhs, const Position& rhs)
{
	Position sub;
	sub.x = lhs.x - rhs.x;
	sub.y = lhs.y - rhs.y;
	return sub;
}
//Intent:Imp operator +=
//Pre:Position 
//Pos:sum two Position,and return result
Position& Position::operator+=(const Position& other)
{
	this->x += other.x;
	this->y += other.y;
	return *this;
}
//Intent:Imp operator -=
//Pre:Position 
//Pos:sub two Position,and return  result
Position& Position::operator-=(const Position& other)
{
	this->x -= other.x;
	this->y -= other.y;
	return *this;
}
//Intent:Imp operator *
//Pre:Position and int
//Pos:multiple position and int,and return result
Position operator*(const Position& pos, const int& num)
{
	Position mul;
	mul.x = pos.x * num;
	mul.y = pos.y * num;
	return mul;
}
//Intent:Imp operator *
//Pre:Position and int
//Pos:multiple int and position,and reutrn result
Position operator*(const int& num, const Position& pos)
{
	Position mul;
	mul.x = pos.x * num;
	mul.y = pos.y * num;
	return mul;
}
//Intent:Imp operator ==
//Pre:two position
//Pos:compare two position ,if same return true,or false
bool operator==(const Position& lhs, const Position& rhs)
{
	return (lhs.x == rhs.x) && (lhs.y == rhs.y);
}
//Intent:Imp operator !=
//Pre:two position
//Pos:compare two position ,if same return false,or true
bool operator!=(const Position& lhs, const Position& rhs)
{
	return (lhs.x != rhs.x) || (lhs.y != rhs.y);
}
