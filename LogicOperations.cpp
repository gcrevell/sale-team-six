// LogicOperations.cpp


/* Contributors: Joseph Pietrzyk
 * parameter operand1: a boolean
 * parameter operand2: a boolean
 * returns: the logical and of the two booleans
 */ 
bool LogicOperations::logicalAnd(bool operand1, bool operand2) {
	return operand1 && operand2;
}

/* Contributors: Joseph Pietrzyk
 * parameter operand1: a boolean
 * parameter operand2: a boolean
 * returns: the logical or of the two booleans
 */
bool LogicOperations::logicalOr(bool operand1, bool operand2) {
	return operand1 || operand2;
}

/*
 *
 */
bool LogicOperations::logicalNot(bool operand) {

}

/* Contributors: Joseph Pietrzyk
 * parameter operand1: a boolean
 * parameter operand2: a boolean
 * returns: the logical band of the two booleans
 */
bool LogicOperations::logicalNand(bool operand1, bool operand2) {
	return !(operand1 && operand2);
}

/* Contributors: Joseph Pietrzyk
 * parameter operand1: a boolean
 * parameter operand2: a boolean
 * returns: the logical xor of the two booleans
 */
bool LogicOperations::logicalXor(bool operand1, bool operand2) {
	return (!(operand1 && operand2) && (operand1 || operand2));
}
