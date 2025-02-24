#ifndef VENDINGMACHINE_H
#define VENDINGMACHNE_H
class VendingMachine {	
private:
	int Payment;

public:
	VendingMachine();
	void insertPayment();
	void itemList();
	void selectItem(int itemSelected);
	void getchange();

};
#endif