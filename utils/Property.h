template <typename Name, typename Value>
class Property {
public:
  Property(const Name& name, const Value& value);
  virtual ~Property();

  Value operator() () const;

private:
  const Name& name_;
  Value value_;
};

