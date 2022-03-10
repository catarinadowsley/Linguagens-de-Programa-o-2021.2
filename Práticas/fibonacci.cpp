/*****************************************************************************/
/*************************** Arquivo fibonacci.cpp ***************************/

int computeFibonacci (int idx) {

	// Índice não positivos devem ser tratados na função principal

	if (idx == 0)	
		return 0;
	else if (idx == 1)
		return 1;
	else
		return computeFibonacci (idx - 1) + computeFibonacci (idx - 2);
}
