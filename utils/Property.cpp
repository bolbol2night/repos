#include "Property.h"
#include <string>

template <typename Name, typename Value>
Property<Name, Value>::Property(const Name& name, const Value& value): name_(name), value_(value) {}

template <typename Name, typename Value>
Property<Name, Value>::~Property() {}

template <typename Name, typename Value>
Value Property<Name, Value>::operator() () const { return value_; }

