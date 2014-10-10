/*  LogicOperations.h
 *  Written by Joseph Pietrzyk and Garret Patterson
 *  A static class used to perform boolean logic
 */

class LogicOperations {
public:
	static bool logicalAnd(bool operand1, bool operand2);
	static bool logicalOr(bool operand1, bool operand2);
	static bool logicalNot(bool operand);
	static bool logicalNand(bool operand1, bool operand2);
	static bool logicalNor(bool operand1, bool operand2);
	static bool logicalXor(bool operand1, bool operand2);
	static bool logicalIf(bool operand1, bool operand2);
	static bool logicalIff(bool operand1, bool operand2);
};
