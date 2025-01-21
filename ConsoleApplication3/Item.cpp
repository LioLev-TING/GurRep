#include "Ekronot-Ex10-gurlev1788\Ex10Files\Item.h"

Item::Item(std::string name, std::string serialNumber, double unitPrice, ItemCategory category)
{
	if (serialNumber.size() != 5) { throw std::invalid_argument("Serial Number Error: Serial numbers are exactly 5 charcter long!"); }
	if (unitPrice < 0) { throw std::invalid_argument("Price Error: The price of an item must be greater/equal to 0!"); }
	_name = name;
	_serialNumber = serialNumber;
	_unitPrice = unitPrice;
	_category = category;
}

double Item::totalPrice() const { return _count * _unitPrice; }

bool Item::operator<(const Item& other) const { return _serialNumber < other._serialNumber; }

bool Item::operator>(const Item& other) const { return _serialNumber > other._serialNumber; }

bool Item::operator==(const Item& other) const { return _serialNumber == other._serialNumber; }

std::string Item::getName() const { return _name; }

std::string Item::getSerial() const { return _serialNumber; }

double Item::getPrice() const { return _unitPrice; }

int Item::getCount() const { return _count; }

ItemCategory Item::getCategory() const { return _category; }

void Item::setCount(const int newCount) { _count = newCount; }

std::ostream& operator<<(std::ostream& os, const Item& item)
{
	os << "[Serial: " << item._serialNumber
		<< "Name: " << item._name
		<< "Category: " << getItemCategoryString(item._category)
		<< "Price: " << item._unitPrice
		<< "Amount: " << item._count << "]"; 
	return os;
}